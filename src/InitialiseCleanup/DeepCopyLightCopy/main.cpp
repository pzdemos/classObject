/*  2024-09-19-14-33
 *   �����ļ���
 *   copyright by �����
 *  src/InitialiseCleanup/DeepCopyLightCopy
 *  ǳ���������?
*/
#include<iostream>
using namespace std;
/**
 * ǳ�������򵥵ĸ�ֵ�����������ȺŸ�ֵ 28�У�->?�������ڴ��ظ��ͷţ��Ƿ�����
 * ������ڶ�����������ռ䣬���п�������
 */
 /*���ۣ�����������ڶ������ٵģ�һ��Ҫ�Լ��ṩ�������캯������ֹǳ��������������*/
 class Person{
 public:
     Person(){
         cout<< "Person ��Ĭ�Ϲ��캯��"<<endl;
     }
     Person(int age,int height){
         p_Age = age;
         p_Height = new int (height);
         cout<< "Person ���вι��캯��"<<endl;

     }
     //�Լ�ʵ�ֿ������캯�����ǳ��������
     Person(const Person &p){
         cout<< "Person �Ŀ������캯��"<<endl;
         p_Age = p.p_Age;
//         p_Height = p.p_Height; ������Ĭ��ʵ��
//     ��� ����
        p_Height = new int(*p.p_Height);

     }
     ~Person(){
         //���������ٵ��������ͷŲ���
         if(p_Height != NULL){
             delete p_Height;
             p_Height = NULL;
         }
         cout<< "Person ����������"<<endl;
     }
     int p_Age;//����
     int * p_Height;//���
 };
 void test01(){
     Person p1(18,160);
     cout<< "p1������Ϊ"<<p1.p_Age<<", p1�����Ϊ"<<*p1.p_Height<<endl;

     Person p2(p1);
     cout<< "p2������Ϊ"<<p2.p_Age<<", p2�����Ϊ"<<*p2.p_Height<<endl;

 }
int main() {
    test01();
    return 0;
}