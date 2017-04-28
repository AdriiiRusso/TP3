#include <iostream>

using namespace std;

int main ()
{
	int flag;
	char palabra [40];
	
	cout<<"Introduzca la frase a repetir: "<<endl;
	cin.getline (palabra, 40);
	cout << endl;
	
	cout << "Repetición:" << endl;
	
	repeticion:
	if (flag < 200)
	{
		cout << palabra << endl;
		flag ++;
	}
	else
	{
		goto stop;
	}
	
	goto repeticion;
	
	stop:
	system ("PAUSE");
}
