/*
 * Jazminna_Smirni_lab_ex2.c
 *
 *  Created on: Mar 26, 2024
 *      Author: jsmirni
 */


#include <stdio.h>

int
main(void)
{
	setvbuf(stdout, NULL,_IONBF, 0);
	int numbers[10];
	int sum = 0;

	printf("Enter the 10 numbers:\n");

	for(int i = 0; i < 10; i++){
		scanf("%d", &numbers[i]);
		sum += numbers[i];
	}

	printf("n      %% of total\n");

	for(int i = 0; i < 10; i++)
	{
			double perc = ((double)numbers[i] / sum ) * 100;
			printf("%d     %.2lf%%\n", numbers[i], perc);
	}
	return 0;
}

