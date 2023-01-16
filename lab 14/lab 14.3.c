#include <stdio.h>
#include <stdlib.h>

int sesli(char metin[100]){
	int c,i,j;
	char ses[10]={'A','E','I','O','U','a','e','i','u','o'};
	for( i=0 ; metin[i] != '\0' ; i++){
		for(j=0; ses[j]!='\0'; j++){
			if(metin[i]==ses[j])
				c++;
	    }
	}
	return c;	
}
int main(int argc, char *argv[]) {
	
	char metin[100];
	printf("metni girin:");
	gets(metin);
	printf("sesli harf sayisi:%d",sesli(metin));
	return 0;
}
