/*  2024-09-19-15-43
 *   聪明的鸡腿
 *   copyright by 彭振辉
 *  src/InitialiseCleanup/ClassObjectBecomeObjectNumber
 *  C++类中的成员可以是另一个类的对象，我们称该成员为 对象成员
*/
/**
 * //构造的顺序是 ：先调用对象成员的构造，再调用本类构造
	//析构顺序与构造相反
 */
#include<iostream>
using namespace std;
class Phone{
public:
    //    Phone(string phoneBrand){
//        brand = phoneBrand;
//    }
    Phone(string Iphone):brand(Iphone){}

    string brand;

};
class Person{
public:
    // Phone p_Phone = brand 隐式转换
    Person(string name,string brand):p_Name(name), p_Phone(brand){
        cout<< "person struct function be use"<<endl;
    }
    ~Person(){
        cout<< "person destruct function be use"<<endl;
    }
    string getName(){
        return p_Name;
    }
    string getPhone(){
        return p_Phone.brand;
    }
    void playGame()
    {
        cout << p_Name << " use " << p_Phone.brand << "  ! " << endl;
    }
    string p_Name;
    Phone p_Phone;

};
void test01(){
    Person p("jack","Iphone 99 ProMax 100TB");
     p.playGame();
//     cout<<p.getName()<<endl;
//     cout<<p.getPhone()<<endl;

}
int main() {
    test01();
    return 0;
}