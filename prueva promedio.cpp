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

{				//variables utilizadas.
float notas [5];
float suma=0;
float promedio;

				//Ciclo for.
for (int i=0;i<=4;i++)

				//Inicio de la condicion do while.
do
{				//Comando 
	system("cls");
	
				//Peticion de las notas.
	cout <<"Ingrese la nota: "<<i+1<<endl;
	
				//Adquiere un valor.
	cin>>notas[i];
	
				//acumular la sumatoria de notas.
	suma=suma+notas[i]; 
	
}	while (notas[i] < 0 || notas[i] > 10); //Fin de la condicion do while

				//Proceso de dividir la sumatoria de las notas con la cantidad, para sacar el promedio.
promedio=suma/5;
				//Imprime 
cout<<"Sus notas son: "<<endl;
				//Ciclo for para imprimir notas.
for (int i=0;i<=4;i++)
{				//Imprime las notas una por una.
 cout<<notas[i]<<endl;
}
				//Imprime el promedio.
cout<<"El promedio es de: "<<promedio<<endl;
				//Fin del programa
return 0;

}
