//Ejercicio 12
/*Escriba un programa que lea de la entrada estandar los dos catetos de
un triangulo rectangunlo y escriba en la salida su hipotenusa*/

#include<iostream>
#include<math.h>//Esta libreria nos sirve para usar funciones matematicas, si se piensan usar hay que importarla.
using namespace std;

int main()
{
	float catetoo,catetoa,hipotenusa;
	
	cout<<"Ingrese el valor del cateto opuesto: "; cin>>catetoo;
	cout<<"Ingrese el valor del cateto adyacente: "; cin>>catetoa;
	
	/*
	sqrt = Esta funcion sirve para usar raices.
	pow = Esta funcion sirve para elevar numeros a cualquier exponente.
	*/	
	hipotenusa = sqrt(pow(catetoo,2)+pow(catetoa,2));
	
	cout.precision(2);//Esta funcion es usada para que el resultado unicamente salda con n numeros decimales en este caso decidi tomar solo dos.
	cout<<"El resultado de la hipotenusa es: "<<hipotenusa;
	
	return 0;
}
