/*************************************************************************
	> File Name: before.cpp
	> Author: sagata
	> Mail:  
	> Created Time: 2018-01-28 19:37:23
    前序排序的递归和非递归版本
 ************************************************************************/

#include<iostream>
using namespace std;
struct node
{
    int num;
    node * left;
    node * right;
};


/*
 *      1
 *     /  \
 *    2    3
 *   /    /  \
 *  4     5   6
 *   \       /
 *    7     8
 * */
void buildtree(node * root)
{
    root = new node();
    //root->num = 1;
    //root->left = NULL;
    //root->right = NULL;


}
int main()
{   
    node * root = NULL;
    cout<<root->num<<endl;

    cout<<"test"<<endl;

}

