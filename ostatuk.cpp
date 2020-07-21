#include <iostream>
using namespace std;
int main()
{
	int x,y,z,i=0;
	cout<<"Programata smqta delenie s ostatuk. Vuvedete dve celi chisla x,y suotvetno delimo i delitel. Programata izvejda ostatuka. Matematicheski vid na uravnenieto: x % y = z"<<endl<<endl;
	while(i=1) {
		cout<<"Vuvedete x: ";
		cin>>x;
		cout<<"Vuvedete y: ";
		cin>>y;
		if(y==0) {
			cout<<endl;
			cout<<"Molq vuvedete razlichno chislo ot 0!"<<endl;
			break;
		} else {
			z=x%y;
			if(z<0) {
				z=z*(-1);
			}
			cout<<"Ostatuk: "<<z<<endl<<endl;
		}	
	}
	system("PAUSE");
    return 0;
}
