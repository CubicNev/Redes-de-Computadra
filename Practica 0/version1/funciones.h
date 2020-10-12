/*
 Autor: Carlos Nevárez
 Redes de Computadoras
*/

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef int IP [4];

void pedirIP(char *ip){
	printf(" Ingrese la direccion IP: ");
	fgets(ip, 16, stdin);
	ip[strlen(ip)-1] = '\0';
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

char verClase(int oct){
	if(oct >= 0 && oct <= 127)
		return 'A';
	else if(oct >= 128 && oct <= 191)
		return 'B';
	else if(oct >= 192 && oct <= 223)
		return 'C';
	else if(oct >= 224 && oct <= 239)
		return 'D';
	else if(oct >= 240 && oct <= 255)
		return 'E';
	else
		return 'X';
}

void mascara(char clase){
	if(clase == 'A')
		printf(" MR: 255.0.0.0\n");
	else if(clase == 'B')
		printf(" MR: 255.255.0.0\n");
	else if(clase == 'C')
		printf(" MR: 255.255.255.0\n");
	else
		printf("\n");
}


