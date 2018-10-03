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

	int mat [5][5]; //declaramos una matriz
	int mat2 [5][5];
	int mat3 [5][5];
	
	//ciclo, contador,termial, incremento 
	for (int fila = 0; fila<5; fila++){ //Declaramos un primer ciclo for
		for (int col=0; col<5; col++){
			mat [fila][col] = 0;	
			
			if(fila == 4 || col == 2){
			mat2 [fila][2] = 0;
			mat2 [4][col] = 0;			
			}

			else{
				
			mat2[fila][col] = 1;
			}
			
			
			mat3 [fila][col] = mat [fila][col] + mat2 [fila][col];
					
		}
		//Cerramso el primer ciclo for
	}

	for (int fila = 0; fila<5; fila++){ //Declaramso un segundo ciclo for
		for (int col=0; col<5; col++){
			cout<<mat3[fila][col]<<"\t";
		}		
		cout<<endl;
	} //Cerramos el segundo ciclo for
	
system("pause");
return EXIT_SUCCESS;

}
