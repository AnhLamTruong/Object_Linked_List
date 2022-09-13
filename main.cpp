#include <iostream>
#include "LinkedList.h"
using namespace std;
int main() {
    ItemType num1, num2, num3, num4,num5, num6;

    num1.Initialize(15);
    num2.Initialize(14);
    num3.Initialize(1234);
    num4.Initialize(12345);
    num5.Initialize(-1);
    num6.Initialize(-76);

    LinkedList AnhTest;
    AnhTest.putItemEnd(num1);
    AnhTest.putItemEnd(num2);
    AnhTest.putItemEnd(num3);
    AnhTest.putItemEnd(num3);
    AnhTest.putItemEnd(num4);
    AnhTest.putItemPlace(4,num6);
    AnhTest.putItemPlace(4,num5);

    AnhTest.printAll();

    LinkedList Friends;

    AnhTest.deleteItem(num3);
    cout<<"\n";
    AnhTest.printAll();
//    Friends.putItemPlace(0,num4);
    return 0;
}
