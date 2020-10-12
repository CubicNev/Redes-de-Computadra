/*
 Autor: Carlos Nevárez
 Redes de Computadoras

 Input: Direccion IP
	ej. 192.168.1.234
 Output: Clase y mascara de red correspondiente
	 ej. Clase C MR: 255.255.255.0 

*/

# include "funciones.h"

int main(){
	
	char entrada[16];
	IP ip;
	char clase;

	pedirIP(entrada);
	partirIP(entrada, ip);
	clase = verClase(ip[0]);

	if(clase != 'X'){
		printf(" Clase %c\n", clase);
		mascara(clase);
	} else {
		printf(" Ingrese una direccion IP correcta\n");
	}
	
	return 0;
}

/*
	Pruebas:
	A - 125.123.54.6
	B - 145.225.1.234
	C - 192.168.56.1
	D - 230.134.102.9
	E - 247.217.117.11
*/
