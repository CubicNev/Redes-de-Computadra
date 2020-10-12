/*
	Autor: Nevárez Tovar Juan Carlos
	Redes de computadora	
*/

# include "funciones.h"

int main(){
	IP ip = {247,217,117,11};
	printf(" IP: %d.%d.%d.%d\n", ip[0], ip[1], ip[2], ip[3]);
	verClase(ip[0]);
	
	return 0;
}

/*
	Pruebas:
	A - {125,123,54,6}
	B - {145,225,1,234}
	C - {192,168,56,1}
	D - {230,134,102,9}
	E - {247,217,117,11}
*/