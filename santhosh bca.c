#include <stdio.h>
#include <ctype.h>
int main() {
	char sentence[1000];
	int alphabets =0, digits=0, specialchar=0;
	int i=0;
	
	printf("enter a sentence:");
	fgets(sentence,sizeof(sentence),stdin);
	// read a line of text
	while (sentence[i]!='\0'){
		if (isalpha(sentence[i])){
			alphabets++;
	}else if (isdigit(sentence[i])){
		digits++;
    }else if (isdigit(sentence[i])){
    // not a space ,not n alphabet or digit = special character specialchar++;
    }
    i++;
	}
	printf("\aAlphabets:%d", alphabets);
	printf("\nDigits:%d",digits);
	printf("\nspecial character: %d\n",
	specialchar);
	return 0;
}
