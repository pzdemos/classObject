/*  2024-09-19-11-09
 *   �����ļ���
 *   copyright by �����
 *  src/InitializeCleanup/ConstructorCopyFunction
*/
#include<iostream>

using namespace std;

class Person{
public:
Person(){
        cout<<"Person Ĭ�Ϲ��캯������"<<endl;
    }
    Person(int a){
        age = a;
        cout<<"Person �вι��캯������"<<endl;

    }
    Person(const Person &p){
        age = p.age;
        cout<<"Person �������캯������"<<endl;
    }
    ~Person(){
        cout<<"Person ������������"<<endl;
    }

    int age;
};
//C++�п������캯������ʱ��ͨ�����������
//* ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test01(){
    Person p1(20);
    Person p2(p1);
    cout<<"p2 ������ " <<p2.age<<endl;

};
//* ֵ���ݵķ�ʽ������������ֵ
void doWork(Person p){
//    ֵ����Ҳ�´��һ����ʱ����
};
void test02(){
    Person p;
    doWork(p);
};
//* ��ֵ��ʽ���ؾֲ�����
Person doWork2(){
    Person p1;
    cout<< (int*)&p1<<endl;
    return p1;
}
void test03(){
    Person p = doWork2();
    cout<<(int*)&p<<endl;
}

int main() {

//    test01();

//    test02();

    test03();
    return 0;
}