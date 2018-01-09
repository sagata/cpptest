#include <iostream>
#include <vector>
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
    return 0;
}
