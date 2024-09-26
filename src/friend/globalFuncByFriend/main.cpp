/*  2024-09-26-13-44
 *   聪明的鸡腿
 *   copyright by 彭振辉
 *  src/friend/globalFuncByFriend
 *  1.全局函数做友元
*/
#include<iostream>
using namespace std;
/*友元的目的就是让一个函数或者类 访问另一个类中私有成员

*/

class Building{
    //类的好朋友，可以访问类中的私有内容
    friend void goodFriend(Building &building);//✅
public:
   Building(){
        this->livingRoom = "This is livingRoom";
        this->bedRoom = "This is bedRoom";
    }
    string livingRoom;
private:
    string bedRoom;
};
void goodFriend(Building &building){
    cout<< " goodFriend is visit :"<< building.livingRoom <<endl;
    cout<< " goodFriend is visit :"<< building.bedRoom <<endl;//✅
}
/*2.类做友元*/
void test01(){
    Building b;
    goodFriend(b);
}
int main() {
   test01();
    return 0;
}