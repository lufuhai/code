#include<iostream>
#include<string>
using namespace std;

//class Person
//{
//public:
//	void Print()
//	{
//		cout << "name:" << _name << endl;
//		cout << "age:" << _age << endl;
//	}
//private:
//	string _name = "peter"; // ����
//protected:
//	int _age = 18;  // ����
//};
//
//// �̳к����Person�ĳ�Ա����Ա����+��Ա�����������������һ���֡��������ֳ���Student��Teacher������Person�ĳ�Ա����������ʹ�ü��Ӵ��ڲ鿴Student��Teacher���󣬿��Կ��������ĸ��á�����Print���Կ�����Ա�����ĸ��á�
//class Student : public Person
//{
//public:
//	void func()
//	{
//		//cout << _name << endl; // ���ɼ�
//		cout << _age << endl;  // protected
//	}
//protected:
//	int _stuid; // ѧ��
//};
//
//class Teacher : public Person
//{
//protected:
//	int _jobid; // ����
//};
//
//int main()
//{
//	Student s;
//	Teacher t;
//	//s._name;
//	s.Print();
//	t.Print();
//
//	return 0;
//}

//class Person
//{
//
//public:
//	// C++11 ��ȱʡֵ
//	string _name = "С��"; // ����
//	string _sex = "��";  // �Ա�
//protected:
//	int	_age = 18;	 // ����
//};
//
//class Student : public Person
//{
//public:
//	int _No; // ѧ��
//};
//
//void Print(Person& r)
//{
//	cout << r._name << endl;
//	cout << r._sex << endl;
//	r._name = "С��";
//}
//
//int main()
//{
//	Person p;
//	Student s;
//	s._name = "С��";
//	s._sex = "Ů";
//	Print(p);
//	Print(s);
//	p = s;  // �������ֵ���������  �и� ��Ƭ
//
//	//s = (Student)p; // ������
//
//	Person* ptr1 = &p;
//	Person& ref1 = p;
//
//	Person* ptr2 = &s;
//	Person& ref2 = s;
//
//	// �����ָ����������ǿ���ת����������ָ���������
//	Student* ptr3 = (Student*)ptr2;
//	Student& ref3 = (Student&)ref2;
//
//	ptr3->_No = 1;
//
//	// ����Խ�����
//	Student* ptr4 = (Student*)ptr1;
//	Student& ref4 = (Student&)ref1;
//	ptr4->_No = 1;
//
//	return 0;
//}

// ����  ok
// ����
//class A
//{
//public:
//	void fun()
//	{
//		cout << "func()" << endl;
//	}
//};
//class B : public A
//{
//public:
//	void fun(int i)
//	{
//		cout << "func(int i)->" << i << endl;
//	}
//};
//
//void main()
//{
//	B b;
//	b.fun(10);
//	b.A::fun();
//};

//class Person
//{
//public:
//	Person(const char* name)
//		: _name(name)
//	{
//		cout << "Person()" << endl;
//	}
//
//	Person(const Person& p)
//		: _name(p._name)
//	{
//		cout << "Person(const Person& p)" << endl;
//	}
//
//	Person& operator=(const Person& p)
//	{
//		cout << "Person operator=(const Person& p)" << endl;
//		if (this != &p)
//			_name = p._name;
//
//		return *this;
//	}
//
//	~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//protected:
//	string _name; // ����
//};
//
//class Student : public Person
//{
//public:
//	// �̳������ĸ��ಿ�ֵĳ�Ա��Ҫʹ�ø���Ĺ��캯��ȥ��ʼ��
//	// �����Լ���ʾ��ȥ��ʼ��
//	/*Student(const char* name = "С��", int num = 1)
//		:_name(name)
//		, _num(num)
//	{}*/
//
//	Student(const char* name = "С��", int num = 1)
//		:Person(name)
//		,_num(num)
//	{}
//
//	Student(const Student& s)
//		:Person(s)
//		, _num(s._num)
//	{}
//
//	Student& operator=(const Student& s)
//	{
//		if (this != &s)
//		{
//			Person::operator=(s);
//			_num = s._num;
//		}
//
//		return *this;
//	}
//
//	// �����Ի�㣺
//	// 1����������������͸�������������������� 
//	// -> �����Ժ��̬��д����Ҫ��ʲô��Ҫ ���潲��
//	// ����������������������ֻᱻͳһ�����destructor
//	// 2���Լ���ʾ���ã����ڸ��������������⣬�����Ϲ���
//	~Student()
//	{
//		//Person::~Person();
//		//delete _ptr;
//	}
//
//protected:
//	int _num; //ѧ��
//};
//
//int main()
//{
//	Student s1;
//	//Student s2(s1);
//
//	//Student s3("����", 18);
//	//s1 = s3;
//
//
//	return 0;
//}

class Person
{
public:
	Person() { ++_count; }
protected:
	string _name; // ����
public:
	static int _count; // ͳ���˵ĸ�����
};
int Person::_count = 0;
class Student : public Person
{
protected:
	int _stuNum; // ѧ��
};
class Graduate : public Student
{
protected:
	string _seminarCourse; // �о���Ŀ
};
void TestPerson()
{
	Student s1;
	Student s2;
	Student s3;
	Graduate s4;
	cout << " ���� :" << Person::_count << endl;
	Student::_count = 0;
	cout << " ���� :" << Person::_count << endl;
}

int main()
{
	TestPerson();
}