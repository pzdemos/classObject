/*  2024-09-25-23-16
 *   聪明的鸡腿
 *   copyright by 彭振辉
 *  src/objectModelAndThisPointer/constMakeMemberFunc
 *  const 修饰成员函数
*/
#include<iostream>
using namespace std;

/*
 * 常函数：**
* 成员函数后加const后我们称为这个函数为**常函数**
* 常函数内不可以修改成员属性
* 成员属性声明时加关键字mutable后，在常函数中依然可以修改
 */
class Person{
public:
    Person(){}
    // this 指针本质是指针常量 指针指向不可修改
//    Person * const this
//   this + Person * const this  都不可改
    void showPerson() const{
        //在成员函数后面加const 修饰的是this指向 指向的值不可改
//        this->P_Age = 20; ❌
       // this = NULL; ❌// this 指针 不可以修改指针的指向
       this->p_Gender = 30;
    }
    void normal(){
        //普通成员函数可修改成员变量 所以常对象无法调用
        P_Age = 20;
    }
    int P_Age;
    mutable int p_Gender;
};
void test01(){
    Person p;
    p.showPerson();
}
/*
**常对象：**
* 声明对象前加const称该对象为常对象
* 常对象只能调用常函数
 */
void test02(){
    const Person p1;//在对象加const 变为常对象
//    p1->P_Age = 20; ❌
    p1.p_Gender =34; //mutable 是特殊数
    p1.showPerson() ;//常对象只能调用常函数
//    p1.normal();❌
}
int main() {
    test01();
    return 0;
}