#include <stdio.h>
#include <string.h>
int main(){
	char s[100];
	int n;
	scanf("%s",s);
	n=strlen(s);
	if(s[0]=='a'&& s[n-1]=='a'){
		printf("Accept");
	}
	else{
		printf("Reject");
	}
	return 0;
}