/*************************************************************************
	> File Name: before.cpp
	> Author: sagata
	> Mail:  
	> Created Time: 2018-01-28 19:37:23
    前序排序的递归和非递归版本
 ************************************************************************/

#include<iostream>
#include<stack>
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
void buildtree(node * & root1)
{
    root1 = new node();
    root1->num = 1;
    node * root2 = new node();
    root2->num = 2;
    node * root3 = new node();
    root3->num = 3;
    node * root4 = new node();
    root4->num = 4;
    node * root5 = new node();
    root5->num = 5;
    node * root6 = new node();
    root6->num = 6;
    node * root7 = new node();
    root7->num = 7;
    node * root8 = new node();
    root8->num = 8;
    root1->left = root2;
    root1->right = root3;
    root2->left = root4;
    root2->right = NULL;
    root3->left = root5;
    root3->right = root6;
    root4->left = NULL;
    root4->right = root7;
    root5->left = NULL;
    root5->right = NULL;
    root6->left = root8;
    root6->right = NULL;
    root7->left = NULL; root7->right = NULL;
    root8->left = NULL; root8->right = NULL;

}
void before_digui(node * root)
{
    if(root) cout<<root->num<<" ";
    else return;
    before_digui(root->left);
    before_digui(root->right);
}
void before_node_digui(node * root)
{
    if(!root) return;
    stack<node *> s;
    s.push(root);
    node * p;
    while(!s.empty())
    {
        p = s.top();
        s.pop();
        cout<<p->num<<" ";
        if(p->right) s.push(p->right);
        if(p->left) s.push(p->left);
    }
}
void mid_digui(node * root)
{
    if(!root)  return;
    mid_digui(root->left);
    cout<<root->num<<" ";
    mid_digui(root->right);
}
void mid_node_digui(node * root)
{
    if(!root) return;
    stack<node *> s;
    s.push(root);
    node * p = root->left;
    while(!s.empty() or p)
    {
        while(p)
        {
            s.push(p);
            p = p->left;
        }
        p = s.top();
        s.pop();
        cout<<p->num<<" ";
        p = p->right;
    }
}
void back_digui(node * root)
{
    if(!root)  return;
    back_digui(root->left);
    back_digui(root->right);
    cout<<root->num<<" ";
}
void back_node_digui(node * root)
{
    if(!root) return;
    stack<node *> s;
    stack<node *> print_s;
    s.push(root);
    node * p = root->left;
    while(!s.empty() or p)
    {
        while(p)
        {
            s.push(p);
            p = p->left;
        }
        p = s.top();
        cout<<p->num<<endl;
        if(!p->right)
        {
            cout<<"11111fas";
            cout<<p->num<<" ";
            s.pop();
        }
        else
        {
            cout<<"fas";
            if(p == print_s.top())
            {
                cout<<"0:fas";
                cout<<p->num<<" ";
                s.pop();
                print_s.pop();
            }
            else
            {
                cout<<"1fas";
                print_s.push(p);
                p = p->right;
            }
        }
    }
}

int main()
{   
    node * root = NULL;
    buildtree(root);
    before_digui(root);  cout<<endl;
    before_node_digui(root); cout<<endl;
    mid_digui(root);  cout<<endl;
    mid_node_digui(root); cout<<endl;
    back_digui(root);  cout<<endl;
    back_node_digui(root); cout<<endl;
    cout<<"test"<<endl;

}

