//Ejercicio 7 
/*Escribe la siguiente expresión (a+(b/c))/(d+(e/f))
como expesión en C++*/

#include<iostream>
using namespace std;

int main()
{
	//inicializando variables sin pedir datos al usuario.
	float a=4,b=2,c=1,d=6,e=3,f=9,resultado;
	//realizando la operacion.
	resultado = (a+(b/c))/(d+(e/f));
	//mostrando el resultado por pantalla.
	cout<<resultado;
	
	return 0;
}
