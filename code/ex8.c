#include <stdio.h>

int main (int argc, char *argv[])
{
	int i = 0 ;

	if (argc == 1) {
		printf("You have no argument.\n");
	} else if (argc == 2) {
		printf("You only have one argument. You Suck.\n");
	} else if (argc > 2 && argc < 5) {
		printf("Here's your agruments:\n");

		for (i = 1; i < argc; i++) {
			printf("%s\n", argv[i]);
		}
		printf("\n");
	} else {
		printf("You have too many arguments. You Suck.\n");
	}
	
	return 0;
}
