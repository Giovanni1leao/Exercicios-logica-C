#include<stdio.h>


int main(){
	float a, b, c, p, a1;
	scanf("%f %f %f", &a, &b, &c);
	if(a+b>c && a+c>b && b+c>a){
		p = a+b+c;
		printf("Perimetro = %.1f\n", p);
	}else{
		a1 = ((a+b)*c)/2;
		printf("Area = %.1f\n", a1);
	}

return 0;	
}
