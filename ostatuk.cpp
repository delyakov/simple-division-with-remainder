#include <iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"Programata smqta delenie s ostatuk. Vuvedete dve celi chisla x,y suotvetno delimo-delitel. Programata izvejda ostatuka. Matematicheski vid na uravnenieto: x % y = z"<<endl<<endl;
	while (1) {
		cout<<"Vuvedete x: ";
		cin>>x;
		cout<<"Vuvedete y: ";
		cin>>y;
		if (y==0) {
			cout<<"Molq vuvedete razlichno chislo ot 0!"<<endl<<endl;
			continue;
		} else {
			z=x%y;
			if (z<0) {
				z=z*(-1);
			}
			cout<<"Ostatuk: "<<z<<endl<<endl;
		}	
	}
	system("PAUSE");
	return 0;
}
