// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));

int w;
char b;
int h;
int x;
int y;

cout << "input width" << endl;
cin >> w;
cout << "input border char" << endl;
cin >> b;
cout << "input height" << endl;
cin >> h;
cout << "input x coord" << endl;
cin >> x;
cout << "input y coord" << endl;
cin >> y;

	for(int z=0; z < h; z++){
		for(int p = 0; p < w; p++){
		gotoxy(x+p,y+z);
		cout << b;
		}
	}	
		for(int z=0; z < h-2; z++){
			for(int p = 0; p < w-2; p++){
			gotoxy(x+1+p,y+1+z);
			cout << " ";
		}
	}
	
		
	
}
