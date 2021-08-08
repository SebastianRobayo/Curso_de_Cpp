//Expresiones
/*Escriba la siguiente expresión (a/b)+1 como expresión en C++*/

#include <iostream>
using namespace std;
//metodo main.
int main()
{
	//inicializando variables.
	int a,b,resultado;
	//pidiendo al usuario que ingrese datos.
	cout<<"Ingrese el valor de a: "; cin>>a;
	cout<<"Ingrese el valor de b: "; cin>>b;
	//realizando la respectiva operacion
	resultado = (a/b)+1;
	//mostrando el resultado por pantalla.
	cout<<resultado;
	return 0;
}
