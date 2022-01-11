// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here




	gotoxy(1,17);
	
	cout << "                                                                " << endl;
	cout << "                                                                " << endl;
	cout << "                                 _.-+-.                         " << endl;
	cout << "         _/\\_                   /      \\                      " << endl;
	cout << "        \\    /                 #*****# (_)                     " << endl;
	cout << "         |/\\|                  (0  0 &   _.<***+.              " << endl;
	cout << "         /__\\1             cCC%|# c #)           |             " << endl;
	cout << "        /_ 0_\\             #=*C \\ w /   _\\    _./            " << endl;
	cout << "       /01   _0                 [_&&     c  )                   " << endl;
	cout << "      0_   0 1_\\               / *+=&,__]ccc                   " << endl;
	cout << "     /__0_1 ____\\              |_ )  (  |                      " << endl;
	cout << "          ||                   [ \\   ( _|                      " << endl;
	cout << "____.,-=+=***==+=--,._______.,-=+ *=,._/ ]_.,-=+++-.,.-=+**+-,._" << endl;
	
	for(int z=0; z < 3; z++){
	for(int p = 0; p < 4; p++){
		gotoxy(19+p,22+z);
		cout << "#";
	}
	}
		
	bool t = true;
	int x = 0;
	int y = 0;
	
	while(true){
	for(int i = 0; i < 12; i++){
		if(t){

		gotoxy(4,6+y);
		cout << "*" << endl;
		sleep(0.7);		
		gotoxy(4,6+y);
		cout << " " << endl;
		y++;
		
		}
		else{
	
		gotoxy(10,3+x);
		cout << "*" << endl;
		sleep(0.6);
		gotoxy(10,3+x);
		cout << " " << endl;
		x++;
		t = false;

			t = true;
		}
	
y=0;
x=0;		
}

}
}
