#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <elements.h>

void quit() {
	newScreen();
	char ans[5];
	printf("\033[31mARE YOU SURE YOU WANT TO QUIT?\033[0m");
	scanf("%s",ans);
	if (tolower(ans[0])=='y'){
		printf("\n\n\n\n\033[35mTHANK YOU\033[0m\n\n");
	} else {
		main();
	}
}
void search() {
	newScreen();
	printf("\033[33mSREACH BY :- \033[0m\n\n");
	printf("\033[34m\t1 -> ELEMENT\033[0m\n");
	printf("\033[34m\t2 -> SYMBOL\033[0m\n");
	printf("\033[34m\t3 -> ATOMIC NUMBER\033[0m\n");
	printf("\033[34m\t4 -> ATOMIC WEIGHT\033[0m\n\n\n\n");
	int choice2;
	int returnvalue;
	printf("\033[32mYOUR CHOICE : \033[0m");
	scanf("%d",&choice2);
	if (choice2==1){
		char el[20];
        printf("\033[32mENTER THE ELEMENT'S NAME : \033[0m");
        scanf("%s",el);
		returnvalue = info1(el);
		printf("Return = %d",returnvalue);
	} else if (choice2==2){
	    char sy[1];
        printf("\033[32mENTER THE ELEMENT'S SYMBOL : \033[0m");
        scanf("%s",sy);
		returnvalue = info2(sy);
		printf("Return = %d",returnvalue);
	} else if (choice2==3){
	    int an;
        printf("\033[32mENTER THE ELEMENT'S ATOMIC NUMBER : \033[0m");
        scanf("%d",&an);
		returnvalue = info3(an);
		printf("Return = %d",returnvalue);
	} else if (choice2==4){
	    int awt;
        printf("\033[32mENTER THE ELEMENT'S ATOMIC WEIGHT : \033[0m");
        scanf("%d",&awt);
		returnvalue = info4(awt);
		printf("Return = %d",returnvalue);
	} else {
		search();
	}
}
int main() {
	newScreen();
	printf("\033[34m1 -> EXPLORE\033[0m\n");
	printf("\033[34m2 -> QUIT\033[0m\n\n\n\n");
	int choice1;
	printf("\033[32mYOUR CHOICE : \033[0m");
	scanf("%d",&choice1);
	table();
	if (choice1==1){
		search();
	} else if (choice1==2){
		quit();
	} else {
		main();
	}
}
