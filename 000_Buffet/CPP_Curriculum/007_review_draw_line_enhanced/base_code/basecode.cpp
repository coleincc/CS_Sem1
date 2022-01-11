// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
	int l = 0;
	cout << "please enter length" << endl;
	cin >> l;
	char sym;
	cout << "please enter symbol" << endl;
	cin >> sym;
	int x = 0;
	cout << "please enter x coordinate" << endl;
	cin >> x;
	int y = 0;
	cout << "please enter y coordinate" << endl;
	cin >> y;
		
	for(int z = 0; z < l; z++){
		gotoxy(x+z,y);
		cout << sym;
	}
}
