#include <stdio.h>

int generatePrimes(int);

int main(void) {

	generatePrimes(1000000);
	return 0;
}

int generatePrimes(int upTo){

	int i;
	int n;
	int isPrime;

	for (i = 2; i <= upTo; i++){
		for (n = 2; n < i; n++){
			if ((i % n == 0)) {
				printf("%d is divisble by %d\n", i, n);
				isPrime = 0;
				break;
			} else {
				isPrime = 1;
				
			}

		}

	if (isPrime == 1) {
		printf("%d is prime\n", i);
	}

	}

	return 0;
}
