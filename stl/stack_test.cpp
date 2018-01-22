#include <iostream>
#include <stack>
using namespace std;



/*
stack就三个接口函数，push(),top(),pop()。

push()会将一个元素放入stack中。
top()会返回stack中的栈顶元素，返回的是reference，可以就地修改值。
pop()移除栈顶元素，无返回值。
size()返回stack长度。
empty()返回stack是否为空。
*/

int main()
{
	cout<<"test"<<endl;
	stack<int> s;
	s.push(1);
	s.push(2);
	cout<<s.top()<<endl; 
	cout<<"######11"<<endl;
	int hah = s.top(); //这里返回的是引用
	hah = 1223;
	cout<<s.top()<<endl;   //但是好像不生效啊奇怪了
	cout<<"######111"<<endl;
	cout<<s.size()<<endl;
	cout<<s.empty()<<endl;
	s.pop();
	cout<<s.top()<<endl;

	return 0;
}