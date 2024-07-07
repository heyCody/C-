#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	//cout<< "value of n: " << n <<endl;
	
	if(n>0){
		cout<<"positive" <<endl;

	}
	else{
		cout<< "negative" <<endl;
	}
	int a,b;
	cin>> a >> b;
	if(a>b){
		cout<< a <<endl;

	}
	else if(b>a){
		cout<< b <<endl;
	}
}
