#include<stdio.h>
#include<math.h>
int main(){
	double l, at;
	
	while(scanf("%lf", &l) != EOF){
		at = (l*l)*sqrt(3)/4;
		at = at * 1.6;
		printf("%.2lf\n", at);
	}
	return 0;
}
