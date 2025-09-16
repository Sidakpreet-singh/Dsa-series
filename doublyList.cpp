#include<iostream>
using namespace std;

class Node{
    public : 
    int data;
    Node *next;
    Node *prev;

    Node(int val){
        data = val;
        next = prev = NULL;
    }
};

class Doubly{
    Node *head;
    Node *tail;

    public :

    Doubly(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node *newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            head->prev = newNode;
            newNode->next = head;
            head = newNode;


        }

    }
    void push_back(int val){
        Node *newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;


        }

    }

    void pop_front(){
        if(head == NULL){
            return;
        }
        else{
            
            Node *temp =head;
            head = head->next;
            if(head != NULL){
            head->prev = NULL;
            }
            delete temp;

        }
    }
    void pop_back(){
        if(head == NULL){
            return;
        }
        else{
            Node *temp =tail;
            tail = tail->prev;
            if(tail != NULL){
                tail->next = NULL;
            }
            delete temp;
        }
    }
   


    void print(){
        Node *temp = head;
        while(temp != NULL){
            cout<<temp->data<<"<->";
            temp = temp->next;
        }
    }
};

int main(){
    Doubly dll;
    dll.push_front(9);
    dll.push_front(6);
    dll.push_front(8);
    dll.push_front(9);
    dll.push_back(10);
    dll.push_back(11);
    dll.pop_front();
    dll.pop_back();
    dll.pop_back();
    
    dll.print();

    

}