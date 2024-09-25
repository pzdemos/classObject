/*  2024-09-19-11-34
 *   聪明的鸡腿
 *   copyright by 彭振辉
 *  src/objectInitialiseCleanup/ConstructorUseRules
 *  构造函数调用规则
*/
#include<iostream>
//默认情况下，c++编译器至少给一个类添加3个函数
//1．默认构造函数(无参，函数体为空)
//2．默认析构函数(无参，函数体为空)
//3．默认拷贝构造函数，对属性进行值拷贝
using namespace std;
//* 如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供?默认拷贝构造
//   * 如果用户定义拷贝构造函数，c++不会再提供其他构造函数

class Person{
public:
    Person(){
        cout<< "Person的默认构造函数调用" <<endl;
    }
    Person(int a){
        age = a;
        cout<< "Person的有参构造函数调用" <<endl;
    }
    Person(const Person &p){
        age = p.age;
        cout<< "Person 拷贝函数的调用！"<<endl;
    }
    ~Person(){
        cout<< "Person的析构函数调用" <<endl;
    }
    int age;
};
//void test01(){
//    Person p;
//    p.age = 18;
//    Person p2(p);
//    cout<< "p2的年龄为："<< p2.age<<endl;
//
//};
void test02(){
//    Person p;
    Person p(28);
    Person p2(p);
    cout<< "p2的年龄为："<< p2.age<<endl;
}
int main() {
//    test01();
    test02();
    return 0;
}