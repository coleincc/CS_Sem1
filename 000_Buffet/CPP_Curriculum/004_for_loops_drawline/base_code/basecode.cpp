// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char sym;
	cout << "Please enter a symbol below" << endl;
	cin >> sym;
	char length;
	cout << "How long will your line be?" << endl;
	cin >> length;
	char hv = 'a';
	cout << "Vertical or horizontal" << endl;
	cin >> hv;
	
	if (hv == 'v')
	{
		int i;
		for(i = 0; i < length; i++)
		{
			cout<<sym<<endl;
		}
	}
	if (hv == 'h')
	{
		int i;
		for(i=0; i < length; i++)
	{
	cout<<sym;
    }
	}
}
