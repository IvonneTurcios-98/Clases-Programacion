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

void pedirNumeros(); /*sin importar donde esta la funcion 
					no dara problema de compilacion*/

//int main (int argc, char *argv[])
int main (){
	
pedirNumeros();
system ("pause"); 
return 0;

}

float sumar (float &x, float &y)
{
	cout << "x = "<< &x << endl;
	cout << "y = "<< &y << endl;
	
	return x+y;
}

void pedirNumeros()
{	float x;
	float y;
	float res;
	
	cout<<"Ingrese un numero"<<endl;
	cin >> x;
	cout<<"Ingrese un numero"<<endl;
	cin >> y;
	res=sumar(x,y);
	
	cout << "x = "<< &x << endl;
	cout << "y = "<< &y << endl;
	
	cout<<"El resultado es: "<<res<<endl;
	
}

