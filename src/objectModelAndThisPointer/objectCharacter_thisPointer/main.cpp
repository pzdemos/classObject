/*  2024-09-25-22-00
 *   聪明的鸡腿
 *   copyright by 彭振辉
 *  src/objectModelAndThisPointer/objectCharacter_thisPointer
 *  this指针概念
*/
#include<iostream>
using namespace std;
/**
 * 每一个非静态成员函数只会诞生一份函数实例，也就是说多个同类型的对象会共用一块代码
 * c++通过提供特殊的对象指针，this指针，解决上述问题。this指针指向被调用的成员函数所属的对象
 * @return
 */

/*
 * his指针是隐含每一个非静态成员函数内的一种指针
 * this指针不需要定义，直接使用即可
 */
/*
 * 在 PersonAddAge 前面加 & 的原因有两点：
返回当前对象的引用：return *this;
 表示函数执行后返回当前对象的引用，允许方法链式调用。
函数返回类型为引用：Person & PersonAddAge(Person &p)
 中的 & 表示函数返回的是一个对象引用而非值，
 这样可以避免返回时拷贝整个对象，提高效率。
 如果不加 &，PersonAddAge 函数将按值返回一个 Person 对象，
 这会导致以下问题：
拷贝构造函数会被调用：每次调用 PersonAddAge 并返回时，
 都会创建一个（新的 Person 对象）作为返回值，这意味着拷贝构造函数会被调用，可能会导致不必要的性能开销。
无法实现链式调用：按值返回的对象在函数外部作为一个新对象存在，
 而不是对原对象的操作，因此不能支持如 p1.PersonAddAge(p2).PersonAddAge(p3); 这样的链式调用。
 */
class Person{
public:
    Person(int age){
        this->age = age;//指针指向被调用的成员函数所属的对象
    }
    Person & PersonAddAge(Person &p){
        this->age += p.age;
        //this 指向 p2 的指针 而*this 指向 p2 本体
        return *this;
    }
    int age;
};
/*1.解决名称冲突*/
void test01(){
    Person p1(22);
    // this 此时指向 p1
    cout << " p1 age is :"<< p1.age<<endl;
}
/*2 返回对象本身用 *this */
void test02(){
    Person p1(22);
    Person p2(30);

    //链式编程⭐
    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
    cout << " p2 age is :"<< p2.age<<endl;
}
int main() {
//    test01();


    test02();
    return 0;
}