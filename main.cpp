#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include "LinkedList.h"
using namespace std;
int main() {
    ItemType test,test1,test2,test3,test4,test5;
    test.Initialize(1);
    test1.Initialize(2);
    test2.Initialize(3);
    test3.Initialize(4);
    test4.Initialize(5);
    test5.Initialize(6);

    LinkedList link1;
    LinkedList link2;
    LinkedList link3;
    link1.putItemEnd(test);
    link1.putItemEnd(test1);
    link1.putItemEnd(test2);
    link1.putItemEnd(test3);
    link1.putItemEnd(test4);
    link1.putItemEnd(test5);
    link2.putItemEnd(test);
    link2.putItemEnd(test1);
    link2.putItemEnd(test2);
    link2.putItemEnd(test3);
    link2.putItemEnd(test4);
    link2.putItemEnd(test5);
    link1.printAll();
    -link1;
    link1.printAll();
    link3=link1+link2;
    link3.printAll();
    return 0;
}


//    int countLine = 1;
//    string line;
//    ifstream myFile("data.txt");
//    if (myFile.is_open()) {
//        while (getline(myFile, line)) {
//            if (countLine == 1) {
//                string delim = ",";
//                size_t pos = 0;
//                string token;
//                //Using find
//                while ((pos = line.find(delim)) != std::string::npos) {
//                    token = line.substr(0, pos);
//                    int nums = stoi(token);
//                    AnhTestItemsType.Initialize(nums);
//                    AnhTestLinkedList.putItemEnd(AnhTestItemsType);
//                    line.erase(0, pos + delim.length());
//                    int nums2 = stoi(line);
//                    //Last number, I guess ;-;
//                    if (nums2 == 160) {
//                        AnhTestItemsType.Initialize(nums);
//                        AnhTestLinkedList.putItemEnd(AnhTestItemsType);
//                    }
//                }
//                cout << "Elements of list after inserting first line elements: " << endl;
//                AnhTestLinkedList.printAll();
//            }
//
//            if (countLine == 2) {
//                string delim = ",";
//                size_t pos = 0;
//                string token;
//                while ((pos = line.find(delim)) != std::string::npos) {
//                    token = line.substr(0, pos);
//                    int nums = stoi(token);
//                    AnhTestItemsType.Initialize(nums);
//                    AnhTestLinkedList.deleteItem(AnhTestItemsType);
//                    int nums2 = stoi(line);
//                    line.erase(0, pos + delim.length());
//                    if (nums2 == 160) {
//                        AnhTestItemsType.Initialize(nums);
//                        AnhTestLinkedList.deleteItem(AnhTestItemsType);
//                    }
//                }
//                cout << "Elements of list after deleting second line items: " << endl;
//                AnhTestLinkedList.printAll();
//            }
//            if (countLine == 3) {
//                string delim = ",";
//                size_t pos = 0;
//                string token;
//                while ((pos = line.find(delim)) != std::string::npos) {
//                    token = line.substr(0, pos);
//                    string s1, s2, s3, s4;
//                    //Store 1=s1 @ 2=s2
//                    s1 = token[0];
//                    s2 = token[2];
//                    int num = stoi(s1);
//                    int place = stoi(s2);
//                    AnhTestItemsType.Initialize(num);
//                    AnhTestLinkedList.putItemPlace(place, AnhTestItemsType);
//                    line.erase(0, pos + delim.length());
//                    s3 = line[2];
//                    s4 = line[0];
//                    if (s3 == "END") {
//                        int num2=stoi(s4);
//                        AnhTestItemsType.Initialize(num2);
//                        AnhTestLinkedList.putItemEnd(AnhTestItemsType);
//                    }
//                }
//                cout << "Elements of list after inserting third line elements: " << endl;
//                AnhTestLinkedList.printAll();
//            }
//            countLine++;
//        }
//        myFile.close();
//    }else {
//        cout<<"Unable to open file";
//    }
//    int index;
//    cout<<"Enter the index to FIND THE NODE !!!: ";
//    cin>>index;
//
//    cout<<"Value at index "<<index<<" is"<<AnhTestLinkedList.getItem(index).getValue()<<endl;


//    ItemType num1, num2, num3, num4,num5, num6;
//
//    num1.Initialize(15);
//    num2.Initialize(14);
//    num3.Initialize(1234);
//    num4.Initialize(12345);
//    num5.Initialize(-1);
//    num6.Initialize(-76);
//
//    LinkedList AnhTest;
//    AnhTest.putItemEnd(num1);
//    AnhTest.putItemEnd(num2);
//    AnhTest.putItemEnd(num3);
//    AnhTest.putItemEnd(num3);
//    AnhTest.putItemEnd(num4);
//    AnhTest.putItemPlace(4,num6);
//    AnhTest.putItemPlace(4,num5);
//
//    AnhTest.printAll();
//
//    LinkedList Friends;
//
//    AnhTest.deleteItem(num3);
//    cout<<"\n";
//    AnhTest.printAll();
//    Friends.putItemPlace(0,num4);

