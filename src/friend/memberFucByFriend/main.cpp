/*  2024-09-26-15-30
 *   聪明的鸡腿
 *   copyright by 彭振辉
 *  src/friend/memberFucByFriend
 *  成员函数做友元
*/
#include<iostream>
using namespace std;

class Building;
class GoodFriend{
public:
    GoodFriend();
    void visit();//让其访问Building私有成员
    void visit2();//让其不能访问Building私有成员
private:
    Building * building;
};

class Building{
    friend void GoodFriend::visit();
public:
    Building();
    string livingRoom;
private:
    string bedRoom;
};
Building::Building() {
    livingRoom = "LIVING ROOM";
    bedRoom= "BED ROOM";
}
GoodFriend::GoodFriend() {
    building = new Building;//⭐用指针维护创建在堆区的Building对象
}
void GoodFriend::visit(){
    cout<< "Visit now :"<<building->livingRoom<<endl;
    cout<< "Visit now :"<<building->bedRoom<<endl;
}
void GoodFriend::visit2(){
    cout<< "Visit now :"<<building->livingRoom<<endl;
//    cout<< "Visit now :"<<building->bedRoom<<endl;❌

}
void test01(){
    GoodFriend g;
    g.visit();
    g.visit2();
}
int main() {
    test01();
    return 0;
}