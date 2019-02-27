#include <stdio.h>
#include <stdlib.h>

void readData(char name[], char ssn[], int* age, float *height, float *weight){

	char buff[BUFSIZ];
	gets(name);
        gets(ssn);
	*age = atoi(gets(buff));

	*height = atof(gets(buff));
        *weight = atof(gets(buff));
}


void printData(char name[], char ssn[], int age, float height, float weight){

	printf("%s\n%s\nAge = %d\nHeight(cm) = %g\nWeight(kg) = %g\n", name, ssn, age, height, weight);

}


int main(){

	char name[BUFSIZ];
	char ssn[BUFSIZ];
	int age;
	float height;
	float weight;
        
        printf("Reading data ......\n");
	readData(name, ssn, &age, &height, &weight);
        printf("\n");
        printf("Printing data ....\n");
	printData(name, ssn, age, height, weight);

	return 0;
}
