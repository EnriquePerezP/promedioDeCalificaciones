/*
Programador:
- Enrique Perez.

GitHub:
-@EnriquePerezP

Descripcion:
- Este programa calcula el promedio de una serie de calificaciones ingresadas por el usuario.
- El usuario ingresa las calificaciones una a una, y para finalizar debe ingresar -1.
- El programa realiza la suma de las calificaciones y cuenta cuántas calificaciones se ingresaron.
- Al final, calcula el promedio y lo muestra en pantalla.
*/
#include <stdio.h>

int main(){
	float calificacionFinal, nCalificaciones, total = 0, contador = 0; // Declaración de variables.
	
	printf("\tPROMEDIO DE CALIFICACIONES\n"); // Mostrar título del programa.
	printf("\nIngrese la calificacion, ingrese -1 para finalizar: "); scanf("%f",&nCalificaciones); // Pedir la primera calificación.
	
	while(nCalificaciones != -1 ){ // Inicio del ciclo while.
		total = total + nCalificaciones; // Sumar la calificación ingresada al total.
		contador ++; // Contar la calificación ingresada.
		printf("\nIngrese la calificacion, ingrese -1 para finalizar: "); scanf("%f",&nCalificaciones); // Pedir la siguiente calificación.
	}

	
	if(contador != 0){ // Mostrar el promedio de calificaciones en caso de que se hayan ingresado calificaciones.
		calificacionFinal = total / contador; // Calcular el promedio de calificaciones.
		printf("\nTu promedio final es de %.2f",calificacionFinal);  // Mostrar el resultado.
	}else{ // Mostrar mensaje de error en caso de que no se haya ingresado ninguna calificación.
		printf("\nNo ingresaste ninguna calificacion"); 
	}
	
	return 0; // Indica que el programa se ejecutó correctamente.
}
