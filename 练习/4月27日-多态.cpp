#include <iostream>
#include <string>
using namespace std;

//class Person
//{
//public:
//	string _name; // ����
//};
//class Student : virtual public Person
//{
//protected:
//	int _num; //ѧ��
//};
//class Teacher : virtual public Person
//{
//protected:
//	int _id; // ְ�����
//};
//class Assistant : public Student, public Teacher
//{
//protected:
//	string _majorCourse; // ���޿γ�
//};
//void Test()
//{
//	// �������ж������޷���ȷ֪�����ʵ�����һ��
//	Assistant a;
//	a._name = "peter";
//
//	// ��Ҫ��ʾָ�������ĸ�����ĳ�Ա���Խ�����������⣬�����������������޷����
//	a.Student::_name = "xxx";
//	a.Teacher::_name = "yyy";
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}

//class A
//{
//public:
//	int _a;
//};
//
//// class B : public A
//class B : virtual public A
//{
//public:
//	int _b;
//};
//
//// class C : public A
//class C : virtual public A
//{
//public:
//	int _c;
//};
//
//class D : public B, public C
//{
//public:
//	int _d;
//};
//
//// ����ģ��  -- �������ڴ�����δ洢��ģ��
//// ������̽��C++����ģ�͡� ���Ƽ�����
//// ��STLԴ��������  �Ƽ���
//// ��effctive C++�� �Ƽ���
//int main()
//{
//	D d;
//	cout << sizeof(d) << endl;
//
//	d._a = 0;
//	d.B::_a = 1;
//	d.C::_a = 2;
//	d._b = 3;
//	d._c = 4;
//	d._d = 5;
//
//	return 0;
//}

//class A
//{};
//
//class B : public A
//{};
//
//
//class Person
//{
//public:
//	// ��д��-Э��
//	virtual Person*  BuyTicket()
//	{
//		cout << "�����Ŷ�-ȫ�۸���Ʊ" << endl;
//		return NULL;
//	}
//};
//
//class Student : public Person
//{
//public:
//	// ��д
//	 Student* BuyTicket()
//	{
//		cout << "�����Ŷ�-��۸���Ʊ" << endl;
//		return NULL;
//	}
//};
//
//// ��̬������-������̬��ָ��˭����˭���麯��
//// 1���̳����У��麯������д 
//// 2������ָ���������ȥ��������麯��
////		��д��������
////			a���������еĺ��������麯��
////			b��������������������ֵ��Ҫ��ͬ
//void Buy(Person* p)
//{
//	// �������̬���������йأ�Ҳ����˵p��ʲô���ͣ��͵���������͵ĳ�Ա����
//	// �����̬���������йأ�Ҳ����ָ������ĸ����󣬵��þ����Ǹ����麯��
//	p->BuyTicket();
//}
//
//int main()
//{
//	Person ps;
//	Buy(&ps);
//
//	Student st;
//	Buy(&st);
//
//	return 0;
//}

class Person {
public:
	// ���ֿ��������������ʶ���Ϊ����������������д
	// ��Ϊ�����������д����������£����ܻ�����ڴ�й¶
	virtual ~Person() { cout << "~Person()" << endl; }
};

class Student : public Person {
public:
	~Student() { cout << "~Student()" << endl; }
};

int main()
{
	//Person p;
	//Student s;
	Person* p1 = new Person;
	delete p1;

	Person* p2 = new Student;
	delete p2;

	return 0;
}