#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printall(vector<int> a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

/*
string s;                                                       //声明一个string型字符串s
string s(const string &str);                                    //声明string型字符串s并用另一个string型字符串str对其进行初始化
string s(const string &str, size_type n);                       //将字符串str中起始位置n后的字符串作为字符串s的初始值
string s(const string &str, size_type n, size_type m);          //将字符串str位置n起, 长为m的部分的字符作为字符串s的初始值
string s(const char *cs);                                      //将C-串cs作为string串s的初始值
string s(const char *cs, size_type n);                          //将C-串cs的前n个字符作为string串s的初始值
string s(const char *cs, size_type n, size_type m);             //将C-串cs中位置n起, 长为m的部分的字符作为字符串s的初始值
string s(size_type num, char c);                                //初始化字符串值为num个c字符
string s(iterator begin, iterator end);                         //将区间[begin, end]内的字符作为字符串s的初始值

*/
int main()
{
    //初始化
    char cs[] = "hello,world";         //声明并初始化一个C-串
    string str;                        //声明一个string串
    str = "hello,world";               //对string串进行赋值
    cout<<str<<endl;

    //使用string类型初始化另一个string类型
    string s1(str);        cout<<s1<<endl;
    string s2(str, 2);     cout<<s2<<endl;
    string s3(str, 2, 5);  cout<<s3<<endl;

    //使用C-串初始化string类型串
    string s4(cs);         cout<<s4<<endl;
    string s5(cs, 2);      cout<<s5<<endl;
    string s6(cs, 2, 5);   cout<<s6<<endl;

    cout<<"###### caozuo "<<endl;
    //复制操作
    string c1 = s1;  cout<<s1<<endl;
    //连接操作 
    string c2 = s1 + s2;  cout<<c2<<endl;
    //比较操作
    string c3 = "hello"; string  c4 = "world";
    if(c3 < c4)
        cout<<"c3<c4"<<endl;
    //查找
    cout<<c1.find("world")<<endl;
    //替换
    c1.replace(0,2,"aaaa");
    cout<<c1<<endl;

    cout<<"########### 属性们"<<endl;
    cout<<c1.size()<<endl; //返回字符串大小
    cout<<c1.length()<<endl; //返回字符串长度
    cout<<c1.max_size()<<endl; //返回字符串最大长度
    c1.clear();
    cout<<c1<<endl; //清空字符串
    cout<<c1.empty()<<endl; //判断字符串是否为空

    cout<<"修改字符串@@@@@@@@"<<endl; 
    c1.append("hellp"); cout<<c1<<endl;  //将"world"追加到s中
    c1.push_back('!'); cout<<c1<<endl;  //将'!'追加字符到字符串s中
    c1.insert(2, "www"); cout<<c1<<endl;  //将字符串"www"插入到字符串s中, 插入位置为2
    c1.erase(1, 2); cout<<c1<<endl; //从下标为1处向后擦去2个字符
    c1.swap(c2);   //交换
    cout<<c1<<"         "<<c2<<endl;
    reverse(c1.begin(),c1.end());   //algorithm中的翻转
    cout<<c1<<endl;

    return 0;
}
