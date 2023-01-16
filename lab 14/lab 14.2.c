#include <stdio.h>
#include <string.h>

void sirala(char []);

int main(){
	char str[20];
	printf("bir metin giriniz:");
	gets(str);

	sirala(str);
}
void sirala(char a[]){
	char gecici;
	int i,j;
	
	
	for (i = 0;a[i]!='\0'; i++) { 
    	for (j = i+1; a[j]!='\0' ; j++) {
         	if (a[i]>a[j]) {
            	gecici = a[i];
            	a[i] = a[j];
            	a[j] = gecici;
    		}
    	}
	}
	printf("harflerin siralanmis hali :");
	for(i=0;a[i]!='\0';i++){
		printf("%c",a[i]);
	}
}
