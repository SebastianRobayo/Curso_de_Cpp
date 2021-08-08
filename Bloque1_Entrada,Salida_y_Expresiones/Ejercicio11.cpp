//Ejercicio 11
/*La calificación final de un estudiante es el promedio de tres notas:
--La nota de prácticas que cuenta un 30% del total.
--La nota teórica que cuenta un 60%.
--La nota de participación que cuenta el 10% restante.

Escriba un programa que lea las tres notas del alumno y escriba su nota final*/

#include<iostream>
using namespace std;

int main()
{
	//Inicializando variables.
	float nota1,nota2,nota3,notaFinal;
	//Pidiendole datos al usuario.
	cout<<"Ingrese la nota 1: "; cin>>nota1;
	cout<<"Ingrese la nota 2: "; cin>>nota2;
	cout<<"Ingrese la nota 3: "; cin>>nota3;
	//Realizando la correspondiente operacion.
	notaFinal = (nota1*0.30)+(nota2*0.60)+(nota3*0.10)/3;	
	//Mostrando el resultado por pantalla.
	cout<<"La nota final del estudiante es: "<<notaFinal;
	
	return 0;
}
