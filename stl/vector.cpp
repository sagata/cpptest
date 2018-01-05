#include<iostream>
#include<vector>
using namespace std;

void printall(vector<int> a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    //初始化
    cout<<"初始化"<<endl;
    vector<int> a1;                             //声明一个int型向量a
    vector<int> a2(10);       //声明一个初始大小为10的向量 默认都是0
    vector<int> a3(10, 1);                        //声明一个初始大小为10且初始值都为1的向量
    vector<int> b1(a3);                          //声明并用向量a初始化向量b
    vector<int> b2(a3.begin(), a3.begin()+3);        //将a向量中从第0个到第2个(共3个)作为向量b的初始值
    printall(b1); 
    
    //还可以用数组来初始化 
    int n[] = {1, 2, 3, 4, 5} ;
    vector<int> c1(n, n+5);  //将数组n的前5个元素作为向量a的初值
    vector<int> c2(&n[1], &n[4]);  //将n[1] - n[4]范围内的元素作为向量a的初值
    printall(c1);
    printall(c2);
    //访问
    cout<<"访问"<<endl;
    cout<<*c1.begin()<<endl;  //通过迭代器指针来访问a
    c1[0] = 10; //可以跟数组一样直接赋值和访问
    cout<<c1[0]<<endl;
    //迭代器 有点类似于指针
    cout<<"迭代器"<<endl;
    vector<int>::iterator t;
    for(t=c1.begin();t!=c1.end();t++)
    {
        cout<<*t<<" ";
    }
    cout<<endl;
    //基本接口
    cout<<a1.size()<<endl;  //向量中元素个数
    cout<<a1.capacity()<<endl;  //总容量
    cout<<a1.empty()<<endl;
    a1.insert(a1.begin(),2); //在begin之前插入
    a1.insert(a1.begin(),1); //在begin之前插入
    printall(a1);
/* 5>. 比较
*保持 ==、!=、>、>=、<、<= 的惯有含义 ;
*   如: a == b ;    //a向量与b向量比较, 相等则返回1
     * */
    cout<<"删除"<<endl;
    a1.erase(a1.begin()); //删除某个迭代器指针所指的位置
    printall(a1);


    return 0;
}
