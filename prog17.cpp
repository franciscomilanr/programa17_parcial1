/* 
Autor: Franciscomilan
Realizado: 24/02/2022
Escuela: Universidad uvm
Materia: Programacion estructurada
Profesor: Armando Cruz
Ciclo: 01/2022
Descripcion: Programa 17 en C que pide la cantidad de numeros a leer y despues que introducen todos
los numeros se calcula Cuantos numeros pares introdujo, El numero mayor, El numero menor , Validar 
que los numeros sean positivos para la materia programacion estructurada
*/

//Librerias
#include<stdio.h>
//Principal
int main() {
	//Variables
	int numeros, dato, pares=0, mayor, menor;
	//Entrada de datos
	printf(" Introduce la cantidad de numeros a leer: ");
	scanf("%d",&numeros);
	//Ciclo for
	for(int i=1; i<=numeros; i++) {
		do { 
		printf(" Introduce el numero %d : ", i); 
		scanf("%d",&dato);
			if (dato<0) {
				printf(" Numero negativo, intenta nuevamente \n");
			}
		} while(dato<=0); 
		//Validar si es par
		if(dato%2==0) {    
			pares++;
		}
		if (i==1) {  
			menor=dato;
			mayor=dato;
		}
		else {
		if (dato>mayor) {
			mayor=dato;
		}
		if (dato<menor) {
			menor=dato;
			}
		}
	}
	// Salida
	printf(" La cantidad de numeros pares es: %d\n", pares);
	printf(" El numero mayor es: %d\n", mayor);
	printf(" El numero menor es: %d",menor);
	//Retorno
	return 0;
}
