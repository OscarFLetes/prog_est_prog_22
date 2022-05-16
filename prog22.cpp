/* Autor: Oscar Eduardo FLetes Ixta, Realizado 03/03/2022
	Hacer un prgrama para un simulador de ahorro, para que le muestre al usuario cuanto 
	dienero obtendra si ahorra una cantidad en numero de meses en su sucursal, el banco
	da actualmente 4% mensual
	Hacerlo con una funcion que reciba com parametros, la cantidad de dinero a ahorrar 
	y a cuantos meses, la funcion retornara el total de dinero ahorrado mas intereses 
	
	Programa en lenguaje c que muestra el uso del scanf, operaciones aritmeticas, funciones y prototipos de funciones, uso del ciclo for.
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia : Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		-Declaracion de variables 
		-Variables del tipo int, float
		-Operaciones aritmeticas 
		-Funciones
		-Prototipos de funciones
		-Uso del ciclo for
		-printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables enteras y flotantes, como declararlas, usar funciones y 
	prototipos de funciones, llamar a las funciones con parametros, usar el ciclo for, 
	realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa  pide como entrada 2 variables de tipo float y int (cantidad a ahorrar, meses),
	El programa es un simulador de ahorro, para que le muestre al usuario cuanto dienero obtendra 
	si ahorra una cantidad en numero de meses en su sucursal, el banco da actualmente 4% mensual
*/

#include<stdio.h>//Cuerpo para lenguaje c
//prototipos
float calcularAhorro(float capital, int meses);

//Main
int main(){
	//Variables
	float dinero,ahorro;//variable con decimal
	int periodo;//variable numero entero
	//Entrada
	printf("introduce la cantidad a ahorrar: $");//imrpime mensaje
	scanf("%f",&dinero);//lee el numero insertado por el teclado
	printf("Indica a cuantos meses invertiras tu dinero: ");//imrpime mensaje
	scanf("%d",&periodo);//lee el numero insertado por el teclado
	//Proceso
	ahorro=calcularAhorro(dinero,periodo);//Parametros para la funcion
	//Salida
	printf("Al final del periodo obtendras: $%.2f",ahorro);//imrpime la salida del ahorro
	return 0;
}


//Funcion
//Proceso
float calcularAhorro(float capital, int meses){//float(Parametros para la funcion)
	float total=capital;//variable con decimal
	//ciclo for
	for(int i=0;i<meses;i++){//Lo usamos para saber cuantos meses invertira que itroduce el usuario
		total=total*0.04+total;//ecuacion para calcualr el total	
	}
	return total;
}

