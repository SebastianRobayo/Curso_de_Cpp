/*Escribir un programa que le pida al usuario ingresar el precio de un articulo y que cuando lo muestre por pantalla
sea con el iva incluido.*/

#include "iostream"
using namespace std;


int main()
{
	//inicializando variables de tipo flotante.
	float producto,operacion,total;
	const float iva=0.19;//Aqui estamos usando algo nuevo la cual es la palabra (const) el cual significa que es una constante eso quiere dicir que no cambiara en ningun momento.
	//pidiendo al usuario que ingrese los datos.
	cout<<"Ingrese el valor del producto: "; cin>>producto;
	//realiza las respectivas operaciones.
	operacion = producto*iva;
	total = producto+operacion;
	//mostrando el resultado final.
	cout<<"El valor con iva es de: "<<total<<endl;	
	
	return 0;
}

