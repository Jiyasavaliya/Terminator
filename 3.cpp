#include<iostream>
using namespace std;

main(){
	char lower='a'||'z';
	char upper='A'||'Z';
	
	try{
		if(upper='A'||'Z'){
			throw upper;
		}
		else{
			cout<<"the password is access";
		}
	}
	catch(char e){
		cout<<"a password cannot be validate if it doesn’t contains an uppercase letter";
	}
}