//Programa realizado por: 
//Carmen Ivonne Turcios Martinez
//Numero de DUE: 
//TM18012

//programa para calcular el promedio de notas de un alumno

//librerias obligatorias utilizadas
#include <iostream> //Esta libreria ha sido utilizado para operaciones de entrada/salida.
#include <math.h>	//Esta libreria ha sido utilizado para procesos matematicos.
#include <iomanip>	//Esta libreria ha sido utilizado para manipular el formato de entrada y salida.
#include <windows.h> //Esta libreria ha sido utilizado para declarar las funciones de la biblioteca windows API.
				
//Desarrollo del cuerpo del programa
using namespace std;

int main (int argc, char *argv[])
{

for (int i=1;i<=10;i++)
{				
cout<<endl<<("LA TABLA DEL ")<<i<<endl;

for (int j=1;j<=10;j++)

cout<<i<<"x"<<j<<"="<<i*j<<endl;

 }

system("pause");
return EXIT_SUCCESS;

}

