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
    void Print() const{
        cout << value << endl;
    };
    void Initialize(int number){
        this->value=number;
    };
private:
    int value;
};


class LinkedList{
public:
    //Constructor
    LinkedList();
    //Destructor
    ~LinkedList();
    //Function Section
    void putItemEnd(ItemType val);
    void putItemPlace(int index, ItemType val);
    void printAll();
    void deleteItem(ItemType val);
    int getItem(int index);
private:
    struct NodeType{
        ItemType info;
        //Pointer point to a next NodeType
        NodeType *next;
    };
    int length;
    NodeType *head;
    NodeType *tail;
};
#endif //UNTITLED_LINKEDLIST_H
