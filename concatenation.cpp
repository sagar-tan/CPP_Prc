#include <iostream>  
using namespace std;  
int main ()  
{  	
	string str1, str2, result; // declare string variables  	
	int i;  	
	cout <<"enter first string: ";  	
	cin >> str1; // take string  	
	cout << "enter second string: ";  	
	cin >> str2; // take second string  
	// use for loop to enter the characters of the str1 into result string   	
	for ( i = 0; i < str1.size(); i++)  	
	{  		
		result = result + str1[i]; // add character of the str1 into result   		
	}   
	  // use for loop to enter the characters of the str2 into result string   
	  
	  for ( i = 0; i < str2.size(); i++){  	  	
	  	result = result + str2[i]; // add character of the str2 into result   	  	
	  }  	  
	  cout << "The concatenated string is " <<result;  	  
	  return 0;  
} 