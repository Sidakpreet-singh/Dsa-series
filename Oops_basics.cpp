#include <bits/stdc++.h>

using namespace std;

class students{

   public :
  double fees = 11400;


  public :
  // access modifier

  string name ;
  string branch;
  int uid;
  


  // Encapsulation-->

  void cfees(double newf){
    fees = newf;
  }


  // constructor ----> parameterized && non-parameterized

  students(string name,string branch,int uid,double fees){ 
    this->name = name;
    this->branch = branch;
    this->uid = uid;
    this->fees = fees;
    
    

  }
};

int main(){
  students s1("sidak","AI",1152,32500);
  students s2("abc","AI",1152,32500);
  students s3("xyz","AI",1152,32500);
  s1.cfees(30000);

  cout<<"name :"<<s1.name<<" branch:"<<s1.branch<<" uid:"<<s1.uid<<" fees: "<<s1.fees<<endl;
  cout<<"name :"<<s2.name<<" branch:"<<s2.branch<<" uid:"<<s2.uid<<" fees: "<<s2.fees<<endl;
  cout<<"name :"<<s3.name<<" branch:"<<s3.branch<<" uid:"<<s3.uid<<" fees: "<<s3.fees<<endl;
  return 0;

}