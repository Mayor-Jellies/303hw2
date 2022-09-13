//
// Created by James O'Reilly on 9/13/22.
//
#include <stdio.h>

///recursive gcd using euclid algo
int gcd(int p, int q){
	if(q == 0)
		return p;
	else
		return gcd(q, p % q );
}
///did not code a console reader for c function
int main() {
	printf("running GCD(1845,102465)");
	int a = gcd(1845, 102465);
	printf("\nResult: %d",a);
	printf("\n");
}

