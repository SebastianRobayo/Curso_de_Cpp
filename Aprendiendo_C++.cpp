/*Hola nuevamente, empazamos por lo mÃ¡s basico del lenguaje C++ explicando esta estructura la cual es lo primero que VS nos muestra
al momento de abrir el proyecto.*/

#include <iostream>//Empezamos importando la libreria estandar de c++ la cual es (iostream) y la cual se importa con el include tal cual se muestra en el programa.

int main(/*Aqui dentro van los parametros*/)//Aqui se encuentra quiza el metodo mas importante del programa el cual es el metodo main, el es el corazon del programa porque en el se ejecutara el programa.
{//llaves de apartura
    std::cout << "Hello World!\n";//Aqui realizaremos una impresion por pantalla con la instruacion (std::coutt<<"") y escribiendo cualquier cosa detro de las comillas dobles.
}//llaves de cierre, todo metodo las debe tener.
//Ahora veamos una forma diferente y para mi mÃ¡s sencilla de realizar este mismo programa.

/*
#include <iostream>
using namespace std; -> Esta parte de codigo es agregada para evitar escribir std::cout, si no solo cout es mas practico.

int main()
{
    cout<<"Hello World\n"; -> El slahs invertido y la n (\n) son usados para realizar saltos de linea.

    return 0; //Buenas practicas de programacion.
}
    ////////Soñando programar el mundo////////
*/
