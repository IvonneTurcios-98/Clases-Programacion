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
void l(){ //declaracion de la funcion no retorna/no recibe parametros

	system ("cls");
}
/*int sumar (int a,int aux);
int pedirNumSumar();*/
int main ()
{	int n=1; //contador
	int vn; //su valor cambiara de 2 a 4
	int suma=0; //acumulador
	int aux; // intercambio de valores

do {
 	l();
cout << "cuantos numeros quiere sumar [2-4]: ";
cin>>vn;
/*vn<=pedirNumSumar;*/
}while (vn<2 || vn>4);
while(n<=vn) {
	l();
	cout << "Ingrese el numero "<<n<<endl;
	cin>>aux;
	suma=suma+aux;
	
	n++;
	
}
 l();
cout << "La suma es de: "<<suma<<endl;

system("pause");


void l(); { //implimentacion de la funcion l
	system ("cls");
	cout<<"-----------------"<<endl;
	cout<<"-----------------"<<endl;
}
 
 //ARREGLAR :3
 
/*int sumar (int a,int aux);
{	
	return a+aux;
}

int pedirNumSuma () {
	
	int vn;
	int aux;
	int suma;

}
}*/
}


