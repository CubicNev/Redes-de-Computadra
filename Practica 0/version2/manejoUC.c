/*
	Autor: Nevárez Tovar Juan Carlos
	Redes de computadora	
*/

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef unsigned char IP[4];

void pedirIP(char ip[16]){
	printf(" Ingrese la direccion IP: ");
	scanf("%s", ip);
	printf(" operacion con %i: %i\n", strlen(ip),strlen(ip)-1);
	printf(" La cadena es %s de %d\n", ip, strlen(ip));
}

void partirIP(char *ent, IP ip){
	char delim[] = ".";
	char *octetos[strlen(ent)];
	int i = 0;
	char *ptr = strtok(ent, delim);
	while(ptr != NULL){
		octetos[i] = ptr;
		ptr = strtok(NULL, delim);
		ip[i] = atoi(octetos[i]);
		printf(" En %i esta %d\n", i, ip[i]);
		i++;
	}

}

int main(){
	printf(" Manejo y entrada de unsigned char\n");

	unsigned char num1 = '1';
	printf(" Con D: %d Con C: %c\n", num1, num1);
	unsigned char num2 = 1;
	printf(" Con D: %d Con C: %c\n", num2, num2);

	char entrada[16];
	
	pedirIP(entrada);

	IP ip;
	partirIP(entrada, ip);

	return 0;
}