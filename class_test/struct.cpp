/*************************************************************************
	> File Name: struct.cpp
	> Author: sagata
	> Mail:  
	> Created Time: 2017-10-11 02:41:35
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
struct person
{
    string name;
    int age;
    person * next;
};
int showall(person *p)
{
    while(p)
    {
        cout<<p->age<<endl;
        p = p->next;
    }

}
int main()
{
    person me;
    me.name = "xiaoyang";
    me.age = 20;
    cout<<me.name<<endl;
    cout<<me.age<<endl;
    person *you = new person(); //注意一定要分配空间哦
    you->name = "psy";
    you->age = 29;
    cout<<you->name<<endl;
    cout<<you->age<<endl;

    //建立链表
    int n = 10;
    person *head,*p;
    head = new person();
    head->age = 0;
    p = head;
    for(int i=1;i<10;i++)
    {
        p->next = new person;
        p = p->next;
        p->age = i;
    }
    p->next = NULL;
    //遍历链表
    p = head;
    while(p)
    {
        cout<<p->age<<endl;
        p = p->next;
    }
    //插入节点
    p = head;
    person * temp;
    while(p)
    {
        if(p->age ==2)
        {
            temp = new person();
            temp->age = 23;
            temp->next = p->next;
            p->next = temp;
            break;
        }
        p = p->next;
    }
    showall(head);
    //删除节点
    p = head;
    if(p->age == 23)
    {
        head = p->next;
        delete p;
    }
    else
    {
        while(p)
        {
            if(p->next)
            {
                if(p->next->age == 23)
                {
                    temp = p->next;
                    p->next = temp->next;
                    delete temp;
                }
            }
            p = p->next;
        }
    }
    showall(head);
}

