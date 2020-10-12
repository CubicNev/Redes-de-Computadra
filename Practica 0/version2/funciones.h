/*
	Autor: Nevárez Tovar Juan Carlos
	Redes de computadora	
*/

# include "definiciones.h"

void pedirIP(char ip[16]){
	printf(" Ingrese la direccion IP: ");
	scanf("%s", ip);
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
		i++;
	}

}

void verClase(unsigned char oct){
	if(oct & 128){
		if(oct & 64){
			if(oct & 32){
				if(oct & 16){
					printf(" Clase F\n");
				} else {
					printf(" Clase D\n");
				}
			} else {
				printf(" Clase C\n");
			}
		} else {
			printf(" Clase B\n");
		}
	} else {
		printf(" Clase A\n");
	}
}
