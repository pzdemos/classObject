/*  2024-09-19-11-09
 *   聪明的鸡腿
 *   copyright by 彭振辉
 *  src/InitializeCleanup/ConstructorCopyFunction
*/
#include<iostream>

using namespace std;

class Person{
public:
Person(){
        cout<<"Person 默认构造函数调用"<<endl;
    }
    Person(int a){
        age = a;
        cout<<"Person 有参构造函数调用"<<endl;

    }
    Person(const Person &p){
        age = p.age;
        cout<<"Person 拷贝构造函数调用"<<endl;
    }
    ~Person(){
        cout<<"Person 析构函数调用"<<endl;
    }

    int age;
};
//C++中拷贝构造函数调用时机通常有三种情况
//* 使用一个已经创建完毕的对象来初始化一个新对象
void test01(){
    Person p1(20);
    Person p2(p1);
    cout<<"p2 的年龄 " <<p2.age<<endl;

};
//* 值传递的方式给函数参数传值
void doWork(Person p){
//    值传递也会拷贝一个临时副本
};
void test02(){
    Person p;
    doWork(p);
};
//* 以值方式返回局部对象
Person doWork2(){
    Person p1;
    cout<< (int*)&p1<<endl;
    return p1;
}
void test03(){
    Person p = doWork2();
    cout<<(int*)&p<<endl;
}

int main() {

//    test01();

//    test02();

    test03();
    return 0;
}