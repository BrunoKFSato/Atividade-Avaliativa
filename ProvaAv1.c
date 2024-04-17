#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int Portas() {
	fflush(stdout);
	srand(time(NULL));
	int portapremiada = rand() % 3 + 1;
	return portapremiada;

	int portavazia = rand() % 3 + 1 != portapremiada;
	return portavazia;

	int portavazia2 = rand() % 3 + 1 != portapremiada != portavazia;
	return portavazia2;
}

int Porta_Escolhida(){
	int Porta_Escolhida;
	printf("\n Digite a Porta_Escolhida: %d", Porta_Escolhida);
	scanf("%d", &Porta_Escolhida);
	return Porta_Escolhida;
}

int main(){
	int portavazia;
	printf("\n A porta vazia é %d", &portavazia);
}



}







