//
// Created by Anh on 9/8/2022.
//

#ifndef UNTITLED_LINKEDLIST_H
#define UNTITLED_LINKEDLIST_H
#include <iostream>
using namespace std;

const  int  MAX_ITEM = 5;
enum  RelationType { LESS, EQUAL, GREATER };

//ItemType
class ItemType
{
public:
    ItemType(){
        value=0;
    };
    RelationType ComparedTo(ItemType otherItem) const
    {
        if (value < otherItem.value)
            return LESS;
        else if (value > otherItem.value)
            return GREATER;
        else
            return EQUAL;
    };
    int getValue() const{
        return this->value;
    }
    void Print() const{
        cout << value<<" ";
    };
    void Initialize(int number){
        this->value=number;
    };
private:
    int value;
};


class LinkedList{
public:
    //OVERLOAD//
    //Union 2 Linked Lists(Binary)
    LinkedList operator+(const LinkedList& list);
    //Intersect of 2 Linked Lists(Binary)
    LinkedList operator-(const LinkedList& list);
    //Reverse a linked list(Unary)
    LinkedList operator-();
    //Compare 2 Linked List(Relation)
    bool operator==(const LinkedList& list);
    //Input a value to a Linked List(I/O)
    friend istream &operator>>(istream &input, const LinkedList &list);
    //Input a value to a Linked List(I/O)
    friend ostream &operator<<(ostream &input, const LinkedList &list);


    //Constructor
    LinkedList();
    //Destructor
    ~LinkedList();
    //Function Section
    void putItemEnd(ItemType val);
    void putItemPlace(int index, ItemType val);
    void printAll();
    void deleteItem(ItemType val);
    ItemType getItem(int index);
private:
    struct NodeType{
        ItemType info;
        //Pointer point to a next NodeType
        NodeType *next{};
    };
    int length;
    NodeType *head;
    NodeType *tail;
};
#endif //UNTITLED_LINKEDLIST_H
