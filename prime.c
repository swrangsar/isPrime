#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define LIMIT 1000000

int isPrime(long number);

int main()
{
	long i = 0;
	while (++i < LIMIT) {
		if (isPrime(i)) {
			printf("%ld\n", i);
		}
	}
	return 0;
}

int isPrime(long number)
{
	if (number < 0) number = -number;
	if (number < 2) return 0;
	if (number == 2) return 1;
	if (!(number & 1)) return 0;
	if (number == 3) return 0;
	if ((number % 3) == 0) return 0;
	
	long root = (long)sqrt(number);
	long i = 4;
	
	while (++i <= root) {
		if (abs((i % 6) - 6) == 1) {
			if (number % i == 0) return 0;
		}
	}
	return 1;
}