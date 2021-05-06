#include<iostream>
#include<string>
#include<assert.h>
using namespace std;
namespace bit
{
	class string
	{
	public:
		typedef char* iterator;
	public:
		string(const char* str = "")
		{
			_size = strlen(str);
			_capacity = _size;
			_str = new char[_capacity + 1];
			strcpy(_str, str);
		}
		string(const string& s) : _str(nullptr), _size(0), _capacity(0)
		{
			string tmp(s._str);
			this->swap(tmp);
		}
		string& operator=(const string &s)
		{
			if (this != &s)
			{
				string temp(s);
				this->swap(temp);
			}
			return *this;
		}
		~string()
		{
			if (_str)
			{
				delete[] _str;
				_str = nullptr;
			}
		}
		iterator begin()
		{
			return _str;
		}
		iterator end()
		{
			return _str + _size;
		}
		void push_back(char c)
		{
			if (_size == _capacity)
				reserve(_capacity * 2);
			_str[_size++] = c;
			_str[_size] = '\0';
		}
		string& operator+=(char c)
		{
			push_back(c);
			return *this;
		}
		void append(const char* str);
		string& operator+=(const char* str);
		void clear()
		{
			_size = 0;
			_str[_size] = '\0';
		}
		void swap(string& s)
		{
			std::swap(_str, s._str);
			std::swap(_size, s._size);
			std::swap(_capacity, s._capacity);
		}
		const char* C_Str()const
		{
			return _str;
		}
		size_t size()const
		{
			return _size;
		}
		size_t capacity()const
		{
			return _capacity;
		}
		bool empty()const
		{
			return _size == 0;
		}
		void resize(size_t newSize, char c = '\0')
		{
			if (newSize > _size)
			{				
				if (newSize > _capacity)
				{
					reserve(newSize);
				}
				memset(_str + _size, c, newSize - _size);
			}
			_size = newSize;
			_str[newSize] = '\0';
		}
		void reserve(size_t newCapacity)
		{
			if (newCapacity > _capacity)
			{
				char* str = new char[newCapacity + 1];
				strcpy(str, _str);
				delete[] _str;
				_str = str;
				_capacity = newCapacity;
			}
		}
		char& operator[](size_t index)
		{
			assert(index < _size);
			return _str[index];
		}
		const char& operator[](size_t index)const
		{
			assert(index < _size);
			return _str[index];
		bool operator<(const string& s)const
		{
			int res = strcmp(_str, s._str);
			if (res < 0)
				return true;
			return false;
		}
		bool operator<=(const string& s)const
		{
			return !(*this > s);
		}
		bool operator>(const string& s)const
		{
			int res = strcmp(_str, s._str);
			if (res > 0)
				return true;
			return false;
		}
		bool operator>=(const string& s)const
		{
			return !(*this < s);
		}
		bool operator==(const string& s)const
		{
			int res = strcmp(_str, s._str);
			if (res == 0)
				return true;
			return false;
		}
		bool operator!=(const string& s)const
		{
			return !(*this == s);
		}
		size_t find(char c, size_t pos = 0) const
		{
			for (size_t i = pos; i < _size; ++i)
			{
				if (_str[i] == c)
					return i;
			}

			return -1;
		}
		size_t find(const char* s, size_t pos = 0) const
		{
			assert(s);
			assert(pos < _size);
			const char* src = _str + pos;
			while (*src)
			{
				const char* match = s;
				const char *cur = src;
				while (*match && *match == *cur)
				{
					++match;
					++cur;
				}
				if (*match == '\0')
				{
					return src - _str;//·µ»ØÏÂ±ê
				}
				else
				{
					++src;
				}
			}
			return -1;
		}
		string& insert(size_t pos, char c)
		{
			assert(pos <= _size);
			if (_size > _capacity)
			{
				char *newstr = new char[_capacity * 2 + 1];
				strcpy(newstr, _str);
				delete[] _str;
				_str = newstr;
				_capacity *= 2;
			}
			for (int i = _size; i >= (int)pos; --i)
			{
				_str[i + 1] = _str[i];
			}
			_str[pos] = c;
			_size++;
			return *this;
		}
		string& insert(size_t pos, const char* str)
		{
			size_t len = strlen(str);
			if (_size + len > _capacity)
			{
				char *newstr = new char[_capacity * 2 + 1];
				strcpy(newstr, _str);
				delete[] _str;
				_str = newstr;
				_capacity *= 2;
			}
			for (int i = _size; i >= (int)pos; --i)
			{
				_str[len + i] = _str[i];
			}
			while (*str != '\0')
			{
				_str[pos++] = *str++;
			}
			_size += len;
			return *this;
		}	
		string& erase(size_t pos, size_t len)
		{
			assert(pos < _size);
			if (pos + len >= _size)
			{
				_str[pos] = '\0';
				_size = pos;
			}
			else
			{
				strcpy(_str + pos, _str + pos + len);
				_size -= len;
			}
			return *this;
		}
	private:
		friend ostream& operator<<(ostream& _cout, const bit::string& s);
		friend istream& operator>>(istream& _cin, bit::string& s);
	private:
		char* _str;
		size_t _capacity;
		size_t _size;
	};
};
istream& bit::operator>>(istream& _cin, bit::string& s)
{
	char *str = (char *)malloc(sizeof(char)* 100);
	char *buf = str;
	int i = 1;
	while ((*buf = getchar()) == ' ' || (*buf == '\n'));
	for (;; ++i)
	{
		if (*buf == '\n') 
		{
			*buf = '\0';
			break;
		}
		else if (*buf == ' ') 
		{
			*buf = '\0';
			break;
		}
		else if (i % 100 == 0) 
		{
			i += 100; 
			str = (char *)realloc(str, i);
		}
		else  
		{
			buf = (str + i);
			*buf = getchar();
		}
	}
	s._str = str;
	s._capacity = s._size = i;

	return _cin;
}
ostream& bit::operator<<(ostream& _cout, const bit::string& s)
{
	for (size_t i = 0; i < s.size(); ++i)
	{
		_cout << s[i];
	}
	return _cout;
}



//#include<iostream>
//#include<string>
//using namespace std;
//class String
//{
//public:
//	String(const char* str = "")
//	{
//		if (str == nullptr)
//		{
//			str = "";
//		}
//		_str = new char[strlen(str) + 1];
//		strcpy(_str, str);
//	}
//	String& operator=(const String& s)
//	{
//		if (this != &s)
//		{
//			char* temp = new char[strlen(s._str) + 1];
//			strcpy(temp, s._str);
//			_str = temp;
//		}
//		return *this;
//	}
//	~String()
//	{
//		if (_str)
//		{
//			delete[]_str;
//			_str = nullptr;
//		}
//	}
//	void strShow()
//	{
//		cout << _str << endl;
//	}
//private:
//	char* _str;
//};
//int main()
//{
//	String s1;
//	String s2("Hello");
//	String s3(s2);
//	String s4("aaaaaaaaaa");
//	s1.strShow();
//	s1 = s2;
//	s2.strShow();
//	s3.strShow();
//	s2 = s4;
//	s2.strShow();
//	return 0;
//
//}
//
//
