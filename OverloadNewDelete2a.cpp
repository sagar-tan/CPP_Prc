#include<iostream>
#include<string>
using namespace std;
class Student{
private:
  string namel
  int id;
public:
Student(){
  name="";
  id=0;
}
Student(string name, int id){
  this ->name=name;
  this ->id = id;
}
void*operator new(size_t size){
  void* p=::operator new(size);
  return p;
}
void operator delete(void*p){
  ::operator delete(p);
}
void display(){
  cout<< "The student name : "<<name<<endl;
  cout<< "The student id : "<<id<<endl;
}
};
