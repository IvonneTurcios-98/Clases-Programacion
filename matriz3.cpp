//Programa creado por:
// Carmen Ivonne Turcios Martínez 
//Numero de DUE:
//TM18012

//librerias obligatorias utilizadas
#include <iostream> //Esta libreria ha sido utilizada para operaciones de entrada/salida.
#include <math.h> //Esta libreria ha sido utilizada para operaciones matematicas
#include <windows.h> //Esta libreria ha sido utilizada para declarar las funciones de la biblioteca windows API.

// Desarrollo del cuerpo del programa
using namespace std;

int main (int argc, char *argv[]){

	int matriz[2][3] = {{1,2,3},{4,5,6}};
	
	for (int i=0; i<2; i++){
		
		for (int j=0; j<3; j++){
		
			cout<<matriz[i][j]<<"";
			
		}
		cout<<""<<endl;
	}
		

system("pause");
return EXIT_SUCCESS;

}

