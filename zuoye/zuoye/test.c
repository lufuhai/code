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


//反转字符串中的单词3
//class Solution {
//public:
//	string reverseWords(string s)
//	{
//		s += " ";//给原字符串末尾添加空格，用来分隔出最后一个单词
//		string str, ret;//str用来保存从原字符串截取出的单词，ret用来输出结果
//		vector<string>v;//用来存储原字符串中的各个单词
//		for (int i = 0; i<s.size(); i++)
//		{
//			if (s[i] != ' ')//每当遇到空格时截取整个单词，否则就累加字符
//			{
//				str += s[i];
//			}
//			else
//			{
//				v.push_back(str);
//				v.push_back(" ");//加完字符串后，记得加一个空格
//				str = "";//每次取完单词后，对字符串进行清空
//			}
//		}
//		for (int i = 0; i<v.size(); i++)
//		{
//			reverse(v[i].begin(), v[i].end());//利用STL函数库中reverse函数对各个单词进行反转
//			ret += v[i];//累加到结果字符串中
//		}
//		ret.erase(ret.size() - 1, 1);//最后勿忘擦除掉最开始添加的空格
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
