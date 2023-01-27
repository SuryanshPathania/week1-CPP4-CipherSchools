#include<bits/stdc++.h>

using namespace std;

class student{

  string passcode;
  friend class bestfriend;

  protected:

  int age;
  // int,char,string,float..
  public :
  string name;
  int id;

  student(){

  }

  student(int id,string name,string passcode,int age){
    this->name = name;
    this->id = id;
    this->passcode = passcode;
    this->age = age;
  }
  void into(){
    cout<<"My name is "<<name<<" , my id is "<<id<<"passcord is "<<passcode<<endl;
  }