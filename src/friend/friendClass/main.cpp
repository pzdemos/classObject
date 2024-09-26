/*  2024-09-26-15-04
 *   聪明的鸡腿
 *   copyright by 彭振辉
 *  src/friend/friendClass
 *  类做友元
*/
#include<iostream>
using namespace std;
/*为什么要在GoodFriend类中创建Building * building;，并且要在方法中new一个building?*/
/*动态分配内存：通过 new 操作符在堆上分配内存，使 building 成为一个指向堆上 Building 对象的指针。
 * 这样可以在程序运行期间灵活地管理对象的生命周期。
对象所有权：GoodFriend 对象拥有一个 Building 对象的实例，这个实例是在堆上分配的，
 因此 GoodFriend 可以在其整个生命周期内访问这个 Building 实例。
避免栈上对象生命周期限制：如果直接在栈上创建 Building 对象，
 则对象生命周期受限于作用域。使用堆上对象可以更灵活地控制对象的生命周期。*/

class Building{
    friend class GoodFriend;
public:
    Building();
    string livingRoom;
private:
    string bedRoom;
};
Building::Building() {
    this->livingRoom = "This is living room!!!!";
    this->bedRoom = "This is bed room !!!";
}


class GoodFriend{
public:
    GoodFriend();
    void visit();//让参观函数访问Building属性
    Building * building;//构造函数初始化 building 指向一个新的 Building 对象
};
GoodFriend::GoodFriend() {
    building = new Building;//让创建的堆区指针维护对象
}

void GoodFriend::visit() {
    cout<< "good friend is visit "<<building->livingRoom<<endl;
    cout<< "good friend is visit "<<building->bedRoom<<endl;
}

void test01(){
    GoodFriend g;
    g.visit();

};
int main() {
    test01();
    return 0;
}