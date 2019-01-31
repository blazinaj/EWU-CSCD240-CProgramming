#include <stdio.h>
#include <ctype.h>

#define MAXSIZE 100

int main() {

  char ch;
  int i;
  char sentence[MAXSIZE];

  int alphabetsCount = 0;

  printf("Type a sentence: \n");

  fgets(sentence, sizeof(sentence)/sizeof(char), stdin);

  printf("Type a character that you would like to count in the sentence:\n");

  getchar();

  for (i = 0; i < sizeof(sentence)/sizeof(char); i++){

    if (tolower(sentence[i]) == tolower(ch)) {
      alphabetsCount++;
    }
  }
  printf("Character %c has a frequency of %d\n", ch, alphabetsCount);

  return 0;

}
