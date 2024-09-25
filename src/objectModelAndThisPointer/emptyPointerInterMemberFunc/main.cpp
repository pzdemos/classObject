/*  2024-09-25-22-59
 *   聪明的鸡腿
 *   copyright by 彭振辉
 *  src/objectModelAndThisPointer/emptyPointerInterMemberFunc
 *  空指针访问成员函数
*/
#include<iostream>
using namespace std;
/*
 * C++中空指针也是可以调用成员函数的，但是也要注意有没有用到this指针
 * 如果用到this指针，需要加以判断保证代码的健壮性
 */
class Person{
public:
    void showClassName(){
        cout<< "this is Person Class"<<endl;
    }
    void showPersonAge(){
        //报错原因是其中传入了空指针
        // resolve
        if(this ==NULL){ return;}//加以判断保证代码的健壮性
        cout<< "age = "<< this->p_Age <<endl;
    }
    int p_Age;
};
void test01(){
    Person *p = NULL;
//    p->showClassName();
//    p->showPersonAge();❌
}
int main() {
    test01();
    return 0;
}