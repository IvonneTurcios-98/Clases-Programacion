//Programa realizado por: 
//Carmen Ivonne Turcios Martinez
//Numero de DUE: 
//TM18012

//programa para calcular la venta de cada ventendor realizada en el mes 
//y mostrar el salario

//librerias obligatorias utilizadas
#include <iostream> //Esta libreria ha sido utilizado para operaciones de entrada/salida.
#include <math.h>	//Esta libreria ha sido utilizado para procesos matematicos.
#include <iomanip>	//Esta libreria ha sido utilizado para manipular el formato de salida.
#include <windows.h> //Esta libreria ha sido utilizado para declarar las funciones de la biblioteca windows API.
				
//Desarrollo del cuerpo del programa
using namespace std;

//Declaracion de las variables ha utilizar
int main ()
{
				/*comando para asignar color de fondo y color a las letras,
				  el 80 significa 8="color de fondo" 1="color de letras"*/
system("color 81");

//Declaramos una variable de tipo entero para la venta
int venta;

//Declaramos una variable de tipo flotante para la paga
float salario;

	//Mostramos un mensaje con un saludo
	cout<<"Hola bienvenido/a."<<endl;

//Declaramos un ciclo para verificar si es menor que 0
do
{

//Mostramos un mensaje que solicite la introduccion de la cantidad de ventas realizadas.
cout<<"Escriba la cantidad de ventas realizadas en el mes."<<endl;

//Debemos de asignar valor a la variable de la venta
cin>> venta;

//Cerramos el ciclo
} while(venta < 0);

				//Mostramos un mensaje que solicite la introduccion de cuantos decimales quisiera imprimir en pantalla
cout << setprecision(3)<<endl;
cout << fixed<<endl;

				//Comprobamos la primera condicion para saber si los datos ingresados esatn dentro de los parametros
if (venta >= 0 && venta <= 500000){
	
				//Debemos asignar valor	
	salario = 80.000; 
}
				//Comprobamos la segunda condicion para saber si los datos ingresados esatn dentro de los parametros
else if (venta >= 500001  && venta  <= 1000000){
	
				//Debemos asignar valor
	salario = 160.000;
}
				//Comprobamos la tercera condicion para saber si los datos ingresados esatn dentro de los parametros
else if (venta >= 1000001  && venta <= 1500000){
	
				//Debemos asignar valor
	salario = 320.000;
}
				//Comprobamos la cuarta condicion para saber si los datos ingresados esatn dentro de los parametros
else if (venta >= 1500001  && venta <= 2500000){
	
				//Debemos asignar valor
	salario = 450.000;
}
				//Comprobamos la quinta condicion para saber si los datos ingresados esatn dentro de los parametros
else if (venta >= 2500001  && venta <= 4000000){
	
				//Debemos asignar valor
	salario = 500.000;
}
				//Comprobamos la sexta condicion para saber si los datos ingresados esatn dentro de los parametros
else if (venta > 4000000){
	
				//debemos asignar valor, usando la operacion del 20 %
	salario = (venta * 0.20);
	
}
				//Comprobamos la septima condicion para saber si los datos ingresados esatn dentro de los parametros
else {
	cout<<"No tendra pago"<<endl;
}
				//Mostramos un mensaje que imprima la paga o el pago que le corresponde
	cout<<"Su paga por la venta es de: "<<salario<<endl;
	
				//tipo de sonido
	Beep(523,300); 
	Beep(659,300); 
	Beep(587,300); 
	Beep(698,300); 
	Beep(784,300); 
	Beep(523,300); 
	
				//comando para detener el programa
system("pause");
return EXIT_SUCCESS; //comando para salir del programa
}
