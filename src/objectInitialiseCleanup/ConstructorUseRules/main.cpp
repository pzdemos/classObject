/*  2024-09-19-11-34
 *   �����ļ���
 *   copyright by �����
 *  src/objectInitialiseCleanup/ConstructorUseRules
 *  ���캯�����ù���
*/
#include<iostream>
//Ĭ������£�c++���������ٸ�һ�������3������
//1��Ĭ�Ϲ��캯��(�޲Σ�������Ϊ��)
//2��Ĭ����������(�޲Σ�������Ϊ��)
//3��Ĭ�Ͽ������캯���������Խ���ֵ����
using namespace std;
//* ����û������вι��캯����c++�����ṩĬ���޲ι��죬���ǻ��ṩ?Ĭ�Ͽ�������
//   * ����û����忽�����캯����c++�������ṩ�������캯��

class Person{
public:
    Person(){
        cout<< "Person��Ĭ�Ϲ��캯������" <<endl;
    }
    Person(int a){
        age = a;
        cout<< "Person���вι��캯������" <<endl;
    }
    Person(const Person &p){
        age = p.age;
        cout<< "Person ���������ĵ��ã�"<<endl;
    }
    ~Person(){
        cout<< "Person��������������" <<endl;
    }
    int age;
};
//void test01(){
//    Person p;
//    p.age = 18;
//    Person p2(p);
//    cout<< "p2������Ϊ��"<< p2.age<<endl;
//
//};
void test02(){
//    Person p;
    Person p(28);
    Person p2(p);
    cout<< "p2������Ϊ��"<< p2.age<<endl;
}
int main() {
//    test01();
    test02();
    return 0;
}