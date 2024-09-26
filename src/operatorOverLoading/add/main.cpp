/*  2024-09-26-16-04
 *   聪明的鸡腿
 *   copyright by 彭振辉
 *  src/operatorOverLoading/add
 *  运算符重载概念：对已有的运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型
 *  实现两个自定义数据类型相加的运算
*/

#include<iostream>

using namespace std;
/**
 * > 总结1：对于内置的数据类型的表达式的的运算符是不可能改变的
   > 总结2：不要滥用运算符重载
 */
class Person{
public:
//    Person(int a,int b){
//        this->p_A = a;
//        this->p_B = b;
//    }
//    Person & add(Person &p){
//        this->p_A += p.p_A;
//        this->p_B += p.p_B;
//        return *this;
//    }

//
    Person operator+(const Person &p){
        Person temp;
        temp.p_A = this->p_A + p.p_A;
        temp.p_B = this->p_B + p.p_B;
        return temp;
    }
    void getPrams(){
    cout<< "P_A:"<<this->p_A<<endl;
    cout<< "P_B:" <<this->p_B<<endl;
    }
    int p_A;
    int p_B;

};
// 全局函数重载
//Person operator+(Person &p1,Person &p2){
//    Person temp;
//    temp.p_A = p1.p_A + p2.p_A;
//    temp.p_B = p1.p_B + p2.p_B;
//    return temp;
//}

//运算符重载 可以发生函数重载
Person operator+(Person &p,int value){
    Person temp;
    temp.p_A = p.p_A + value;
    temp.p_B = p.p_B + value;
    return temp;
}

void test01(){
    // 传统
//    Person p1(10,10);
//    Person p2(20,20);
//    p2.add(p1).add(p1);  // 传统
//    cout<< p2.p_B <<" " <<p2.p_A<<endl;

    //加号运算符重载
    Person p1;
    p1.p_A = 10;
    p1.p_B = 10;
    Person p2;
    p2.p_A = 20;
    p2.p_B = 20;

//    全局函数实现 + 号运算符重载本质
//    Person p3 = operator+(p1,p2);

//     成员函数实现 + 号运算符重载本质
//      Person p3 = p2.operator+(p1);
    Person p3 = p1 + p2;

//运算符重载 也可以发生函数重载
    Person p4 = p1 + 22;

    p3.getPrams();
    p4.getPrams();




}
int main() {
    test01();
    return 0;
}