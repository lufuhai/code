class Solution {
public:
	string multiply(string num1, string num2) {
		string ans;
		vector<int> a, b, c;
		c.resize(num1.size() + num2.size() - 1);
		for (int i = num1.size() - 1; i >= 0; i--) a.push_back(num1[i] - '0');
		for (int i = num2.size() - 1; i >= 0; i--) b.push_back(num2[i] - '0');
		for (int i = 0; i < a.size(); i++) {
			for (int j = 0; j < b.size(); j++) {
				c[i + j] += a[i] * b[j];
			}
		}
		int k = 0;
		for (int i = 0; i < c.size(); i++) {
			k += c[i];
			char c = k % 10 + '0';
			ans = c + ans;
			k /= 10;
		}
		while (k) {
			char c = k % 10 + '0';
			ans = c + ans;
			k /= 10;
		}
		while (ans.size() > 1 && ans[0] == '0') ans.erase(ans.begin());
		return ans;
	}
};


//��ת�ַ����еĵ���3
//class Solution {
//public:
//	string reverseWords(string s)
//	{
//		s += " ";//��ԭ�ַ���ĩβ��ӿո������ָ������һ������
//		string str, ret;//str���������ԭ�ַ�����ȡ���ĵ��ʣ�ret����������
//		vector<string>v;//�����洢ԭ�ַ����еĸ�������
//		for (int i = 0; i<s.size(); i++)
//		{
//			if (s[i] != ' ')//ÿ�������ո�ʱ��ȡ�������ʣ�������ۼ��ַ�
//			{
//				str += s[i];
//			}
//			else
//			{
//				v.push_back(str);
//				v.push_back(" ");//�����ַ����󣬼ǵü�һ���ո�
//				str = "";//ÿ��ȡ�굥�ʺ󣬶��ַ����������
//			}
//		}
//		for (int i = 0; i<v.size(); i++)
//		{
//			reverse(v[i].begin(), v[i].end());//����STL��������reverse�����Ը������ʽ��з�ת
//			ret += v[i];//�ۼӵ�����ַ�����
//		}
//		ret.erase(ret.size() - 1, 1);//��������������ʼ��ӵĿո�
//		return ret;
//	}
//};


//class Solution{
//public:
//	string reverseWords(string s)
//	{
//		s += " ";
//		string str, ret;
//		vector<string>v;
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (s[i] != " ")
//			{
//				str += s[i];
//			}
//			else
//			{
//				v.push_back(str);
//				v.push_back(" ");
//				str = " ";
//			}
//		}
//		for (int i = 0; i < v, size(); i++)
//		{
//			reverse(v[i].begin(), v[i].end());
//			ret += v[i];
//		}
//		ret.erase(ret.size() - 1, 1);
//		return ret;
//	}
//};


//class Solution{
//public:
//	string reverseStr(string s, int k)
//	{
//		int n = s.size();
//		for (int i = 0; i < n; i += (k << 1))
//		{
//			int l = i;
//			int r = min(i + k - 1, n - 1);
//			while (l < r)
//			{
//				swap(s[1], s[r]);
//				++i;
//				--r;
//			}
//		}
//		return s;
//	}
//};



//
//class Solution {
//public:
//	bool isPalindrome(string s) {
//		string t;
//		char ch1, ch2;
//		for (auto i : s) {
//			if (i >= 'a'&&i <= 'z' || i >= 'A'&&i <= 'Z' || i >= '0'&&i <= '9') {
//				t.push_back(i);
//			}
//		}
//		for (int i = 0, j = t.size() - 1; i < j; ++i, --j) {
//			ch1 = t[i];
//			ch2 = t[j];
//			if (ch1 >= '0'&& ch1 <= '9' && (ch2 < '0' || ch2 > '9'))
//			{
//				return false;
//			}
//			if (ch2 >= '0'&&ch2 <= '9' && (ch1 < '0' || ch1 > '9'))
//			{
//				return false;
//			}
//			if (ch1 != ch2 && ch1 + 32 != ch2 && ch2 + 32 != ch1)
//			{
//				return false;
//			}
//		}
//		return true;
//	}
//};
