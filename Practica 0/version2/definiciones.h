/*
	Autor: Nevárez Tovar Juan Carlos
	Redes de computadora	
*/

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef unsigned char IP[4];

void pedirIP(char ip[16]);
void partirIP(char *ent, IP ip);
void verClase(unsigned char oct);