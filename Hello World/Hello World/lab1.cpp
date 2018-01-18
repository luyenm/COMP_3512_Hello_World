#include "lab1.h"


// Greatest Common Denominator
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of a and b.
int gcd(const int a, const int b)
{
	// Replace this line with your code (have fun!).
	int gcf{ 0 };
	int temp1 = a;
	int temp2 = b;
	while (temp1 % 2 == 0 && temp2 % 2 == 0) {
		temp1 /= 2;
		temp2 /= 2;
		gcf += 1;
	}
	while (temp1 != b) {
		if (temp1 % 2 == 0) {
			temp1 /= 2;
		} else if (temp2 % 2 == 0) {
			temp2 /= 2;
		}
		else if (temp1 > temp2) {
			temp1 = (temp1 - temp2) / 2;
		}
		else {
			temp2 = (temp2 - temp1) / 2;
		}

	}
	gcf = temp1;
	return gcf;
}

// Fibonacci
// PRE: n is a positive int greater than 0
// POST: n is not changed
// RETURN: the nth positive integer in the Fibonacci sequence.
long long fibonacci(const int n)
{
	if (n <= 1) {
		return n;
	}
	else {
		return (fibonacci(n - 1) + fibonacci(n - 2));
	}
}
