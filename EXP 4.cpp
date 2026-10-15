#include <stdio.h>
#include <string.h>
int main(){
	char s[100];
	int n,i,ok=1;
	scanf("%s",s);
	n=strlen(s);
	for(i=1;i<n/2;i++)
		if(s[i]!=s[n-1-i])
			ok=0;
	for(i=1;i<n-1;i++)
		if(s[i]!='0' && s[i]!='1')
			ok=0;
	if(ok) printf("Accept");
	else printf("Reject");
	
	return 0;
}