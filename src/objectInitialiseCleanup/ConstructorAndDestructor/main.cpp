//
// Created by dell on 2024-09-11.
//
/*构造函数与析构函数*/
/*2024-09-11-22-29*/
/*copyright by 彭振辉*/


#include<iostream>
using namespace std;

//对象的初始化和清理
/*class Person{
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
}*/


// ?分类
// 按照参数类型分类 无参构造和有参构造
// 按照类型分类 普通构造 和 拷贝构造

class Person{
public:
    Person(){
        cout<< "Person 无参构造函数调用"<<endl;
    }
    Person(int a){
        age = a;
        cout<< "Person 有参构造函数调用"<<endl;
    }
//    拷贝构造函数 引用的方式传递
    Person(const Person &p){
//        将传入人身上所有的属性，拷贝到我身上
        cout<< "Person 拷贝构造函数调用"<<endl;
        age = p.age;
//        cout<< " age = "<< age<<endl;
    }
    ~Person(){
        cout<< "Person 析构函数调用"<<endl;
    }
    int age;
};
//调用
void test02(){
//    1.括号法
//    Person p1;//默认构造函数的调用
//    Person p2(10);//有参构造函数
////    拷贝构造函数
//    Person p3(p2);
//    注意 调用默认构造函数的时候不要加（）会被误认成函数声名
//    Person p1(); => void func() ?
//    cout<< " p2 的年龄 "<< p2.age<<endl;
//    cout<< " p3 的年龄 "<< p3.age<<endl;

// 2，显示法
//    Person p1;
//    Person p2 = Person(10);// Person(10) 匿名对象 当前执行结束后 系统立即回收?
//    Person p3 = Person(p2);

//    Person(10);
//    cout<< "析构函数在结束之前输出"<<endl;
// 注意事项
// 不要利用拷贝构造函数初始化匿名对象
// 编译器会认为Person(p3) == Person P3; 对象的声明
//    Person(p3);

// 隐式转换法
    Person p4 = 10;//相当与Person p4 = Person(10)
    Person p5 = p4;// 拷贝构造
}
int main(){
   /* test01();
//    Person p;

    */

   test02();

   system("pause");
   return 0;

}