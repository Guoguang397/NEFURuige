#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 81
int main()
{
	void Caesar_transform(char message[], int shift);
	char message[LEN];
	int shift;
	printf("Enter message to be encrypted: ");
	gets(message);
	printf("Enter shift amount (1-25): ");
	scanf("%d",&shift);
	printf("Encrypted message: ");
	Caesar_transform(message, shift);
	printf("%s\n",message);
	return 0;
}
void Caesar_transform(char message[], int shift)
{
//start
	for(int i=0;message[i]!='\0';i++)
	{
		if(message[i]>='a'&&message[i]<='z')message[i]=(message[i]-'a'+shift)%26+'a';
		if(message[i]>='A'&&message[i]<='Z')message[i]=(message[i]-'A'+shift)%26+'A';
	}
//end
}
