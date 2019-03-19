#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include "fileTest.h"

int countString(const char* fileName, char *str){
    
    int word_count = 0;
	FILE * f1;
	f1 = fopen(fileName, "r");
	char buf[1000];
	char *ret;
    // insert your code here!


	while(fscanf(f1, "%s", buf) != -1){
		ret = strcasestr(buf, str);
		if (ret != NULL)
			word_count++;
	}

    return word_count;
}


bool CheckLine( const char * line){
	int j;
	for (j=0; line[j] != '\0'; j++){
		if (!isspace(line[j]))
			return false;
	}
	return true;
}

int countEmptyLines(const char *fileName){

    int emptyLine = 0;
    char line[100];
	FILE * f1;
	f1 = fopen(fileName, "r");
    // Insert your code here!
	while(fgets(line, sizeof(line), f1)){
		if (CheckLine(line)){
			emptyLine++;
		}
	}
	int res;
	res = fclose(f1);

    return emptyLine;
}