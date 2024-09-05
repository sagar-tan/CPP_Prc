#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
  char stroing[100], copyString[100]
  int i = 0;
  cout << "Enter a String : ";
  gets(stroing);
  while(stroing[i]!='\0'){
    copyString[i] = stroing[i];
    i++;
  }
  strCopy[i] = '\0';
  cout<<"Target String: "<< copyString;
  cout<<endl;
  return 0;
}
