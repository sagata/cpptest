/*************************************************************************
	> File Name: function.cpp
	> Author: sagata
	> Mail:  
	> Created Time: 2017-10-11 04:29:51
 ************************************************************************/

#include<iostream>
using namespace std;
// 常引用的好处就是 不需要赋值实参 但是有可以达到非引用的效果 对于大型对象的传参是可以提升效率的
int add(const int & a,int & b)
{
    return a + b;
}
//普通引用形参是不能接受 const变量的哦
int ff(int = 0); //默认参数只能在声明 或者 定义中 写清楚  不能都写
int ff2(int);

//函数指针 只能通过同类型的函数 或者0常量 来初始化或者赋值
typedef bool (*comfcn)(int i,int j);
bool test1(int i,int j){cout<<"dsad"<<endl; return true;}
bool test2(int i,int j){return false;}

void fab(int a,int b)
{
    if(a>100) return;
    cout<<a<<" ";
    fab(b,a+b);
    comfcn p1=0,p2=0;
    p1 = &test1;
    p2 = &test2;
    cout<<p1(1,1)<<endl;
    
}
int main()
{
    int a =1,b=2;
    cout<<add(a,b)<<endl;
    fab(1,1);
    cout<<endl;
}
int ff(int i){return 0;}
int ff2(int i =0){return 0;}
