#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	int i;
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n;i++)
		cout<<"mark ["<<i<<"] = "<<arr[i]<<endl;
	return 0;
	
}
