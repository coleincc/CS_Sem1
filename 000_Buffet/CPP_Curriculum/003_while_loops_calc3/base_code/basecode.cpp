// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int num1 = 0;
	int num2 = 0;
	char m = '*';
	char mi = '-';
	char p = '+';
	char d = '/';
	char c = 'a';
	char quit = 'a';
	while(true){
		if(quit=='q'){
			break;
		}
	cout<<"please enter a number"<<endl;
	cin>>num1;
	cout<<"please enter a character"<<endl;
	cin>>c;
	cout<<"now enter another number"<<endl;
	cin>>num2;
	if(c==m){
	cout<<num1 * num2<<endl;
	}
	if(c==mi){
	cout<<num1 - num2<<endl;
	}
	if(c==p){
	cout<<num1 + num2<<endl;
	}
	if(c==d){
	cout<<num1 / num2<<endl;
	}
	cin>>quit;
	
	}
}