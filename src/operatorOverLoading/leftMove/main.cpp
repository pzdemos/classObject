/*  2024-09-26-17-22
 *   聪明的鸡腿
 *   copyright by 彭振辉
 *  src/operatorOverLoading/leftMove
 *  左移运算符重载
*/
#include<iostream>
using namespace std;
/*总结：重载左移运算符配合友元可以实现输出自定义数据类型*/
class Person{
friend ostream  & operator<<(ostream &o,Person &p);
public:
    //利用成员函数重载左移运算符
    //成员函数 实现不了  p << cout 不是我们想要的效果
    //void operator<<(Person& p){
    //}
    Person(int a,int b){
        this->p_A = a;
        this->p_B = b;
    }
private:
    int p_A;
    int p_B;
};
ostream & operator<<(ostream &o,Person &p){
    o<< "p_A = "<< p.p_A << " p_B = "<<p.p_B<<endl;
    return o;
}
void test01(){
    Person p(10,10);

    cout << p <<" hello "<<endl;

}
int main() {
    test01();
    return 0;
}
/*
cout 是一个 ostream 对象：
用于标准输出，通常输出到屏幕。
<< 是一个插入运算符：
用于将数据插入到输出流中。
重载 << 运算符：
通过重载 << 运算符，可以使得 cout 输出自定义类型的数据。
这样，通过重载 << 运算符，
 你可以方便地输出自定义类型的数据，使得代码更加简洁和直观。*/