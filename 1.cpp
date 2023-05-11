#include<iostream>
using namespace std;
int main(){
	
	int a=10;
	int b=0;
	int ans;
	char arorr[40]="number cannot be divide by zero";
	try{
		
		if(b==0){
			throw arorr;
		}
		else{
			ans=a/b;
			cout<<ans;
		}
	}
	catch(char n[]){
		
		cout<<n;
	}
	catch(...){
		cout<<"default";
	}
}

