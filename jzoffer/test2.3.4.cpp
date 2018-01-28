/*************************************************************************
    > File Name: test2.3.4.cpp
    > Author: sagata
    > Mail:  
    > Created Time: 2018-01-28 21:47:37
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

int findindex(int array[], int num, int s, int e)
{
    for(int i = s;i<=e;i++)
    {
        if(array[i] == num) return i;
    }
    return -1;
    
}
node* build(int preorder[], int midorder[], int s1, int e1, int s2, int e2 )
{
    node * root = new node();
    root->num = preorder[s1];
    int leftammount = 0;
    int rightammount = 0;
    int midindex = findindex(midorder, root->num, s2, e2);
    if(midindex == s2) root->left = NULL;
    else
    {
        leftammount = midindex - s2;
        root->left = build(preorder,midorder,s1+1,s1+leftammount,s2,midindex-1);
    }
    if(midindex == e2) root->right = NULL;
    else
    {
        rightammount = e2 - midindex;
        root->right = build(preorder,midorder,s1+1+leftammount,e1,midindex+1,e2);
    }
    return root;
}
void before_digui(node * root)
{
    if(root) cout<<root->num<<" ";
    else return;
    before_digui(root->left);
    before_digui(root->right);
}
int main()
{
    int preorder[] = {1,2,4,7,3,5,6,8};
    int midorder[] = {4,7,2,1,5,3,8,6};
    int s1=0,s2=0,e1=7,e2=7;
    node * root = build(preorder, midorder, s1, e1, s2, e2);
    before_digui(root);
}

