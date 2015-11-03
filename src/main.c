/* 
	This is the main method which will call init.c if all goes well
*/

#include <meth.h>
#include <stdio.h>
#include <gmp.h>

mpz_t n;
int status;


int main(int argc, char *argv[]) {

	if (argc < 2) {
		showHelp();
		return 0;
	}

	showWelcome();

	
 	status = mpz_init_set_str(n, argv[1], 10);
 	if (status == FAIL)
 	{
 		printError("Could not convert modulus argument to string\n");
 	}
 	else
 	{
 		initLazyFact(&n);
 	}
	
	return 0;
}