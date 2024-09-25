/*  2024-09-25-17-02
 *   聪明的鸡腿
 *   copyright by 彭振辉
 *  src/objectInitialiseCleanup/staticNumber
*/
#include<iostream>
using namespace std;
/*
 * *  静态成员变量
   *  所有对象共享同一份数据
   *  在==编译阶段==分配内存
   *  类内声明，类外初始化
    *  静态成员函数
   *  所有对象共享同一个函数
   *  静态成员函数只能访问静态成员变量
 */
class Person{
public:
    static void setName(string newName){
        name = newName;
    }
    static string getName(){
        return name;
    }
    static int getGender(){
    //  ❌   gender = 19; //无法区分到底哪个对象
//        静态成员函数只能访问静态成员变量
        // ❌return gender;//Invalid use of member 'gender' in static member function
    }
    //所有对象都共享同一份数据 静态成员变量
    static int age;//⭐类内声明，类外初始化
    int gender;
private:
    static string name;
    static void func(){
        cout<< "私有静态成员函数"<<endl;
    }
};
//类外初始化
int Person::age = 18;
string Person::name = "zhoujiu";
void test01(){
    Person p;
    cout<< p.age <<endl;//18

    Person p2;
    p2.age = 25;
    cout<< p.age<<endl;//18 共享同一份数据
}
void test02(){
    //静态成员变量不属于某个对象上，所有对象都共享同一份数据
    // 因此静态成员变量有两种不同的访问方式

//    1.通过对象进行进行访问
    Person p;
    cout<< p.age<<endl;//18
    // 2. 直接通过类名访问
    cout<< Person::age<<endl;//18
    // 静态成员变量亦有访问权限
    //cout<<Person::name<<endl;//name' is a private member of 'Person' declared private here
     cout<< Person::getName()<<endl;
}
void test03(){
    Person p;
    p.setName("jack");
    cout << p.getName() <<endl;//jack

    Person p2;
    p2.setName("tom");
    //所有对象共享同一个函数
    cout<< p.getName() <<endl;//p对象的name 已经改变 tom
    cout<<Person::getName()<<endl;//因此静态成员函数有两种不同的访问方式

//     Person::func() 私有静态成员函数同样访问不到

}

int main() {
//    test01();
//    test02();

    // 静态成员函数
    test03();
    return 0;

}