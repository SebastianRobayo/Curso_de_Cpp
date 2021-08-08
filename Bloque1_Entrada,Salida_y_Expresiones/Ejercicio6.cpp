//Ejercicio 6
/*Escribe la siguiente expresión matemática
(a+b)/(c+d) como expresión en C++*/

#include<iostream>
using namespace std;

int main()
{
	//Inicializando variables sin pedir datos al usuario.
	float a=1,b=3,c=5,d=5,resultado;
	//realizando la respectiva operacion.
	resultado = (a+b)/(c+d);
	//mostrando el resultado en pantalla.
	cout<<resultado;	
		
	return 0;
}
