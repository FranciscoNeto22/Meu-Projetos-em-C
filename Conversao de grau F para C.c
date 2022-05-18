#include <stdio.h>

int main(){
	
	float Fah, Cal, Formula;
	
	printf("Digite a temperatura em graus Fah: ");
	scanf("%f", &Fah);
	
	Formula= (Fah-32)/1.8;
	
	printf("O grau em Cel er: %.1f\n", Formula);
	
	system("pause");
	
	return 0;
}
