// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	char sym;
	cout << "Please enter a symbol below" << endl;
	cin >> sym;
	char length;
	cout << "How long will your line be?" << endl;
	cin >> length;
	char hvd = 'a';
	cout << "Vertical, horizontal or diagonal?" << endl;
	cin >> hvd;
	if(hvd=='h'){
	for(int i = 0; i = length; i++){
	gotoxy(0+i,0);
	cout << sym;
	    }
	}
    if(hvd=='v'){
	for(int i = 0; i = length; i++){
	gotoxy(0,0+i);
	cout << sym;
	    }
	}
	if(hvd=='d'){
	for(int i = 0; i = length; i++){
	gotoxy(0+i,0+i);
	cout << sym;
	    }
	}
	cout<<sym;
    
}
