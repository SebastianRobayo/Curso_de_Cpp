//Ejercicio 13
/*Realice un programa que calcule el valor que toma la siguiente
funci�n para valores dados de x e y.*/

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float x,y,resultado;
	
	cout<<"Ingrese el valor de x: "; cin>>x;
	cout<<"Ingrese el valor de y: "; cin>>y;
	
	resultado = sqrt((x)/(pow(y,2)-1));
	
	cout.precision(2);
	cout<<"El resultado es: "<<resultado;
	
	return 0;
}
