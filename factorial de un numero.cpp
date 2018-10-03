//Programa realizado por:
//Carmen Ivonne Turcios Martínez 
//Numero de DUE:
//TM18012


//librerias obligatorias utilizadas
#include <iostream> //Esta libreria ha sido utilizada para operaciones de entrada/salida.
#include <math.h> //Esta libreria ha sido utilizada para operaciones matematicas
#include <windows.h> //Esta libreria ha sido utilizada para declarar las funciones de la biblioteca windows API.

//Desarrollo del cuerpo del programa
using namespace std;

int main (int argc, char *argv[])
{

//Declaracion de variables ha utilizar
int x; //Declaramos una variable de tipo entero para almacenar el dato o el numero que se ingrese 

int fact=1; //Declaramos una variable de tipo entero para el factorial
  
do{ //Declaramos un ciclo para verificar si el numero entra o esta detro de los limites previstos

//Mostramso un mensaje para que el usuario ingrese el numero del cual desea a saber su factorial
cout<<"Escriba el numero que quiere sacar el factorial: "<<endl;
cin>>x;

}while (x < 0);

for (int i=1;i<=x;i++) //Declaramos un ciclo for
{
	
	fact=fact*i;
	
} //Cerramos ciclo for

//Mostramos un mensaje en pantalla que imprima el valor del factorial del numero que fue ingresado
cout <<"El resultado es: "<<fact<<endl;

system("pause");
return EXIT_SUCCESS;

}

