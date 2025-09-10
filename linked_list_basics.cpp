#include<iostream>
using namespace std;

class Node {
  public :

  int data;
  Node *next;

  Node(int data){
    this->data = data;
    this->next = NULL;  
    
  }
};

int main(){
  Node * head;
  head = NULL;

  int arr[] = {2,3,4,7,9};
  int n = sizeof(arr)/sizeof(arr[0]);

  for(int i =0 ;i<n;i++){
    if( head == NULL){
      head = new Node(arr[i]);
    }
    else{
      Node *temp;
      temp = new Node(arr[i]);
      temp ->next = head;
      head = temp;
    }
  }


  Node *temp = head;
  while(temp){
    cout<<temp->data<<endl;
    temp = temp->next;
  }

}