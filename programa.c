#include <stdio.h>
#include <stdlib.h>

struct Musica
{
    char genero[50], artista[50], album[50];
};

void introducirDatos(struct Musica *);
void mostrarDatos(struct Musica);

int main()
{
    struct Musica metadatos;

    introducirDatos(&metadatos);
    // mostrarDatos(metadatos);

    printf("\n\n\n\n");
    system("pause");
    return 0;
}

void introducirDatos(struct Musica *meta)
{
	printf("\nIntroduzca el nombre del album: ");
	fflush(stdin);
	gets(meta->album);
	
	printf("\nIntroduzca el nombre del artista: ");
	fflush(stdin);
	gets(meta->artista);
	
	printf("\nIntroduzca el genero del album: ");
	fflush(stdin);
	gets(meta->genero);
}