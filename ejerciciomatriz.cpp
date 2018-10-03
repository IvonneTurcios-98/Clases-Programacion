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

int main (){

	int matriz[4][5] = {{1,5,9,13,17},{2,6,10,14,18},{3,7,11,15,19},{4,8,12,16,20}}; //Declaracion de matriz
	
	for (int i=0; i<4; i++){ //Declaramos un ciclo for
		
		for (int j=0; j<5; j++){ //Abrimos un ciclo for dentro de otro ciclo
		
			cout<<matriz[i][j]<<" ";
			
		} 
		//Cerramos el ciclo for que esta dentro del primer ciclo for
		cout<<" "<<endl;
	} //Cerramos el ciclo for
		

system("pause");
return EXIT_SUCCESS;

}

