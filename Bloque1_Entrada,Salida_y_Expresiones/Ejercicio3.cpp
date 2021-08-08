//Ejercicio 3
/*Realice un programa que lea de la entrada estandar los siguientes datos
de una persona:

Edad
Sexo
Altura

Tras leer los datos, el programa debe mostrarlos en la salida estandar*/

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
