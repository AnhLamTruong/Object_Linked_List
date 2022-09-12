//
// Created by Anh on 9/8/2022.
//
#include "LinkedList.h"
using namespace std;

//Constructor

LinkedList::LinkedList() {

}
//Destructor

LinkedList::~LinkedList() {

}

//PutItems at the end

void LinkedList::putItemEnd(ItemType val){
    ItemType test;
    test.Initialize(165);
    if(val.ComparedTo(test)==LESS){
        cout<<"LESS"<<endl;
    }else{
        cout<<"MORE"<<endl;
    }
}

//PutItems at the place

void LinkedList::putItemPlace(int index, ItemType val) {

}

//Print All

void LinkedList::printAll() {

}

//Delete items

void LinkedList::deleteItem(ItemType val) {

}

//Get Item at place

int LinkedList::getItem(int index) {
    return 0;
};





//    if(head == nullptr){
//        head = new NodeType;
//        tail=head;
//        head->info=val;
//        head->next= nullptr;
//        cout<<"Print from PutItemEnd(from head): "<<tail->info<<endl;
//    }else{
//        NodeType *temp=new NodeType;
//        temp->info=val;
//        temp->next= nullptr;
//        tail->next=temp;
//        tail=temp;
//        cout<<"Print from PutItemEnd(from tail): "<<tail->info<<endl;
//    }
//    length++;


//    if(head == nullptr || length<=index){
//        putItemEnd(val);
//    }
//
//head=nullptr;
//tail= head;
//length=0;