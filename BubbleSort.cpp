#include<iostream>
using namespace std;
int main(){
	int n,i,arr[50],j,temp;
	cout <<"Enter the number of data element to be sorted : ";
	cin>>n;
	for(i=0;i<n;i++){
		cout << "Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
	for(i=0;i<(n-1);i++){
		for(j=0;j<(n-i-1);j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"Sorted Data";
	for(i=0;i<n;i++){
		cout<< " ";
		cout<<arr[i]<<"";
	}
	return 0;
}