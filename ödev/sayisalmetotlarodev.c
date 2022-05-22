#include <stdio.h>
#include <math.h>

float turev(float);
float fonksiyon(float);

int main() {
	float x;
	int n;

	printf("Giris Degeri: ");
	scanf("%f", &x);
	printf("Iterasyon Sayisi: ");
	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		x = x - fonksiyon(x)/turev(x);
	}
	printf("\n%.5f", x);

}

float fonksiyon(float x){
	return (pow(x,2) - (3*x) - 5) + exp(-x);
}

float turev(float x){
	return (2*x) - 3 - exp(-x);
}

