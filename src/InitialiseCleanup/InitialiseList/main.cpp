/*  2024-09-19-15-15
 *   聪明的鸡腿
 *   copyright by 彭振辉
 *  src/InitialiseCleanup/InitialiseList
 *  初始化属性
*/
#include<iostream>

using namespace std;
class Person{
public:
//    tradition Initialise operate 传统初始化操作 tradition initialise
//    Person(string a,int b,int c){
//        name = a;
//        age = b;
//        gender = c;
//    }
//  初始化列表属性 ⭐
    Person(string a,int b, int c):name(a),age(b),gender(c){

    }


    string name;
    int age;
    int gender;
};
void test01(){
    Person p("tom",19,0);
//    Person p;
    cout<< "name:"<< p.name<<" "
    << "age:" <<p.age<<" "
    << "gender:"<<p.gender<<endl;
}
int main() {
    test01();
    return 0;
}