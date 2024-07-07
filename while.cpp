#include<iostream>
using namespace std;
int main(){
	int n,sum=0; 
	cout<< "enter a value: " <<endl;
	cin>>n;
	int i=1;
	while (i<=n){
		sum=sum+i;
		cout<<sum<<" ";
		i=i+1;
	}
}
