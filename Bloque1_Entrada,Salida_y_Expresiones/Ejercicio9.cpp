//Ejercicio 9
/*Escriba un fragmento de programa que intercambie los valores de dos variables.*/

#include<iostream>
using namespace std;

int main()
{
	int valor1,valor2,intercambio;
	
	cout<<"Ingrese el primer valor: "; cin>>valor1;
	cout<<"Ingrese el segundo valor: "; cin>>valor2;
	//Aqui estamos reasignando valores de las variables.
	intercambio = valor1;
	valor1 = valor2;
	valor2 = intercambio;
	
	cout<<"Primer valor: "<<valor1<<endl;
	cout<<"Segundo valor: "<<valor2<<endl;
	
	return 0;
}
