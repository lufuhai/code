//#include<string>
////using namespace std;
//using std::string;
//
//int main()
//{
//	std::string s0;
//	string s1;
//
//	return 0;
//}
#include<iostream>
#include<string>
using namespace std;


//int main()
//{
//	string s0; // **
//	string s1("hello world"); // **
//	string s2(s1); // **
//	string s3(s1, 6, 10); // *
//	string s4(s1, 6, string::npos);
//	string s5(s1, 6, 3);
//	string s6(10, 'x');
//
//	cout << s3 << endl;
//	cout << s4 << endl;
//	cout << s5 << endl;
//	cout << s6 << endl;
//
//	return 0;
//}

//int main()
//{
//	string s1("hello world");
//	cout << s1.size() << endl;
//	cout << s1.length() << endl;
//	cout << s1.capacity() << endl;
//
//	s1.push_back('!');
//	s1.push_back('!');
//	s1.push_back('!');
//	s1.push_back('!');
//	s1.push_back('!');
//	s1.push_back('!');
//	s1.push_back('!');
//	s1.push_back('!');
//	cout << s1 << endl;
//	cout << s1.capacity() << endl;
//
//	int n = 100;
//	string numstr;
//	// 知道需要多少空间的场景解决string增容缺陷
//	// 改变容量空间，不插入数据
//	numstr.reserve(n);
//	// 改变容量空间，同时对这段空间初始化 （string很少用）
//	//numstr.resize(n, 'x');
//	int capacity = numstr.capacity();
//	cout << "capacity:" << numstr.capacity() << endl;
//	for (int i = 0; i < n; ++i)
//	{
//		numstr.push_back('0' + i);
//		if (capacity != numstr.capacity())
//		{
//			cout << "capacity:" << numstr.capacity() << endl;
//			capacity = numstr.capacity();
//		}
//	}
//	cout << numstr << endl;
//
//	return 0;
//}

class Solution {
public:
	/*int StrToInt(string str) {
		int num = 0;
		for (size_t i = 0; i < str.size(); ++i)
		{
		num *= 10;
		num += str[i] - '0';
		}

		return num;
		}*/

	int StrToInt(string str) {
		int num = 0;
		string::iterator it = str.begin();
		while (it != str.end())
		{
			num *= 10;
			num += *it - '0';
			++it;
		}

		num = 0;
		//string::reverse_iterator rit = str.rbegin();
		auto rit = str.rbegin();
		while (rit != str.rend())
		{
			num *= 10;
			num += *rit - '0';
			++rit;
		}

		return num;
	}

	// reserve 
	string Reverse(const string& s)
	{
		//int begin = 0, end = s.size()-1;
		//while (begin < end)
		//{
		//	//swap(s[begin], s.at(end));
		//	swap(s[begin], s[end]);
		//	++begin;
		//	--end;
		//}

		string::const_iterator first = s.begin();
		string::const_iterator last = s.end()-1;
		while (first < last)
		{
			//*first = 'x';
			//swap(*first, *last);
			++first;
			--last;
		}

		return s;
	}
};

// 总结一下：
// string遍历建议使用 下标+[] 或范围for，但是我们也要知道迭代器的用法
// 因为迭代器是容易通用遍历方式

int main()
{
	try
	{
		cout << Solution().StrToInt("1234") << endl;
		cout << Solution().Reverse("1234") << endl;
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}

	string s("hello");
	s.push_back('\0');
	s.push_back('x');
	s.push_back('x');
	s.push_back('x');
	s.append("world");
	s += '!'; //  push_back
	s += "hello"; // append

	// C++11 范围for，STL的容器都支持范围for
	// 范围for的底层又是迭代器
	for (auto e: s)
	{
		cout << e << " ";
	}
	cout << endl;

	cout << s.c_str() << endl;
	cout << s << endl;


	return 0;
}