/*
	This file initializes LazyFact methods
*/

#include <stdio.h>
#include <meth.h>
#include <gmp.h>


void initLazyFact(mpz_t *n)
{
	printf("Modulus: %s\n\n", mpz_get_str (0, 10, *n));


	if (trialDiv(n) == WIN)
		return;
	if (pollardsRho(n) == WIN)
		return;
	if (shankSquares(n) == WIN)
		return;
	if (openSSLGenTest(n) == WIN)
		return;

}

