/*************************************************************************
	> File Name: string_test.cpp
	> Author: sagata
	> Mail:  
	> Created Time: 2017-10-10 22:57:11
 ************************************************************************/

#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    //各种初始化方式
    char ch[10] = "student";
    char ch1[] = "student";
    char* ch2 = "student";
    //ch++; ch1++;  这样可使不行的 因为是指常量来着
    cout<<ch<<" "<<sizeof(ch)<<endl;
    cout<<ch1<<" "<<sizeof(ch1)<<endl;
    cout<<ch2<<" "<<sizeof(ch2)<<endl;

    //字符串赋值
    char str1[10] = "student",str2[10],*str3;
    //str2 = str1; 这样是不行的 str2 是一个常量指针哦 但是可以一个字符一个一个这样过去
    str3 = str1; //纯粹是指针赋值
    str3 = "student"; //串赋值

    //字符串的处理函数
    cout<<strlen(str3)<<endl; //长度函数
    cout<<strlen(str1)<<endl; //长度函数
    cout<<strlen(str2)<<endl; //长度函数
    char * str4;
    char * str5 = strcpy(str4,str3); //复制函数
    cout<<str3<<" "<<str4<<" "<<str5<<endl;
    str5 = strcat(str4,str3);
    cout<<str3<<" "<<str4<<" "<<str5<<endl;//拼接函数

    cout<<strcmp(str3,str4)<<endl; //比较函数 0表示相等
    cout<<strncmp(str3,str4,5)<<endl; //比较函数


    return 1;
}
