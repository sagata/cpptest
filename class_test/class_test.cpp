/*************************************************************************
	> File Name: class_test.cpp
	> Author: sagata
	> Mail:  
	> Created Time: 2017-10-11 04:02:41
 ************************************************************************/

#include<iostream>
using namespace std;
class base
{
    public:
        base(int h)
        {
            cout<<"base construction "<< h <<endl;
        }
        ~base() 
        {
            cout<<"base deconstruction"<<endl;
        }
};




class B
{
    public:
        int p1;
        B()
        {
            cout<<"B construction " <<endl;
        }
        B(int a)
        {
            p1 = a;
            cout<<"B construction " <<endl;
        }
        virtual ~B() 
        {
            cout<<"B deconstruction"<<endl;
        }
        void common(){cout<<"B common "<<endl;}
        virtual void v_common() {cout<<"B v common "<<endl;}
        //virtual void v() = 0;}

};
class inhence: public B
{
public:
    inhence()
    {
        //B:B();
        cout<<"inhence construction"<<endl;
    }
    ~inhence(){
        cout<<"inhence deconstrction"<<endl;
    }
    void v_common(){cout<<"inhence v common"<<endl;}
};
int main()
{
    /*
    base test(1);
    base * test2 = new base(1);
    delete test2; //这个一定要显式的释放掉
    */
    //B test(12);
    //cout<<test.p1<<endl;
    /*
    inhence c = inhence();
    c.v_common();
    */
    B *c2 = new inhence();
    c2->v_common();
    c2->common();
    delete c2;
    cout<<"finish"<<endl;

}
