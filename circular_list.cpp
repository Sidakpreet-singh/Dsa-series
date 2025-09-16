#include<bits/stdc++.h>
using namespace std;

class Node{
    public :
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }

};

class Circular{
    public :
    Node *head;
    Node *tail;

    Circular(){
        head=tail=NULL;
    }

    void insert_front(int val){
        Node *temp = new Node(val);
        if(head == NULL){
            head = tail = temp;
            tail->next = head;
        }
        else{
            temp->next = head;
            head = temp;
            tail->next = head;

        }
    }
    void insert_back(int val){
        Node *temp = new Node(val);
        if(head == NULL){
            head = tail = temp;
            tail->next = head;
        }
        else{
            tail->next = temp;
            tail = temp;
            tail->next = head;

        }
    }


    void pop_front(){
        if(head == NULL){
            return;
        }
        else if(head == tail){
            delete head;
            head = tail = NULL;
        }
        else{
            Node *temp = head;
            head = head->next;
            
            temp = NULL;
            delete temp;
            tail->next = head;
             }
    }

    void pop_back(){
        if(head == NULL){
            return ;
        }
        else if(head == tail){
            delete head;
            head = tail = NULL;

        }
        else{
            Node *temp = tail;
            Node *prev =head;
            while(prev->next != tail){
                prev = prev->next;
            }
            tail = prev;
            delete temp;
            temp->next = NULL;
            tail->next = head;
            
        }
    }

    void print(){
        if(head==NULL) return ;
        cout<<head->data<<"<->";
        Node *temp = head ->next;

        while(temp != head){
            cout<<temp->data<<"<->";
            temp = temp->next;

        }
    }

        
        


    
};

int main(){
    Circular cll;
    cll.insert_front(12);
    cll.insert_front(10);
    cll.insert_back(9);
    cll.insert_back(97);
    cll.insert_back(96);
    
    cll.pop_back();
    cll.pop_back();
    cll.pop_back();
    cll.pop_back();
    cll.pop_back();
    cll.print();
 
}