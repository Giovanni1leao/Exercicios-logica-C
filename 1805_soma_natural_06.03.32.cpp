#include<stdio.h>
int main(){
	int a, b, s, c, r;
	r = 1;
	scanf("%d %d", &a, &b);
	for(int i=a; i<b+1; i++){
		c++;
	}
	b = a + (c-1)*r;
	s = (a+b)*c/2;
	printf("%d\n", s);
	
	return 0;
}

