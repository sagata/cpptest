#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<string,int> mymap;
	mymap["xiao"] = 1;
	mymap["zhao"] = 2;
	//printall(mymap);  不能用遍历迭代器来做
	cout<<mymap["xiao"]<<endl;
	map<string,int>::iterator it;
	cout<<mymap.count("xiao")<<endl;  // 返回m中键值等于k的元素的个数。
	it = mymap.find("xiao");  // 如果m中存在按k索引的元素，则返回指向该元素的迭代器。如果不存在，则返回结束游标end()
	//cout<<it<<endl;
	cout<<(*it).first<<'\t'<<(*it).second<<endl;
	mymap.erase("yang");  // 删除m中键为k的元素，返回size_type类型的值，表示删除元素的个数。
	mymap.erase(it);  // 从m中删除迭代器p所指向的元素，p必须指向m中确实存在的元素，而且不能等于m.end()，返回void类型。
	//mymap.erase(iterator first, iterator last);  // 删除一个范围，返回void类型。
	cout<<mymap["xiao"]<<endl;
	cout<<mymap["yang"]<<endl;
	return 0;
}