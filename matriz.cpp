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

int main (int argc, char *argv[]){
	int x[4][4] = {0}; //Declaramos el inicio de una matriz	
		for(int i=0; i<=3; i++) //Declaramos un primer ciclo for
	{
		x[i][1]=3;
		
		if(i==3){
				x[3][2]=3;
				x[3][3]=3;

			
		}
	//Cerramos el primer ciclo for
	}
	
	for(int i=0; i<=3; i++) //Declaramos un segundo ciclo for
	{
		for(int j=0; j<=3; j++) //Abrimos un ciclo for dentro de otro ciclo
		{
	
			cout<<x[i][j];
	
		}
		cout <<endl;
	}
	//Cerramos el segundo ciclo for

system("pause");
return 0;

}
