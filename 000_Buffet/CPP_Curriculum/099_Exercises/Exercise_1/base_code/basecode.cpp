// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int x = 5;
	while(true){
		cout << x << endl;
		if(x == 25){
			break;
		}
		x = x + 1;
	}	
	
	int y = 15;
	while(true){
		cout << y << endl;
		if(y == 5){
			break;
		
		}
		y = y - 1;
	}
	
	for(int i = 5; i <= 25; i = i + 1){
		cout << i << endl;
	}
	
	for(int j = 15; j >= 5; j = j - 1){
		cout << j << endl;
	}
	
	for(int w = 123; w <= 200; w = w + 2){
		cout << w << endl;
	}
	for(int u = 1253; u >= 55; u = u - 7){
		cout << u << endl;
	}
}
