/*
Programador:
- Enrique Perez.

GitHub:
-@EnriquePerezP

Descripcion:
- Este programa calcula el promedio de una serie de calificaciones ingresadas por el usuario.
- El usuario ingresa las calificaciones una a una, y para finalizar debe ingresar -1.
- El programa realiza la suma de las calificaciones y cuenta cu�ntas calificaciones se ingresaron.
- Al final, calcula el promedio y lo muestra en pantalla.
*/
#include <stdio.h>

int main(){
	float calificacionFinal, nCalificaciones, total = 0, contador = 0; // Declaraci�n de variables.
	
	printf("\tPROMEDIO DE CALIFICACIONES\n"); // Mostrar t�tulo del programa.
	printf("\nIngrese la calificacion, ingrese -1 para finalizar: "); scanf("%f",&nCalificaciones); // Pedir la primera calificaci�n.
	
	while(nCalificaciones != -1 ){ // Inicio del ciclo while.
		total = total + nCalificaciones; // Sumar la calificaci�n ingresada al total.
		contador ++; // Contar la calificaci�n ingresada.
		printf("\nIngrese la calificacion, ingrese -1 para finalizar: "); scanf("%f",&nCalificaciones); // Pedir la siguiente calificaci�n.
	}

	
	if(contador != 0){ // Mostrar el promedio de calificaciones en caso de que se hayan ingresado calificaciones.
		calificacionFinal = total / contador; // Calcular el promedio de calificaciones.
		printf("\nTu promedio final es de %.2f",calificacionFinal);  // Mostrar el resultado.
	}else{ // Mostrar mensaje de error en caso de que no se haya ingresado ninguna calificaci�n.
		printf("\nNo ingresaste ninguna calificacion"); 
	}
	
	return 0; // Indica que el programa se ejecut� correctamente.
}
