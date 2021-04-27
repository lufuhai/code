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
//	string _name = "peter"; // 姓名
//protected:
//	int _age = 18;  // 年龄
//};
//
//// 继承后父类的Person的成员（成员函数+成员变量）都会变成子类的一部分。这里体现出了Student和Teacher复用了Person的成员。下面我们使用监视窗口查看Student和Teacher对象，可以看到变量的复用。调用Print可以看到成员函数的复用。
//class Student : public Person
//{
//public:
//	void func()
//	{
//		//cout << _name << endl; // 不可见
//		cout << _age << endl;  // protected
//	}
//protected:
//	int _stuid; // 学号
//};
//
//class Teacher : public Person
//{
//protected:
//	int _jobid; // 工号
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
//	// C++11 给缺省值
//	string _name = "小明"; // 姓名
//	string _sex = "男";  // 性别
//protected:
//	int	_age = 18;	 // 年龄
//};
//
//class Student : public Person
//{
//public:
//	int _No; // 学号
//};
//
//void Print(Person& r)
//{
//	cout << r._name << endl;
//	cout << r._sex << endl;
//	r._name = "小王";
//}
//
//int main()
//{
//	Person p;
//	Student s;
//	s._name = "小红";
//	s._sex = "女";
//	Print(p);
//	Print(s);
//	p = s;  // 子类对象赋值给父类对象  切割 切片
//
//	//s = (Student)p; // 不可以
//
//	Person* ptr1 = &p;
//	Person& ref1 = p;
//
//	Person* ptr2 = &s;
//	Person& ref2 = s;
//
//	// 父类的指针或者引用是可以转回子类类型指针或者引用
//	Student* ptr3 = (Student*)ptr2;
//	Student& ref3 = (Student&)ref2;
//
//	ptr3->_No = 1;
//
//	// 存在越界风险
//	Student* ptr4 = (Student*)ptr1;
//	Student& ref4 = (Student&)ref1;
//	ptr4->_No = 1;
//
//	return 0;
//}

// 隐藏  ok
// 重载
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
//	string _name; // 姓名
//};
//
//class Student : public Person
//{
//public:
//	// 继承下来的父类部分的成员，要使用父类的构造函数去初始化
//	// 不能自己显示的去初始化
//	/*Student(const char* name = "小明", int num = 1)
//		:_name(name)
//		, _num(num)
//	{}*/
//
//	Student(const char* name = "小明", int num = 1)
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
//	// 两个迷惑点：
//	// 1、子类的析构函数和父类的析构函数构成隐藏 
//	// -> 由于以后多态重写的需要（什么需要 后面讲）
//	// ，所有类的析构函数，名字会被统一处理成destructor
//	// 2、自己显示调用，存在父类先析构的问题，不符合规则
//	~Student()
//	{
//		//Person::~Person();
//		//delete _ptr;
//	}
//
//protected:
//	int _num; //学号
//};
//
//int main()
//{
//	Student s1;
//	//Student s2(s1);
//
//	//Student s3("唐三", 18);
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
	string _name; // 姓名
public:
	static int _count; // 统计人的个数。
};
int Person::_count = 0;
class Student : public Person
{
protected:
	int _stuNum; // 学号
};
class Graduate : public Student
{
protected:
	string _seminarCourse; // 研究科目
};
void TestPerson()
{
	Student s1;
	Student s2;
	Student s3;
	Graduate s4;
	cout << " 人数 :" << Person::_count << endl;
	Student::_count = 0;
	cout << " 人数 :" << Person::_count << endl;
}

int main()
{
	TestPerson();
}