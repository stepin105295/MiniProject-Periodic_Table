#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "elements.h"

int i;

void search();

void clrscr() {
    system("@cls||clear");
}

void newScreen() {
	clrscr();
	int width = 132;
	char str[] = "\033[31;1;51;4mPERIODIC TABLE\033[0m\n";
	int length = sizeof(str) - 1;
	int pad = (length >= width) ? 0 : (width - length) / 2;
	printf("%*.*s%s\n", pad, pad, " ", str);
	for(int i=0; i<10; i++){
		printf("\n");
	}
}
/*
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
*/
/*
void again() {
	char ans1[5];
	printf("\n\n\n\n\033[32mSEARCH FOR A DIFFERENT ELEMENT? : \033[0m");
	scanf("%s",ans1);
	if (tolower(ans1[0])=='y'){
		search();
	} else {
		quit();
	}
	printf("\n\n\n\n\n\n\n\n\n\n");
}
*/
int info1(char* el) {
	newScreen();
	char ele[20];
//	printf("\033[32mENTER THE ELEMENT'S NAME : \033[0m");
	strcpy(ele,el);
//	scanf("%s",ele);
	for (i=0; i<118; i++) {
		if (strcmp(atom[i].name,ele)==0){
			printf("\033[34m\n\n\tELEMENT : %s\033[0m\n",atom[i].name);
			printf("\033[34m\n\n\tSYMBOL : %s\033[0m\n",atom[i].symbol);
			printf("\033[34m\n\n\tATOMIC NUMBER : %d\033[0m\n",atom[i].atomicnum);
			printf("\033[34m\n\n\tATOMIC WEIGHT : %d\033[0m\n",atom[i].atomicwt);
			printf("\033[34m\n\n\tCRYSTAL STRUCTURE : %s\033[0m\n",atom[i].crystruct);
			printf("\033[34m\n\n\tATOMIC RADIUS : %f pm\033[0m\n",atom[i].atomicrad);
			printf("\033[34m\n\n\tPRINCIPAL OXIDATION STATES : %s\033[0m\n",atom[i].oxidnno);
			printf("\033[34m\n\n\tIONIC RADIUS : %d pm\033[0m\n",atom[i].ionicrad);
			printf("\033[34m\n\n\tIONISATION ENERGIES : %s eV\033[0m\n",atom[i].ionenergy);
			printf("\033[34m\n\n\tELECTRON AFFINITIES : %f eV\033[0m\n",atom[i].eaffinity);
			printf("\033[34m\n\n\tELECTRONEGATIVITY : %f\033[0m\n",atom[i].enegativity);
			printf("\033[34m\n\n\tDENSITY : %f kgm^-3\033[0m\n",atom[i].density);
			printf("\033[34m\n\n\tMELTING POINT : %f K\033[0m\n",atom[i].meltingp);
			printf("\033[34m\n\n\tBOILING POINT : %f K\033[0m\n",atom[i].boilingp);
			return 1;
			break;
		}
	}
	return 0;
	again();
}

int info2(char* sy) {
	newScreen();
	char sym[1];
//	printf("\033[32mENTER THE ELEMENT'S SYMBOL : \033[0m");
	strcpy(sym,sy);
//	scanf("%s",sym);
	for (i=0; i<118; i++) {
		if (strcmp(atom[i].symbol,sym)==0){
			printf("\033[34m\n\n\tELEMENT : %s\033[0m\n",atom[i].name);
			printf("\033[34m\n\n\tSYMBOL : %s\033[0m\n",atom[i].symbol);
			printf("\033[34m\n\n\tATOMIC NUMBER : %d\033[0m\n",atom[i].atomicnum);
			printf("\033[34m\n\n\tATOMIC WEIGHT : %d\033[0m\n",atom[i].atomicwt);
			printf("\033[34m\n\n\tCRYSTAL STRUCTURE : %s\033[0m\n",atom[i].crystruct);
			printf("\033[34m\n\n\tATOMIC RADIUS : %f pm\033[0m\n",atom[i].atomicrad);
			printf("\033[34m\n\n\tPRINCIPAL OXIDATION STATES : %s\033[0m\n",atom[i].oxidnno);
			printf("\033[34m\n\n\tIONIC RADIUS : %d pm\033[0m\n",atom[i].ionicrad);
			printf("\033[34m\n\n\tIONISATION ENERGIES : %s eV\033[0m\n",atom[i].ionenergy);
			printf("\033[34m\n\n\tELECTRON AFFINITIES : %f eV\033[0m\n",atom[i].eaffinity);
			printf("\033[34m\n\n\tELECTRONEGATIVITY : %f\033[0m\n",atom[i].enegativity);
			printf("\033[34m\n\n\tDENSITY : %f kgm^-3\033[0m\n",atom[i].density);
			printf("\033[34m\n\n\tMELTING POINT : %f K\033[0m\n",atom[i].meltingp);
			printf("\033[34m\n\n\tBOILING POINT : %f K\033[0m\n",atom[i].boilingp);
			return 1;
			break;
		}
	}
	return 0;
	again();
}

int info3(int an) {
	newScreen();
	int atn;
//	printf("\033[32mENTER THE ELEMENT'S ATOMIC NUMBER : \033[0m");
	atn=an;
//	scanf("%d",&atn);
	for (i=0; i<118; i++) {
		if (atom[i].atomicnum==atn){
			printf("\033[34m\n\n\tELEMENT : %s\033[0m\n",atom[i].name);
			printf("\033[34m\n\n\tSYMBOL : %s\033[0m\n",atom[i].symbol);
			printf("\033[34m\n\n\tATOMIC NUMBER : %d\033[0m\n",atom[i].atomicnum);
			printf("\033[34m\n\n\tATOMIC WEIGHT : %d\033[0m\n",atom[i].atomicwt);
			printf("\033[34m\n\n\tCRYSTAL STRUCTURE : %s\033[0m\n",atom[i].crystruct);
			printf("\033[34m\n\n\tATOMIC RADIUS : %f pm\033[0m\n",atom[i].atomicrad);
			printf("\033[34m\n\n\tPRINCIPAL OXIDATION STATES : %s\033[0m\n",atom[i].oxidnno);
			printf("\033[34m\n\n\tIONIC RADIUS : %d pm\033[0m\n",atom[i].ionicrad);
			printf("\033[34m\n\n\tIONISATION ENERGIES : %s eV\033[0m\n",atom[i].ionenergy);
			printf("\033[34m\n\n\tELECTRON AFFINITIES : %f eV\033[0m\n",atom[i].eaffinity);
			printf("\033[34m\n\n\tELECTRONEGATIVITY : %f\033[0m\n",atom[i].enegativity);
			printf("\033[34m\n\n\tDENSITY : %f kgm^-3\033[0m\n",atom[i].density);
			printf("\033[34m\n\n\tMELTING POINT : %f K\033[0m\n",atom[i].meltingp);
			printf("\033[34m\n\n\tBOILING POINT : %f K\033[0m\n",atom[i].boilingp);
			return 1;
			break;
		}
	}
	return 0;
	again();
}

int info4(int awt) {
	newScreen();
	int atwt;
//	printf("\033[32mENTER THE ELEMENT'S ATOMIC WEIGHT : \033[0m");
	atwt=awt;
//	scanf("%f",&atwt);
	for (i=0; i<118; i++) {
		if (atom[i].atomicwt==atwt){
			printf("\033[34m\n\n\tELEMENT : %s\033[0m\n",atom[i].name);
			printf("\033[34m\n\n\tSYMBOL : %s\033[0m\n",atom[i].symbol);
			printf("\033[34m\n\n\tATOMIC NUMBER : %d\033[0m\n",atom[i].atomicnum);
			printf("\033[34m\n\n\tATOMIC WEIGHT : %d\033[0m\n",atom[i].atomicwt);
			printf("\033[34m\n\n\tCRYSTAL STRUCTURE : %s\033[0m\n",atom[i].crystruct);
			printf("\033[34m\n\n\tATOMIC RADIUS : %f pm\033[0m\n",atom[i].atomicrad);
			printf("\033[34m\n\n\tPRINCIPAL OXIDATION STATES : %s\033[0m\n",atom[i].oxidnno);
			printf("\033[34m\n\n\tIONIC RADIUS : %d pm\033[0m\n",atom[i].ionicrad);
			printf("\033[34m\n\n\tIONISATION ENERGIES : %s eV\033[0m\n",atom[i].ionenergy);
			printf("\033[34m\n\n\tELECTRON AFFINITIES : %f eV\033[0m\n",atom[i].eaffinity);
			printf("\033[34m\n\n\tELECTRONEGATIVITY : %f\033[0m\n",atom[i].enegativity);
			printf("\033[34m\n\n\tDENSITY : %f kgm^-3\033[0m\n",atom[i].density);
			printf("\033[34m\n\n\tMELTING POINT : %f K\033[0m\n",atom[i].meltingp);
			printf("\033[34m\n\n\tBOILING POINT : %f K\033[0m\n",atom[i].boilingp);
			return 1;
			break;
		}
	}
	return 0;
	again();
}
/*
void search() {
	newScreen();
	printf("\033[33mSREACH BY :- \033[0m\n\n");
	printf("\033[34m\t1 -> ELEMENT\033[0m\n");
	printf("\033[34m\t2 -> SYMBOL\033[0m\n");
	printf("\033[34m\t3 -> ATOMIC NUMBER\033[0m\n");
	printf("\033[34m\t4 -> ATOMIC WEIGHT\033[0m\n\n\n\n");
	int choice2;
	printf("\033[32mYOUR CHOICE : \033[0m");
	scanf("%d",&choice2);
	if (choice2==1){
		char el[20];
        printf("\033[32mENTER THE ELEMENT'S NAME : \033[0m");
        scanf("%s",el);
		info1(el);
	} else if (choice2==2){
	    char sy[1];
        printf("\033[32mENTER THE ELEMENT'S SYMBOL : \033[0m");
        scanf("%s",sy);
		info2(sy);
	} else if (choice2==3){
		info3();
	} else if (choice2==4){
		info4();
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
*/
