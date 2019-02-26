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

	int  n, *x;
        double mean = 0.0, median = 0.0, stdDev = 0.0;

	printf("This is the basic part of the program that asks the user to type the number of integers, i.e., 'n'. Next, allocate memory for 'n' integers, read the values of 'n' integers into the allocated memory usining scanf; next, find the mean, median and average of 'n' integers.Lastly, the allocated memory needs to be freed.\n");
        
	printf("\nRead using scanf how many integers you would like to type:\n");
        scanf("%d", &n);

        
	/*****************************************************************/

	//x is not automatically assigned a memory block when it is defined as a pointer variable, you need to allocate a block
	//of memory large enough to hold 'n' integers
        // Write the function that allocates memory to hold 'n' integers

        
        printf("Please type 'n' integers: \n");
	/***********************************************************************/ 
	//Read in the list of numbers 'n' into the allocated block using scanf 
	
		
  
        printf("Displaying the numbers:\n");

       // Call printArray to display the integers      
 
        // Find the mean of integers using findMean function
        printf("Mean of the numbers is: %f\n", mean);

        // Fidn the median of integers using findMedian function
        printf("Median of the numbers is: %f\n", median);
        // Find the standard deviation of integers using findStandardDeviation function
         printf("Standard deviation of the numbers is: %f\n", stdDev);
	
       //Deallocate the memory ;
        
        
        
        return 0;
}





void printArray( int *array, const int size){

     // Complete this function

}

void sortArray(int *array, const int size){

     //Complete this function
}

void swapElements( int *x, int *y){

     // Complete this function

}



double findMean(int *array, const int size){

    // COmplete this function
}

double findMedian(int *array, const int size){

   //Complete this function;
}


double findStandardDeviation( int *array, const int size, double average){

       // Complete this function

}

