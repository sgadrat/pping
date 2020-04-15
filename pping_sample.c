#include "pping/pping.h"
#include <stdio.h>

// Compilation
//  Linux: gcc pping_sample.c pping/pping.c -o pping_sample
//  Windows: cl pping_sample.c pping/pping.c

int main(int argc, char** argv) {
	int r;

	printf("Simplistic pping sample\n");
	printf("Sends a ping request, wait for response.\n");
	printf("You can measure execution time of this process to get an idea of the ping.\n");

	r = pping_easy_ping(argv[1]);
	if (r == 1) {
		printf("An error occured during pinging (packet lost, because of us)\n");
	}else if (r == 2) {
		printf("Timeout (packet lost)\n");
	}

	return r;
}
