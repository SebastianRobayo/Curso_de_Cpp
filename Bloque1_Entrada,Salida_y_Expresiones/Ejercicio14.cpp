//Ejercicio 14
/*Escriba un programa que calcule las soluciones de una ecuación de
segundo grado, teniendo en cuenta que se deberan mostrar los dos resultados y aprate
el usuario debe dar los valores de a,b y c.*/

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	//Inicializando varibles.
	float a,b,c,resultado1,resultado2;
	//Pidiendo al usuario ingresar datos.
	cout<<"Ingrese el valor de a: "; cin>>a;
	cout<<"Ingrese el valor de b: "; cin>>b;
	cout<<"Ingrese el valor de c: "; cin>>c;
	//Realizando las respectivas operaciones.
	resultado1 = -b+sqrt(pow(b,2)-4*a*c/(2*a));
	resultado2 = -b-sqrt(pow(b,2)-4*a*c/(2*a));
	//Mostando el resultado por pantalla.
	cout.precision(2);
	cout<<"\nEl resultado positivo es: "<<resultado1;
	cout<<"\nEl resultado negativo es: "<<resultado2;
	
	return 0;
}



