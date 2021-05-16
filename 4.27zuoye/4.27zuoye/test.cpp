#include<stdio.h>
int main()
{
	int a = 1, b = 2, c = 3, d = 0;
	if (a == 1 && b++ = 2)
	if (b != 2 || c-- != 3)
		printf("%d,%d,%d\n", a, b, c);
	else
		printf("%d,%d,%d\n", a, b, c);
	else
		printf("%d,%d,%d\n", a, b, c);
	return 0;
}


//#include<iostream>
//#include<string>
//using namespace std;
//class parent
//{
//	int i;
//protected:
//	int x;
//public:
//	parent(){ x = 0; i = 0; }
//	void change(){ x++, i++; }
//	void display();
//};
//class son :public parent
//{
//public:
//	void modify();
//};
//void parent::display(){ cout << "x=" << x << endl; }
//void son::modify(){ x++; }
//int main()
//{
//	son A; parent B;
//	A.display();
//	A.change();
//	A.modify();
//	A.display();
//	B.change();
//	B.display();
//
//}




//#include<iostream>
//#include<string>
//using namespace std;
//class A
//{
//	friend long fun(A s)
//	{
//		if (s.x < 3)
//		{
//			return 1;
//		}
//		return s.x + fun(A(s.x - 1));
//	}
//public:
//	A(long a)
//	{
//		x = a--;
//	}
//private:
//	long x;
//};
//int main()
//{
//	int sum = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		sum += fun(A(i));
//	}
//	cout << sum;
//}

