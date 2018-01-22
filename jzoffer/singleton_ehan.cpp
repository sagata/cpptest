#include <iostream>
using namespace std;
//饿汉模式 直接初始化两个类
//http://blog.csdn.net/crayondeng/article/details/24853471

class ASingleton
{
public:
    static ASingleton* getInstance()
    {
        return &m_data;
    }
    void do_something()
    {
        cout<<"ASingleton do_something!"<<endl;
    }
protected:
    static ASingleton m_data; //static data member 在类中声明，在类外定义
    ASingleton();
    ~ASingleton() {}
};

class BSingleton
{
public:
    static BSingleton* getInstance()
    {
        return &m_data;
    }
    void do_something()
    {
        cout<<"BSingleton do_something!"<<endl;
    }
protected:
    static BSingleton m_data; //static data member 在类中声明，在类外定义
    BSingleton();
    ~BSingleton() {}
};

ASingleton ASingleton::m_data;
BSingleton BSingleton::m_data;

ASingleton::ASingleton()
{
    cout<<"ASingleton constructor!"<<endl;
    BSingleton::getInstance()->do_something();
}

BSingleton::BSingleton()
{
    cout<<"BSingleton constructor!"<<endl;
}

int main()
{
	//ASingleton test();
	//ASingleton::getInstance()->do_something();
	cout<<"test"<<endl;
}