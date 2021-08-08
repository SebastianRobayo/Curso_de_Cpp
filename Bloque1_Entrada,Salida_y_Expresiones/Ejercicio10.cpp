//Ejercicio 10
/*Escriba un programa que lea la nota final de cuatro alumnos y calcule
la nota final media de los cuatro alumnos*/

#include<iostream>
using namespace std;

int main()
{
	float nota1,nota2,nota3,nota4,promedio;
	
	cout<<"Ingrese la nota del primer alumno: "; cin>>nota1;
	cout<<"Ingrese la nota del segundo alumno: "; cin>>nota2;
	cout<<"Ingrese la nota del tercer alumno: "; cin>>nota3;
	cout<<"Ingrese la nota del cuarto alumno: "; cin>>nota4;
	
	promedio = (nota1+nota2+nota3+nota4)/4;
	
	cout<<"El promedio de los alumnos es: "<<promedio;	
	
	return 0;
}
