#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
	string _name = "СҶ��";
	string _sex = "С��";
protected:
	int _age = 18;
};
class Student :public Person
{
public:
	int _No;
};
void Print(Person& r)
{
	cout << "r._name"<<endl;
	cout << "r,sex" << endl;
	r._name = "huazi";
}
int main()
{
	Person p;
	Student s;
	s._name = "СҶ��";
	s._sex = "С��";
	Print(p);
	Print(s);
	p = s;
	Person* ptr1 = &p;
	Person& ref1 = p;
	Person* ptr2 = &s;
	Person& ref2 = s;
	Student* ptr3 = (Student*)ptr2;
	Student* ref3 = (Student&)ref2;
	ptr3->_No = 1;
	Student* ptr4 = (Student*)ptr1;
	Student& ref4 = (Student&)ref1;
	return 0;
}




//class Person
//{
//public:
//	void Print()
//	{
//		cout << "name" << _name << endl;
//		cout << "age" << _age << endl;
//	}
//private:
//	string _name = "peter";
//protected:
//	int _age = 18;
//};
//class Student :public Person
//{
//public:
//	void func()
//	{
//		cout << "_age" << endl;
//	}
//protected:
//	int _stuid;//ѧ��
//};
//class Teacher :public Person
//{
//protected:
//	int _jobed;//����
//};
//int main()
//{
//	Student s;
//	Teacher t;
//	s.Print();
//	t.Print();
//	return 0;
//}

