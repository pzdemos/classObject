//
// Created by dell on 2024-09-11.
//
/*构造函数与析构函数*/
/*2024-09-11-22-29*/
/*copyright by 彭振辉*/


#include<iostream>
using namespace std;

//对象的初始化和清理
class Person{
public:
//    1. 构造函数，没有返回值也不写void
//    2. 函数名称与类名相同
//    3. 构造函数可以有参数，因此可以发生重载
//    4. 程序在调用对象时候会自动调用构造，无须手动调用,而且只会调用一次
    Person(){

        cout<< "构造函数的调用!"<<endl;
    }
//    1. 析构函数，没有返回值也不写void
//    2. 函数名称与类名相同,在名称前加上符号  ~
//    3. 析构函数不可以有参数，因此不可以发生重载
//    4. 程序在对象销毁前会自动调用析构，无须手动调用,而且只会调用一次
    ~Person(){
        cout<< "析构函数的调用!"<<endl;
}
};
//构造和析构都是必须有的实现，如果我们自己不提供
//编译器会提供一个空实现的构造和析构
void test01(){
    Person p;//在栈上的数据，test01执行完毕释放这个对象
}
int main(){
    test01();
//    Person p;
    system("pause");
    return 0;
}