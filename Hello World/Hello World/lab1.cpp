#include "lab1.h"


// Greatest Common Denominator
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of a and b.
int gcd(const int a, const int b)
{
	// Replace this line with your code (have fun!).
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

// Fibonacci
// PRE: n is a positive int greater than 0
// POST: n is not changed
// RETURN: the nth positive integer in the Fibonacci sequence.
long long fibonacci(const int n)
{
	if (n == 1 || n == 2) {
		return n;
	}
	else {
		return (fibonacci(n - 1) + fibonacci(n - 2));
	}
}
