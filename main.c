//
// Created by James O'Reilly on 9/13/22.
//
#include <stdio.h>
#include <stdlib.h>
///recursive gcd using euclid algo
int gcd(int p, int q){
	if(q == 0)
		return p;
	else
		return gcd(q, p % q );
}
///did not code a console reader for c function
int main() {
	return gcd(1845, 102465);
}

