#include <bits/stdc++.h>

using namespace std;

class students{

   public :
  double fees = 11400;

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
  
  students( students &obj){ 
    this->name = obj.name;
    this->branch = obj.branch;
    this->uid = obj.uid;
    this->fees = obj.fees;
    
    

  }
};

class Teachers{
  public :

  string brancht;

  Teachers(string brancht){
    this->brancht = brancht;
  }
};

class Gson : public students,public Teachers{
public:
  int rollno ;

  Gson(string name, string branch, int uid, double fees, int rollno, string brancht)
    : students(name, branch, uid, fees), Teachers(brancht), rollno(rollno) {
   
  }

  void getinfo(){
    cout<<"name :"<<name<<" branch:"<<branch<<" uid:"<<uid<<" fees: "<<fees<<" roll no :"<<rollno<<" branch t:"<<brancht<<endl;
  }
    
};



int main(){
  students s1("sidak","AI",1152,32500);
  students s2("abc","AI",1152,32500);
  students s3(s2);
  s1.cfees(30000);

  Gson g1("sidak","AI",1152,32500,23,"cse");
  g1.getinfo();

  // cout<<"name :"<<s1.name<<" branch:"<<s1.branch<<" uid:"<<s1.uid<<" fees: "<<s1.fees<<endl;
  // cout<<"name :"<<s2.name<<" branch:"<<s2.branch<<" uid:"<<s2.uid<<" fees: "<<s2.fees<<endl;
  // cout<<"name :"<<s3.name<<" branch:"<<s3.branch<<" uid:"<<s3.uid<<" fees: "<<s3.fees<<endl;
  return 0;

}