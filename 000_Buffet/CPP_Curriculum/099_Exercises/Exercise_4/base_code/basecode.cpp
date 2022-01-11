// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));

gotoxy(1,8);
cout << "____.,-=+=***==+=--,._______" << endl;
for(int i = 0; i < 5; i++){
	gotoxy(10,3+i);
	cout << "*" << endl;
	sleep(1);
	gotoxy (10,3+i);
	cout << " " << endl;
	}

}