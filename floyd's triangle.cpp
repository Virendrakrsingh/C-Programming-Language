#include<iostream>
using namespace std;
int main(){
	int n,i,j,s=1;
	cin>>n;
	for(i=0;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<s<<" ";
			s++;
		}
		cout<<endl;
	}
	return 0;
}
