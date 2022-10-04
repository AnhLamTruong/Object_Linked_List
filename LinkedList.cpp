//
// Created by Anh on 9/8/2022.
//
#include "LinkedList.h"
using namespace std;

//Constructor

LinkedList::LinkedList() {
    head=nullptr;
    tail= head;
    length=-1;
}
//Destructor

LinkedList::~LinkedList() {

}

//PutItems at the end

void LinkedList::putItemEnd(ItemType val){
    NodeType *current{};
    current = new NodeType;

    if (head == nullptr) {
        head = new NodeType;
        tail=head;
        head->info=val;
        head->next= nullptr;
        head->info.Print();
//        cout<<"from PutItemEnd(from head)"<<endl;
    } else {
        NodeType *temp=new NodeType;
        temp->info=val;
        temp->next= nullptr;
        tail->next=temp;
        tail=temp;
        tail->info.Print();
//        cout<<"from PutItemEnd(from tail)"<<endl;
    }
    length++;
}

//PutItems at the place

void LinkedList::putItemPlace(int index, ItemType val) {
    NodeType* temp,*cur;
    cur=head;
    int count=1;
    if(head == nullptr || length<=index){
        putItemEnd(val);
    }
    else if(index==0){
        NodeType *newVal= new NodeType();
        newVal->info=val;
        newVal->next=head;
        head=newVal;
    }else{
        temp=head;
        cur=cur->next;
        while(cur!= nullptr){
            if(count==index){
                NodeType *newVal= new NodeType();
                newVal->info=val;
                newVal->next=cur;
                temp->next=newVal;
                break;
            }
            cur=cur->next;
            temp=temp->next;
            count++;
        }
    }

}

//Print All

void LinkedList::printAll() {
    NodeType *current;

    if (head == nullptr) {
        cout << "The List is Empty" << endl;
        return;
    }

    current = head;

    while (current != nullptr) {
        current->info.Print();
        cout<<"-------->";
        current = current->next;
    }
    cout << "NULL" << endl;
}

//Delete items

void LinkedList::deleteItem(ItemType val) {
    NodeType* current = head;
    NodeType* temp=current;
    if (val.getValue() == current->info.getValue()) //first node delete
    {
        head = head->next;
        current=head;
        delete temp;
        temp = nullptr;
        return;
    }
    if (head->next) //list has more than 1 node
    {
        current = current->next;
        while (current != nullptr) {
            if (current->info.getValue() == val.getValue()) {
                temp->next = current->next;
                delete (current);
                current = temp->next;
            } else {
                if (current->next == nullptr) {
                    break;
                } else {
                    current = current->next;
                    temp = temp->next;
                }
            }
        }
    }
}


//Get Item at place

ItemType LinkedList::getItem(int index) {
    NodeType *current;
    int count = 0;
    ItemType n;
    current = head;
    if (current == nullptr) {
        cout<< "The list is empty."<<endl;
    } else {
        if ((index >= 0) && (index <= length)) {
            while (current != nullptr) {
                if (count == index) {
                    n=current->info;
                }
                count++;
                current = current->next;
            }
        } else {
            cout<< "Invalid index."<<endl;
        }
    }
    return n;
}

LinkedList LinkedList::operator+(const LinkedList &other) {
    this->tail->next=other.head;
    return *this;
}

void LinkedList::operator-() {
    NodeType* curr=head;
    NodeType* prev = nullptr;
    NodeType* next = nullptr;
    while (curr != nullptr) {
        // Store next
        next = curr->next;
        // Reverse current node's pointer
        curr->next = prev;
        // Move pointers one position ahead.
        prev = curr;
        curr = next;
    }
    head = prev;
}

bool LinkedList::operator==(const LinkedList &list) {

    return false;
}

//Copy Constructor
LinkedList::LinkedList(LinkedList &other) {
    NodeType* curr1=this->head;
    NodeType* curr2=other.head;


}

//ostream &operator<<(ostream &input, const LinkedList &list) {
//    return <#initializer#>;
//}
//
//istream &operator>>(istream &input, const LinkedList &list) {
//    return <#initializer#>;
//}





