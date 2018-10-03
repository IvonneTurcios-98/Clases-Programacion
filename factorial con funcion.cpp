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

int factorial (int n)
{

if (n<0){
	return 0;
}
else if (n>1)

	return n*factorial (n-1);
return 1;
}

int main (int argc, char *argv[])
{
	cout<<factorial (3)<<endl;
	system("pause");
}

