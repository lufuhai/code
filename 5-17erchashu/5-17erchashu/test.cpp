#include<iostream>
#include<iomanio>
#include<algorithm>
#include<vector>
using namespace std;
int mian()
{
	int n, m, k;
	while (cin >> n >> m >> k)
	{
		vector<vector<int>> table((n + 1), vector<int>(m + 1));
		int x, y;
		for (int i = 0; i < k; i++)
		{
			cin >> x >> y;
			table[x][y] = 1;
		}
		vector<vector<double>> P((n + 1), vector<double>(m + 1));
		P[1][1] = 1.0;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				if (!(i == 1 && j == 1))
				{
					P[i][j] = P[i - 1][j] * (j == m ? 1 : 0.5) + P[i][j - 1] * (i == n ? 1 : 0.5);
					if (table[i][j] == 1)
						P[i][j] = 0;
				}
			}
		}
		cout << fixed << setprecision(2) << P[n][m] << endl;
	}
}


//#include<stdio.h>
//#include<iostream>
//using namespace std;
//#define max 21
//char aa[max][max];
//int is, jsl
//int cnt = 1;
//void dfs(int i, int j)
//{
//	aa[i][j] = '#';
//	if (aa[a + 1][j] == '.')
//	{
//		cnt++;
//		dfs(i + 1, j);
//	}
//	if (aa[i - 1][j] == '.')
//	{
//		cnt++;
//		dfs(i - 1, j);
//	}
//	if (aa[i][j + 1]) = '.'
//	{
//		cnt++;
//		dfs(i, j + 1);
//	}
//	if (aa[i][j - 1])
//	{
//		cnt++;
//		dfs(i, j - 1);
//	}
//	return;
//}


//δ�ύ
//class Solution {
//public:
//	bool TreeFind(TreeNode* root, TreeNode* x)
//	{
//		if (root == NULL)
//		{
//			return false;
//		}
//		if (root == x)
//		{
//			return true;
//		}
//		return TreeFind(root->left, x) || TreeFind(root->right, x);
//	}
//	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//		if (root == nullptr)
//			return nullptr;
//		if (p == root || q == root)
//		{
//			return root;
//		}
//		bool pInLeft, pInRight, qInLeft, qInRight;
//		pInLeft = TreeFind(root->left, p);
//		pInRight = !qInLeft;
//
//		qInLeft = TreeFind(root->left, q);
//		qInRight = !qInLeft;
//
//		if ((pInLeft && qInRight) || (pInRight && qInLeft))
//			return root;
//		else if (pInLeft&&qInLeft)
//			return lowestCommonAncestor(root->left, p, q);
//		else
//			return lowestCommonAncestor(root->right, p, q);
//	}
//};




//class Solution{
//public:
//	vector<vector<int>> levelOrderBottom(TreeNode* root)
//	{
//		vector<vector<int>> vv;
//		if (root == nullptr)
//			return vv;
//		vector<TreeNode*> curV;
//		vector<TreeNode*> nextV;
//		curV.push_back(root);
//		while (!curV.empty())
//		{
//			vector<int> v;
//			for (auto e : curV)
//			{
//				v.push_back(e->val);
//				if (e->left)
//				{
//					nextV.push_back(e->left);
//				}
//				if (e->right)
//				{
//					nextV.push_back(e->right);
//				}
//			}
//			vv.push_back(v);
//			curV.swap(nextV);
//			nextV.clear();
//		}
//		return vv;
//	}
//};


//class Solution{
//public:
//	bool TreeFind(TreeNode* root, TreeNode* x)
//	{
//		if (root == NULL)
//		{
//			return false;
//		}
//		if (root == x)
//		{
//			return true;
//		}
//		return TreeFind(root->left, x) || TreeFind(root->right, x);
//	}
//	TreeNode* lowestCommonAncestor(TreeNode* root, TreeBode* p, TreeNode* q)
//	{
//		if (root == nullptr)
//		{
//			return nunllptr;
//		}
//		if (p == root || q == root)
//		{
//			return root;
//		}
//		bool pInLeft, pInRight, qInleft, qInRight;
//		pInLeft = TreeFind(root->left, p);
//		pInRight = !pInLeft;
//		if ((pInLeft&&qInRight) || (pInRight&&qInLeft))
//		{
//			return root;
//		}
//		else if (pInLeft&&qInLeft)
//		{
//			return lowestComminAncestor(root->left, p, q);
//		}
//		else
//		{
//			return lowestCommonAncestor(root->right, p, q);
//		}
//	}
//};


//class Solution{
//public:
//	vector<vector<int>> levelOrder(TreeNode* root){
//		vector<vector<int>>vv;
//		if (root == nullptr)
//		{
//			return vv;
//		}
//		queue<TreeNode*> q;
//		q.push(root);
//		//int leveLsize = 1;
//		while (!q.empty())
//		{
//			int levelSize = q.size();
//			vector<int> v;
//			while (levelSize--)
//			{
//				TreeNode* front = q.front();
//				q.pop();
//				v.push_back(front->val);
//				if (front->left)
//				{
//					q.push(front->left);
//				}
//				if (front->right)
//				{
//					q.push(front->right);
//				}
//			}
//			vv.push_back(v);
//		}
//		return vv;
//	}
//};


//class Solution{
//public:
//	string tree2str(TreeNode* root){
//		string s;
//		if (root == nullptr)
//		{
//			return s;
//		}
//		s += to_string(root->val);
//		if (root->left == nullptr&&root->right == nullptr)
//		{
//			return s;
//		}
//
//		s += '(';
//		s += tree2str(root->left);
//		s += ')';
//
//		if (root->right != nullptr)
//		{
//			s += '(';
//			s += tree2str(root->right);
//			s += ')';
//		}
//		return s;
//	}
//};