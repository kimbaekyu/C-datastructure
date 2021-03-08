#include<stdio.h>

double power(double,int);
int main() {
	double x;
	int n;
	while(1){
	printf("\n>>");
	scanf_s("%lf %d",&x,&n);
	if (n == 0)
		break;
	printf("%.3lf ^ %d =%.3lf",x,n, power(x,n));
	}
	return 0;
}
void indent(int);
int tab = 0;
double power(double x, int n)
{
	double result;
	if (n == 0) {}
	else{
		indent(tab);
		printf("power(%.3lf, %d) \n", x, n);
		++tab;
	}
	if (n == 0) { 
		
		result = 1;
		return result;

	}
	else if ((n % 2) == 0){
		
		result = power(x * x, n / 2);
		--tab;
		indent(tab);
		printf("power(%.3lf, %d) =%.3lf\n", x, n, result);
		return result;
	}
	
		
	else{
		if (n == 1) { 
			result = x * power(x * x, (n - 1) / 2);
			--tab;
		}
		else{
			result = x * power(x * x, (n - 1) / 2);
			--tab;
			indent(tab);
			printf("power(%.3lf, %d) =%.3lf\n", x, n, result);
		}
		
		return result;
	}
	
	
	
	
}
void indent(int t) {
	int i;
	for (i = 0; i < t; i++) {
		int i;
		for (i = 0; i < t; i++)
			printf(" ");
	}
}