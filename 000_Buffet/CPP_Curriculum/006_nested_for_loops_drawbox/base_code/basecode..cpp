// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
	int x = 0;
	int y = 0;
	int l = 0;
	char c = x;
cout << "please enter an x coordinate" << endl;
cin >> x;
cout << "now enter y coordinate" << endl;
cin >> y;
cout << "now enter length" << endl;
cin >> l;
cout << "also enter a charater" << endl;
cin >> c;

	for(int p = 0; p < l; p++){
			gotoxy(x,y);
			for(int i = 0; i < l; i++)
			cout << c;
	}
}
