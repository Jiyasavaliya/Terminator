#include<iostream>
using namespace std;
int main(){
	
	int a=18;
	int b=5;
	char arorr[40]="a person can be able to vote";
	
	try{
		if(b>a){
			throw arorr;
		}
		else{
			cout<<"a person cannot be able to vote";
		}
		
	}
	catch(char n[]){
		cout<<n;
	}
	
	catch(...){
		cout<<"default";
	}
}
