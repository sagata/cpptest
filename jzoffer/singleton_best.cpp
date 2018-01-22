#include <iostream>
using namespace std;
//最好的模式 使用局部静态变量  这种不仅是线程安全的 而且是可以避免不同类对象互相调用的时候可能还没构建的问题
//http://blog.csdn.net/crayondeng/article/details/24853471

class ASingleton
{
public:
    static ASingleton* getInstance()
    {
        static ASingleton instance;
        return &instance;
    }
    void do_something()
    {
        cout<<"ASingleton do_something!"<<endl;
    }
protected:
    struct Object_Creator
    {
        Object_Creator()
        {
            ASingleton::getInstance();
        }
    };
    static Object_Creator _object_creator;

    ASingleton();
    ~ASingleton() {}
};


class BSingleton
{
public:
    static BSingleton* getInstance()
    {
        static BSingleton instance;
        return &instance;
    }
    void do_something()
    {
        cout<<"BSingleton do_something!"<<endl;
    }
protected:
    struct Object_Creator
    {
        Object_Creator()
        {
            BSingleton::getInstance();
        }
    };
    static Object_Creator _object_creator;

    BSingleton();
    ~BSingleton() {}
};
ASingleton::Object_Creator ASingleton::_object_creator;
BSingleton::Object_Creator BSingleton::_object_creator;

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
	cout<<"test"<<endl;
}