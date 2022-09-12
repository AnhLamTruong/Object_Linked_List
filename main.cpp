#include <iostream>
#include "LinkedList.h"
using namespace std;
int main() {
    ItemType num1, num2, num3, num4;

    num1.Initialize(15);
    num1.Print();


    num2.Initialize(14);
    num3.Initialize(1234);
    num4.Initialize(12345);

    LinkedList AnhTest;
    AnhTest.putItemEnd(num1);
    AnhTest.putItemEnd(num2);
    AnhTest.putItemEnd(num3);
    AnhTest.putItemEnd(num4);

    LinkedList Friends;

    Friends.deleteItem(num4);
    Friends.putItemPlace(0,num4);

    return 0;
}
