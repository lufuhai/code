
#include "BTree.h"
#include "queue.h" 
#include "stack.h"
BTNode *BinaryTreeCreate(BTDataType * src, int n, int* pi)
{
	if (src[*pi] == '#' || *pi >= n)
	{
		(*pi)++;
		return NULL;
	}

	BTNode * cur = (BTNode *)malloc(sizeof(BTNode));
	cur->_data = src[s_n];
	(*pi)++;

	cur->_left = BinaryTreeCreateExe(src);
	cur->_right = BinaryTreeCreateExe(src);

	return cur;
}

void BinaryTreePrevOrder(BTNode* root)
{
	if (root)
	{
		putchar(root->_data);
		BinaryTreePrevOrder(root->_left);
		BinaryTreePrevOrder(root->_right);
	}
}

void BinaryTreeInOrder(BTNode* root)
{
	if (root)
	{
		BinaryTreeInOrder(root->_left);
		putchar(root->_data);
		BinaryTreeInOrder(root->_right);
	}
}

void BinaryTreePostOrder(BTNode* root)
{
	if (root)
	{
		BinaryTreePostOrder(root->_left);
		BinaryTreePostOrder(root->_right);
		putchar(root->_data);
	}
}

void BinaryTreeDestory(BTNode** root)
{
	if (*root)
	{
		BinaryTreeDestory((*root)->_left);
		BinaryTreeDestory((*root)->_right);
		free(*root);
		*root = NULL;
	}
}

void BinaryTreeLevelOrder(BTNode* root)
{
	Queue qu;
	BTNode * cur;

	QueueInit(&qu);

	QueuePush(&qu, root);

	while (!QueueIsEmpty(&qu))
	{
		cur = QueueTop(&qu);

		putchar(cur->_data);

		if (cur->_left)
		{
			QueuePush(&qu, cur->_left);
		}

		if (cur->_right)
		{
			QueuePush(&qu, cur->_right);
		}

		QueuePop(&qu);
	}

	QueueDestory(&qu);
}

int BinaryTreeComplete(BTNode* root)
{
	Queue qu;
	BTNode * cur;
	int tag = 0;

	QueueInit(&qu);

	QueuePush(&qu, root);

	while (!QueueIsEmpty(&qu))
	{
		cur = QueueTop(&qu);

		putchar(cur->_data);

		if (cur->_right && !cur->_left)
		{
			return 0;
		}

		if (tag && (cur->_right || cur->_left))
		{
			return 0;
		}

		if (cur->_left)
		{
			QueuePush(&qu, cur->_left);
		}

		if (cur->_right)
		{
			QueuePush(&qu, cur->_right);
		}
		else
		{
			tag = 1;
		}

		QueuePop(&qu);
	}

	QueueDestory(&qu);
	return 1;
}


//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int n = sizeof(a) / sizeof(int);
//	vector<int>v(a, a + n);
//	cout << v.size() << ":" << v.capacity() << endl;
//	v.reserve(100);
//	v.resize(20);
//	cout << v.size() << ":" << v.capacity() << endl;
//	v.reserve(50);
//	v.resize(5);
//	cout << v.size() << ":" << v.capacity() << endl;
//	return 0;
//}





//#include<iostream>
//#include<vector>
//using namespace std;
//int main(void)
//{
//	vector<int>array;
//	array.push_back(100);
//	array.push_back(300);
//	array.push_back(300);
//	array.push_back(300);
//	array.push_back(300);
//	array.push_back(500);
//	vector<int>::iterator itor;
//	for (itor = array.begin(); itor != array.end(); itor++)
//	{
//		if (*itor == 300)
//		{
//			itor = array.erase(itor);
//		}
//	}
//	for (itor = array.begin(); itor != array.end(); itor++)
//	{
//		cout << *itor << "";
//	}
//	return 0;
//}


