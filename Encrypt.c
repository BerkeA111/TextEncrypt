#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
void main(void) {
	char input[1000];
	char output[1000];
	unsigned int i;
	printf("ISSUES:\nPredictable behaviour\nText size limited\nOnly ASCII\n");
	printf("Enter Encrypt mode (1) or enter Decrypt mode (2) or Exit (0)\n");
	scanf_s("%u", &i);
	while (i) {
		switch (i)
		{
		case(1): {
			int key;
			do {
				printf("Enter encrption key (1-10)\n");
				scanf_s("%d", &key);
			} while (key < 1 || key>10);
			printf("Enter the string to encrypt\n");
			scanf_s("%s", input, 999);
			int a;
			for (a = 0; a < strlen(input); a++) {
				output[a] = (input[a] + key);
			}
			output[a] = '\0';
			printf("Encrypted string is:\n%s", output);
			break;
		}
		case(2): {
			int key;
			do {
				printf("Enter encrption key (1-10)\n");
				scanf_s("%d", &key);
			} while (key < 1 || key>10);
			printf("Enter the string to decrypt\n");
			scanf_s("%s", input, 999);
			int a;
			for (a = 0; a < strlen(input); a++) {
				output[a] = (input[a] - key);
			}
			output[a] = '\0';
			printf("Decrypted string is:\n%s", output);
			break;
		}
		default: {
			printf("Invalid input\nProgram terminating...");
		}
		}
		printf("\nEnter Encrypt mode (1) or enter Decrypt mode (2) or Exit (0)\n");
		scanf_s("%u", &i);
	}
}