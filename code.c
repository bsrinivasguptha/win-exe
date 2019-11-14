#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 20

void main(){
	char password[] = "Supers3cret\n";
	char inputpass[MAX_LIMIT];
	printf("Enter password to proceed:");
	fgets(inputpass, MAX_LIMIT, stdin);

	if(strcmp(inputpass,password) == 0){
		printf("Successful login");

	}else{
		printf("Incorrect password");
	}
}