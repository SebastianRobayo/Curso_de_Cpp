//Ejercicio 4
/*Ejecute el programa del ejercicio anterior con entradas erroneas y 
observe los resultados. Por ejemplo, introduzca un dato de tipo string
cuando se espera un dato de tipo entero*/

#include <iostream>
using namespace std;

int main()
{
	int edad;
	string sexo;
	float altura;
	
	cout<<"Ingrese su edad: "; cin>>edad;
	cout<<"Ingrese su sexo: "; cin>>sexo;
	cout<<"Ingrese su altura: "; cin>>altura;
	
	cout<<edad<<endl;
	cout<<sexo<<endl;
	cout<<altura<<endl;
	
	return 0;
}

