/*************************************************************************
	> File Name: ytriangle.cpp
	> Author: sagata
	> Mail:  
	> Created Time: 2017-10-10 22:33:24
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int n = 20;
    int* array = new int[n];
    array[0] = 1;
    cout<<1<<endl;
    for(int i=1;i<n;i++)
    {
        array[i] = 1;
        for(int j=i-1;j>0;j--) //注意这一步一定要从尾部开始算起
        {
            array[j] = array[j] + array[j-1];
        }
        for(int k =0;k<i+1;k++)
            cout<<array[k]<<" ";
        cout<<endl;
    }
}
