//Programa realizado por: 
//Carmen Ivonne Turcios Martinez
//Numero de DUE: 
//TM18012

//programa para calcular el promedio de notas de un alumno

//librerias obligatorias utilizadas
#include <iostream> //Esta libreria ha sido utilizado para operaciones de entrada/salida.
#include <math.h>	//Esta libreria ha sido utilizado para procesos matematicos.
#include <iomanip>	//Esta libreria ha sido utilizado para manipular el formato de salida.
#include <windows.h> //Esta libreria ha sido utilizado para declarar las funciones de la biblioteca windows API.
				
//Desarrollo del cuerpo del programa
using namespace std;

int main (int argc, char *argv[])

{
//Declaracion de variables ha utilizar.
float notas [5]; //Declaramos una variable de tipo flotante para las notas
float suma=0; //Declaramos una variable de tipo flotante prara la respectiva suma de las notas
float promedio; //Declaramos una variable de tipo flotante para guardar el dato o el valor del promedio
				
//Declaramso un ciclo for.
for (int i=0;i<=4;i++)

do
{
				//Mostramos un mensaje que solicite la introduccion de las notas
	cout <<"Ingrese la nota: "<<i+1<<endl;
	
				//Adquiere un valor.
	cin>>notas[i];
	
				//Realizamos un acumulador para la sumatoria de notas.
	suma=suma+notas[i]; 
	
}	while (notas[i] < 0);
	
//Realizamos un proceso para dividir la sumatoria de las notas entre la cantidad de notas, para poder sacar y obtener el promedio de estas.
promedio=suma/5;

//Mostramos un mensaje previo al resultado de las notas y los promedios
cout<<"Sus notas son: "<<endl;
			
//Mostramos un mensaje que imprime o da a conocer en pantalla las notas una por una.
cout<<"N1: "<<notas[0]<<endl;
cout<<"N2: "<<notas[1]<<endl;
cout<<"N3: "<<notas[2]<<endl;
cout<<"N4: "<<notas[3]<<endl;
cout<<"N5: "<<notas[4]<<endl;
			
//Mostramos un mensaje que imprime o da a conocer en pantalla el promedio de las notas.
cout<<"El promedio es de: "<<promedio<<endl;

return 0;

}
