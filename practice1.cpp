// Formula based CPP program to find sum of all
// divisors of n.
#include <bits/stdc++.h>
using namespace std;

// Returns sum of all factors of n.
int sumofFactors(int n)
{
	// If n is odd, then there are no even factors.
	if (n % 2 != 0)
		return 0;

	// Traversing through all prime factors.
	int res = 1;
	for (int i = 2; i <= sqrt(n); i++) {

		// While i divides n, print i and divide n
		int count = 0, curr_sum = 1, curr_term = 1;
		while (n % i == 0) {
			count++;

			n = n / i;
			if (i == 2 && count == 1)
				curr_sum = 0;

			curr_term *= i;
			curr_sum += curr_term;
		}

		res *= curr_sum;
	}

	// This condition is to handle the case when n
	// is a prime number.
	if (n >= 2)
		res *= (1 + n);

	return res;
}

// Driver code
int main()
{
	int n = 18;
	cout << sumofFactors(n);
	return 0;
}
