#include <stdio.h>
double summation(double* a, double* b, double *result) {
	*result = *a + *b;
	return *result;
}

double subtraction(double* a, double* b, double* result) {
	*result = *a - *b;
	return *result;
}

double multification(double* a, double* b, double* result) {
	*result = *a * *b;
	return *result;
}

double division(double* a, double* b, double* result) {
	*result = *a / *b;
	return *result;
}


int main() {
	double a = 2, b = 3;
	double result;
	summation(&a, &b, &result);
	printf("%.0lf + %.0lf = %.2lf\n", a, b, result);

	subtraction(&a, &b, &result);
	printf("%.0lf - %.0lf = %.2lf\n", a, b, result);

	multification(&a, &b, &result);
	printf("%.0lf * %.0lf = %.2lf\n", a, b, result);

	division(&a, &b, &result);
	printf("%.0lf / %.0lf = %.2lf\n", a, b, result);

	return 0;
}