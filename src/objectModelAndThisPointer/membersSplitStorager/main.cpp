/*  2024-09-25-17-59
 *   聪明的鸡腿
 *   copyright by 彭振辉
 *  src/objectModelAndThisPointer/membersSplitStorager
 *  成员变量和成员函数分开存储
*/
#include<iostream>
using namespace std;
/*
 * 在C++中，类内的成员变量和成员函数分开存储
 *   只有非静态成员变量才属于类的对象上
 */
class Person{
    // 1.空

    // 2.非静态成员变量 属于类的对象上 ✅
  int age;

  // 3.静态成员变量 不属于类的对象上
  static int gender;

  void func(){}//非静态成员函数 不属于类的对象上

  static void func2() {}//非静态成员函数 不属于类的对象上

};
int Person::gender = 0;
void test01(){
    Person p;// 空对象 占用的内存空间 ： 1
    // c++ 编译器 会给每个空对象 分配一个字节空间，是为了区分它与其他空对象所占的内存的位置
    // 每个空对象 也有一个独一无二的内存地址
    cout<< "Size of p: "<< sizeof (p)<<endl;
}

void test02(){
    Person p;// 有一个非静态成员变量 占用的内存空间 ： 4 静态成员变量 不属于类的对象上
    cout<< "Size of p: "<< sizeof (p)<<endl;
}

void test03() {
    Person p;// 有一个静态成员变量 占用的内存空间 ： 4
    cout<< "Size of p: "<< sizeof (p)<<endl;
}

int main() {
    //空对象
//    test01();
    //非空对象 有一个非静态成员变量
//    test02();

// 非空对象 有一个静态成员变量
    test03();
    return 0;
}