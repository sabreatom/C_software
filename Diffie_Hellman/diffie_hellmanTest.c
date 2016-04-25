/**********************************************************************
 * Test for Diffie-Hellman library
 * Author: Aleksandrs Maklakovs
 * *******************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "diffie_hellman.h"

int main(int argc, char* argv[])
{
	int p = 23;
	double g = 5;
	double a = 6;
	double b = 10;
	
	//Calculat public keys:
	int A = calc_pub_key(a, p, g);
	int B = calc_pub_key(b, p, g);
	
	printf("Public key A value is: %d\n", A);
	printf("Public key B value is: %d\n", B);
	
	//Calculate keys:
	int key1 =  calc_key((double) B, a, p);
	int key2 =  calc_key((double) A, b, p);
	
	printf("Key 1 value is: %d\n", key1);
	printf("Key 2 value is: %d\n", key2);
	
	return 0;
}
