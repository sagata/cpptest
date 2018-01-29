/*************************************************************************
    > File Name: test.2.3.5.cpp
    > Author: sagata
    > Mail:  
    > Created Time: 2018-01-28 22:19:38
 ************************************************************************/

#include<iostream>
#include<stack>
using namespace std;
class qq
{
public:
    void push(int num);
    int pop();
private:
    stack<int> s1;
    stack<int> s2;
};
void qq::push(int num)
{
   if(this->s1.empty()) this->s2.push(num);
   else this->s1.push(num);
}
int qq::pop()
{
    if(this->s1.empty() && this->s2.empty()) return -1;
    int tmp = 0;
    if(this->s1.empty())
    {
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        tmp = s1.top();
        s1.pop();
        return tmp;
    }
    if(this->s2.empty())
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        tmp = s2.top();
        s2.pop();
        return tmp;
    }
    return -1;
}
int main()
{
    qq * q = new qq();
    q->push(1);
    q->push(2);
    q->push(3);
    q->push(4);
    cout<<q->pop()<<endl;
    cout<<q->pop()<<endl;
    cout<<q->pop()<<endl;
    cout<<q->pop()<<endl;


}

