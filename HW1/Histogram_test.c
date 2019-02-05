#include <stdio.h>
#include <ctype.h>

#define MAXROWS 100
#define NUM_ALPHABETS 26

int main(){

	int count, i, j, k;

	char sentence[MAXROWS] = {};
	char alphabets[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	int frequency[NUM_ALPHABETS] = {0};

	
// step 1:Write a function that reads a sentence from the keyboard (2 pts)
	printf("Please enter a sentence: ");
	fgets(sentence,MAXROWS,stdin);        
// step 2:Find out the frequency of the alphabets  in the sentence, ignore uppercase or lowercase in the sentence(4 pts)
	for (i = 0; i < MAXROWS; i++) {
		for (j = 0; j < NUM_ALPHABETS; j++) {
			if (tolower(sentence[i]) == tolower(alphabets[j])) {
				frequency[j]++;
			}
		}
	}

// step 3: Print the histogram as shown in the screenshot(4 pts)
	int l;
	printf("\nHistogram Printout\n_________________________________\n");
	for (k = 0; k < NUM_ALPHABETS; k++) {
		printf("%10c  %10d  ", alphabets[k], frequency[k]);
		if (frequency[k] > 0) {
			for (l = 1; l <= frequency[k]; l++) {
				printf("%c", '*');
			}
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
