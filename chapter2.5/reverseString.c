#include<stdio.h>
#include<string.h>

void reverser(char s[]){
	size_t len = strlen(s);
	char *t = s + len -1;
	while(t >= s){
		printf("%c",*t);
		--t;
	}
	puts("");
}


int main(){
	char toReverse[50];
	scanf(" %49s",toReverse);
	reverser(toReverse);
	return 0;
}
