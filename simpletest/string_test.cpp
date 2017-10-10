/*************************************************************************
	> File Name: string_test.cpp
	> Author: sagata
	> Mail:  
	> Created Time: 2017-10-10 23:53:23
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2,s3;
    s1 = "xiaoyang";
    s2 = "jiayou";
    cout<<s1.length()<<endl; //串长度
    cout<<s1.size()<<endl; //串长度
    cout<<s1.capacity()<<endl; //串容量
    s3 = s1 + s2;
    cout<<s3<<endl;  //串连接
    s3[0] = 'a'; //修改字符
    cout<<s3<<endl;

    cout<<s1.compare(s1)<<endl; //比较 串对象
    s1.swap(s2); //交换串对象
    cout<<s1<<" "<<s2<<endl;

    cout<<s1.substr(1,3)<<endl; //返回子串

    string university,country;
    university = "south china university of technology china";
    cout<<university.find("china",0)<<endl;   //查找第一个子串

    string u2;
    u2 = university.replace(6,5,"america");  //子串替换 起始位置和替换的位数 
    cout<<u2<<endl;

    string u3;
    u3 = university.insert(6,"not ");   //子串插入
    cout<<u3<<endl;

    string u4 = "xiaoyang test";
    char * ch;
    ch = u4.data();
    cout<<ch<<endl;
}
