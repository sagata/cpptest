/*************************************************************************
	> File Name: array.cpp
	> Author: sagata
	> Mail:  
	> Created Time: 2017-10-10 21:33:59
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    cout<<"普通数组测试############"<<endl;
    int test[4] = {1,2,3,4};
    cout<<sizeof(test)<<endl;
    for(int i = 0;i<sizeof(test)/sizeof(int);i++)
    {
        cout<<test[i]<<endl;
    }
    int * ap = &test[0];
    int * ap2 = test;
    ap2++; //这样就可以哦
    //test++;这样可就不行了哦  因为是个指针常量哦
    cout<<*ap++<<endl;
    cout<<*ap++<<endl;
    cout<<*ap++<<endl;
    cout<<*ap++<<endl;

    cout<<"整形指针测试############"<<endl;
    int * test1;
    cout<<sizeof(int*)<<endl;
    cout<<sizeof(double*)<<endl;
    cout<<sizeof(float*)<<endl;
    cout<<sizeof(test1)<<endl;  //指针长度为8个字节

    cout<<"指针数组测试############"<<endl;
    double aa[2] = {1.1,2.2},bb[2] = {1.1,2.2},cc[2] = {1.1,2.2};
    double (*pf[3])[2];
    pf[0] = &aa; pf[1] = &bb; pf[2] = &cc;

    cout<<"动态分配二维数组测试############"<<endl;
    int ** test4 = new int*[4];
    for(int i=0;i<4;i++)
    {
        test4[i] = new int[3];
    }
    for(int i=0;i<4;i++)
        for(int j=0;j<3;j++)
            test4[i][j] = i + j;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
            cout<<test4[i][j];
        delete [] test4[i];
        cout<<endl;
    }
    test4 = NULL;
    return 1;
}
