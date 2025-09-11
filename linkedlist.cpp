#include <iostream>
#include <list>

using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int data)
  {
    this->data = data;
    next = NULL;
  }
};

class List
{

  Node *head;
  Node *tail;

public:
  List()
  {
    head = tail = NULL;
  }

  void push_front(int val)
  {
    Node *newnode = new Node(val);
    if (head == NULL)
    {
      head = tail = newnode;
    }
    else
    {
      newnode->next = head;
      head = newnode;
    }
  }
  void push_back(int val)
  {
    Node *newnode = new Node(val);
    if (head == NULL)
    {
      head = tail = newnode;
    }
    else
    {
      newnode->next = NULL;
      tail->next = newnode;
      tail = newnode;
    }
  }

  void pop_front()
  {
    Node *temp = head;
    if (head == NULL)
    {
      return;
    }
    else
    {
      head = temp->next;
      temp->next = NULL;
      delete temp;
    }
  }

  void pop_back()
  {

    if (head == NULL)
    {
      return;
    }
    else if (head == tail)
    {

      delete head;
      head = tail = NULL;
      return;
    }

    Node *temp = head;
    while (temp->next != tail)
    {

      temp = temp->next;
    }

    delete tail;
    tail = temp;
    tail->next = NULL;
  }




  void insert(int val,int pos){
    
    if(pos < 0){
      return ;
    }
    else if(pos == 0){
      push_front(val);
      return;
    }
    else{
      
      Node *temp = head;
      Node *newNode = new Node(val);
    for(int i =0;i<pos -1;i++){
      if(temp == NULL){
        return;
      }
      temp = temp->next;
    }

    

    newNode->next = temp->next;
    temp->next = newNode;
  }
  }

  int search(int val){
    Node *temp = head;
    int idx =0;
    while(temp != NULL){
      if(temp-> data == val){
        return idx;
      }
      temp = temp->next;
      idx++;
    }

    return -1;
  }
  void print()
  {
    Node *temp = head;
    while (temp != NULL)
    {
      cout << temp->data << endl;
      temp = temp->next;
    }
  }
};

int main()
{

  List ll;
  ll.push_front(44);
  ll.push_front(40);
  ll.push_front(41);
  ll.push_front(42);
  ll.push_back(23);
  ll.pop_front();
  ll.pop_back();
  ll.insert(2,1);
  cout<<"the idx :"<<ll.search(2)<<endl;

  ll.print();
}
