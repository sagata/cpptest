#include <iostream>
#include <list>
//说到底就是双向链表
using namespace std;
void printall(list<int> a)
{
	list<int>::iterator it;
	for(it=a.begin();it!=a.end();it++)
	{
		cout<<*it<<"\t";
	}
	cout<<endl;
}

int main()
{
	list<int> c0; //空链表
	list<int> c1(3); //建一个含三个默认值是0的元素的链表
	list<int> c2(5,2); //建一个含五个元素的链表，值都是2
	list<int> c4(c2); //建一个c2的copy链表
	list<int> c5(c1.begin(),c1.end()); ////c5含c1一个区域的元素[_First, _Last)。


	/*
	c.begin()      返回指向链表第一个元素的迭代器。
	c.end()      返回指向链表最后一个元素之后的迭代器。
	*/
	list<int> a1{1,2,3,4,5};
	list<int>::iterator it;
	for(it = a1.begin();it!=a1.end();it++){
		cout << *it << "\t";
	}
	cout << endl;

	list<int>::reverse_iterator it2;  //居然还得专门用反向迭代器
	for(it2 = a1.rbegin();it2!=a1.rend();it2++){
		cout << *it2 << "\t";
	}
	cout << endl;

	list<int> b;
	b.assign(4,5);
	for(it = b.begin();it!=b.end();it++){
		cout << *it << "\t";
	}
	cout << endl;
	b.assign(++a1.begin(),a1.end());
	for(it = b.begin();it!=b.end();it++){
		cout << *it << "\t";
	}
	cout << endl;

	cout<<"################"<<endl;
	/*
	c.front()      返回链表c的第一个元素。
	c.back()      返回链表c的最后一个元素。
	*/
	cout<<b.front()<<"\t"<<b.back()<<endl;
	cout<<b.empty()<<endl;   //判断是否为空
	cout<<b.size()<<endl;    //返回一下大小
	cout<<b.max_size()<<endl;   //最大容量
	b.clear();
	cout<<b.front()<<"\t"<<b.back()<<endl;
	cout<<b.size()<<endl;    //返回一下大小
	cout<<"!!!!!插入的操作什么的"<<endl;
	/*
	c.insert(pos,num)      在pos位置插入元素num。
	c.insert(pos,n,num)      在pos位置插入n个元素num。
	c.insert(pos,beg,end)      在pos位置插入区间为[beg,end)的元素。
	注意这里的pos是迭代器哦  不是index哦
	*/
	list<int> c = a1;
	
	list<int>::iterator it3 = c.begin();
	c.insert(c.begin(),2,2);
	printall(c);
	c.insert(c.end(),a1.begin(),a1.end()); 
	printall(c);
	//删除某个位置的
	c.erase(c.begin());  //删除某个位置
	printall(c);
	
	/*
	c.push_back(num)      在末尾增加一个元素。
	c.pop_back()      删除末尾的元素。
	c.push_front(num)      在开始位置增加一个元素。
	c.pop_front()      删除第一个元素。
	*/
	cout<<"增加删除头尾的元素"<<endl;
	list<int> d = {1,2,3,4,5};
	printall(d);
	d.push_back(6);  printall(d);
	d.pop_back();  printall(d);
	d.push_front(6);  printall(d);
	d.pop_front();  printall(d);

	/*
	resize(n)      从新定义链表的长度,超出原始长度部分用0代替,小于原始部分删除。
	resize(n,num)            从新定义链表的长度,超出原始长度部分用num代替。
	*/
	d.resize(20);
	printall(d);
	swap(a1,d);
	printall(d);
	cout<<"干 还有一些奇怪的操作"<<endl;
	/*
	remove(num)             删除链表中匹配num的元素。
	remove_if(comp)       删除条件满足的元素,参数为自定义的回调函数。
	reverse()       反转链表
	c.sort()       将链表排序，默认升序
	*/
	d.remove(4); printall(d);
	d.reverse(); printall(d);
	printall(c);
	c.sort(); printall(c);
	return 0;
}