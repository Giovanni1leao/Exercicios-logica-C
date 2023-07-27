#include<stdio.h>
#include<math.h>

float calcular_delta(float a, float b, float c, float *pdelta){
	float delta;
	*pdelta= (b*b)-(4*a*c);
	
}

float calcular_x1(float a, float b, float c){
	float delta;
	delta = calcular_delta(a,b,c, &delta);
	float x1 = (-b+sqrt(delta))/(2*a);
	return x1;
}

float calcular_x2(float a, float b, float c){
	float delta;
	delta = calcular_delta(a,b,c, &delta);
	float x2 = (-b-sqrt(delta))/(2*a);
	return x2;
}

int main(){
	float a, b, c, delta, x1, x2;
	printf("Digite valores para A, B e C: \n");
	scanf("%f %f %f", &a, &b, &c);
	delta = calcular_delta(a,b,c, &delta);
	x1 = calcular_x1(a, b, c);
	x2 = calcular_x2(a, b, c);
	printf("o valor de delta: %.2f\n", delta);
	
	if(delta<0){
		printf("Delta nao possu raizes!\n");
	}
	if(delta==0){
		printf("Delta possui apenas uma raiz real!\n");
		printf("Valor da raiz real de delta: %.2f", delta);
	}
	
	if(delta>0){
		printf("Delta possui duas raizes reais e distintas!\n");
		printf("%.2f\n", x1);
		printf("%.2f\n", x2);
	}

	return 0;
}

