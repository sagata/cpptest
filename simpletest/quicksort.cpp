/*************************************************************************
	> File Name: quicksort.cpp
	> Author: sagata
	> Mail:  
	> Created Time: 2018-01-28 23:06:13
 ************************************************************************/

#include<iostream>
using namespace std;

void print(int array[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int swap(int array[], int i, int j)
{
    int tmp = array[i];
    array[i] = array[j];
    array[j] = tmp;
}
int partition(int array[],int index, int s, int e)
{
    int num = array[index];
    int final = e;
    swap(array, index , e);
    e--;
    while(s<e)
    {
        if(array[s] < num){s++; continue;}
        if(array[e] > num){e--; continue;}
        swap(array, s, e);
    }
    if(array[e] >= num) {swap(array, e, final); return e;}
    else {swap(array, e + 1, final); return e+1;}
}

void qsort(int array[], int s, int e)
{
    if(s<0 || e<0 || s >= e) return;
    int index = (s + e)/2;
    int p = partition(array, index, s, e);
    qsort(array, s, p -1);
    qsort(array, p + 1, e);

}
int main()
{
    int array[] = {34,5,7,24,99,1,2,4,6};
    qsort(array, 0,8);
    print(array,9);
}

