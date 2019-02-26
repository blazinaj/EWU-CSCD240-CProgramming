#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void swapElements(int *a, int *b);
void sortArray(int *array, const int size);
void changeElements(int *val);
void printArray(int *array, const int size);
double findMean(int *array, const int size);
double findMedian(int *array, const int size);
double findStandardDeviation( int *array, const int size, double average);

int main(){

	int  n, *x, i = 0;
        double mean = 0.0, median = 0.0, stdDev = 0.0;

	printf("\nI couldn't quite get this bonus  part to work properly, something to do with the input of the first character I think. I tried.\n\n");
	printf("This is the bonus part of the program that asks the user to type in as many integers as they want and to dynamically allocate memory and find the mean, median and average of  integers continuously. Lastly, the allocated memory needs to be freed.\n");
	printf("Type as many integers as you want: \n");

	x = malloc(sizeof(int));
	if (x == NULL){
		printf("No memory!!! \n");
	}

	while ((n = getchar()) != EOF) {
		printf("Typing the number: \n");
		scanf("%d", &n);
		x[i++] = n;
		x = realloc(x, (i+1)*sizeof(int));
		printf("Displaying the numbers so far: \n");
		printArray(x, (sizeof(x)/sizeof(int)));
		mean = findMean(x, (sizeof(x)/sizeof(int)));
		printf("Mean of numbers is: %f\n", mean);
		median = findMedian(x, (sizeof(x)/sizeof(int)));
		printf("Median of numbers is: %f\n", median);
		stdDev = findStandardDeviation(x, (sizeof(x)/sizeof(int)), mean);
		printf("Standard Deviation so far is: %f\n", stdDev);
	}
       
       //Deallocate the memory ;
        free(x);

        return 0;
}





void printArray( int *array, const int size){

     for (int i = 0; i < size; i++){
         printf("%d, ", array[i]);
     }
     printf("\n");
}

void sortArray(int *array, const int size){

     int i, j;
     for (i = 0; i < size - 1; i++){
         for (j = 0; j < size -1; j++){
             if (array[j] > array[j+1]){
                 swapElements(&array[j], &array[j+1]);
             }
         }
     }
}

void swapElements( int *x, int *y){

     int temp = *x;
     *x = *y;
     *y = temp;

}



double findMean(int *array, const int size){

    sortArray(array, size);
    double m = 0;
    for (int i = 0; i < size; i++){
        m += array[i];
    }
    m = m / (double)size;
    return m;
}

double findMedian(int *array, const int size){

   sortArray(array, size);
   double median;
   if (size % 2 != 0){
       median = array[size/2];
   }
   else
       median = (array[size/2] + array[(size/2) - 1]) / 2;
   return median;
}


double findStandardDeviation( int *array, const int size, double average){

       sortArray(array, size);
       double stdDev;
       if (size < 2){
	   return 0;
       }
       double *deviationArray = malloc(sizeof(double) * size);
       for (int i = 0; i < size; i++){
           deviationArray[i] = (double)array[i] - average;
           deviationArray[i] = deviationArray[i] * deviationArray[i];
           stdDev += deviationArray[i];
       }
       stdDev = stdDev / (size - 1);
       stdDev = sqrt(stdDev);
       return stdDev;
}


