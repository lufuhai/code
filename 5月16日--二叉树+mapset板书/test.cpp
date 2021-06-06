#include<iostream>
#include <set>
#include <map>
#include <string>
using namespace std;

void test_set()
{
	// 1、排序+去重
	//multiset<int> s1; // 排序
	set<int> s1;
	s1.insert(3);
	s1.insert(2);
	s1.insert(5);
	s1.insert(1);
	s1.insert(3);
	s1.insert(5);
	set<int>::iterator it1 = s1.begin();
	while (it1 != s1.end())
	{
		//*it1 = 10; // 不能改
		cout << *it1 << " ";
		++it1;
	}
	cout << endl;

	for (auto e : s1)
	{
		cout << e << " ";
	}
	cout << endl;

	string strs[] = { "sort", "sort", "insert", "sort", "map" };
	set<string> strunique;
	for (auto& str : strs)
	{
		strunique.insert(str);
	}

	for (auto& str : strunique)
	{
		cout << str << " ";
	}
	cout << endl;

	// O(N)
	auto ret = std::find(strunique.begin(), strunique.end(), "sort");
	if (ret != strunique.end())
	{
		cout << "找到了" << endl;
	}

	// O(logN)
	ret = strunique.find("sort");
	if (ret != strunique.end())
	{
		cout << "找到了" << endl;
	}
}

void test_map()
{
	map<string, string> dict;
	dict.insert(pair<string, string>("字符串", "string"));
	dict.insert(pair<string, string>("排序", "sort"));
	map<string, string>::iterator dit = dict.begin();
	while (dit != dict.end())
	{
		//cout << (*dit).first << ":" << (*dit).second << endl;
		cout << dit->first << ":" << dit->second << endl;
		++dit;
	}

	for (auto& e : dict)
	{
		cout << e.first << ":" << e.second << endl;
	}

	string strs[] = { "sort", "sort", "insert", "sort", "map" };
	map<string, int> countMap;
	//for (auto& s : strs)
	//{
	//	auto ret = countMap.find(s);
	//	if (ret != countMap.end())
	//	{
	//		ret->second++;
	//	}
	//	else
	//	{
	//		//countMap.insert(pair<string, int>(s, 1));
	//		countMap.insert(make_pair(s, 1));
	//	}
	//}

	for (auto& s : strs)
	{
		countMap[s]++;
	}

	for (auto& e : countMap)
	{
		cout << e.first << ":" << e.second << endl;
	}
}

int main()
{
	//test_set();
	test_map();

	return 0;
}