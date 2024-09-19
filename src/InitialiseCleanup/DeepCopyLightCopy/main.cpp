/*  2024-09-19-14-33
 *   聪明的鸡腿
 *   copyright by 彭振辉
 *  src/InitialiseCleanup/DeepCopyLightCopy
 *  浅拷贝与深拷贝?
*/
#include<iostream>
using namespace std;
/**
 * 浅拷贝：简单的赋值拷贝操作（等号赋值 28行）->?堆区的内存重复释放，非法操作
 * 深拷贝：在堆区重新申请空间，进行拷贝操作
 */
 /*结论：如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题*/
 class Person{
 public:
     Person(){
         cout<< "Person 的默认构造函数"<<endl;
     }
     Person(int age,int height){
         p_Age = age;
         p_Height = new int (height);
         cout<< "Person 的有参构造函数"<<endl;

     }
     //自己实现拷贝构造函数解决浅拷贝问题
     Person(const Person &p){
         cout<< "Person 的拷贝构造函数"<<endl;
         p_Age = p.p_Age;
//         p_Height = p.p_Height; 编译器默认实现
//     深拷贝 操作
        p_Height = new int(*p.p_Height);

     }
     ~Person(){
         //将堆区开辟的数据做释放操作
         if(p_Height != NULL){
             delete p_Height;
             p_Height = NULL;
         }
         cout<< "Person 的析构函数"<<endl;
     }
     int p_Age;//年龄
     int * p_Height;//身高
 };
 void test01(){
     Person p1(18,160);
     cout<< "p1的年龄为"<<p1.p_Age<<", p1的身高为"<<*p1.p_Height<<endl;

     Person p2(p1);
     cout<< "p2的年龄为"<<p2.p_Age<<", p2的身高为"<<*p2.p_Height<<endl;

 }
int main() {
    test01();
    return 0;
}