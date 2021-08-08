//Ejercicio 1
//Calculos aritmeticos, realizaremos una suma, resta, multiplicación y división

#include "iostream"
using namespace std;

int main()
{
	int num1,num2;//Aqui se estan inicializando unas variables llamadas num1 y num2 de tipo entero
	int sum,res,mult,divi;
	
	cout<<"Ingrese su primer numero: "<<endl;//Aqui usamos un comando nuevo llamado (endl) el tiene la misma funcionalidad que (\n) dar un salto de linea.
	cin>>num1;//Aqui usamos un comando nuevo llamado (cin) este lo que hace es que nos deja ingresar datos por teclado, respescto a los signos de mayor yo los tomo como el fujo de datos.
	cout<<"Ingrese su segundo numero: "<<endl;
	cin>>num2;
	/*
	(=) = Operador de asignacion.
	(+) = Operador de suma.
	(-) = Operador de resta.
	(*) = Operador de multiplicacion.
	(/) = Operador de division
	*/
	
	//Se estan realizando las respectivas operaciones.
	sum = num1+num2;
	res = num1-num2;
	mult = num1*num2;
	divi = num1/num2;
	
	//Aqui se muestran los resultados por pantalla.
	cout<<"Suma: "<<sum<<endl;
	cout<<"Resta: "<<res<<endl;
	cout<<"Multiplicacion: "<<mult<<endl;
	cout<<"Division: "<<divi<<endl;
	
	return 0;
}
