/*************************************************************************
	> File Name: mianshi9.cpp
	> Author: sagata
	> Mail:  
	> Created Time: 2018-01-29 22:54:01
 ************************************************************************/
//运用二分查找的思维来解决问题
#include<iostream>
using namespace std;
int bit_find(int array[], int len)
{
    int s = 0, e = len - 1;
    int mid;
    while(s != e)
    {
        mid = ( s + e )/2;
        cout<<mid<<endl;
        if(mid >0 & array[mid-1] > array[mid]) return array[mid];
        if(array[mid]>array[e]) s = mid + 1;
        else if(mid >0) e = mid - 1;
        else e = mid;
    }
    return array[s];

}
int main()
{
    int array[] = {3,4,5,23,45,67,88,1,2};
    int min = bit_find(array, 9);
    cout<<min<<endl;
}
