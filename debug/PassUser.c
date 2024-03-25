#include <stdio.h>
#include <string.h>

char checkcol(char *user[],int keep[], int N);
char checklogin(char *user[],int keep[], int N);
char checksizeofpass(char *user[],int keep[], int N, int SOP[]);
char checkpass(char *user[],int keep[], int N, int SOP[]);

int main() {
	
	int N,i,j;
	
	scanf("%d\n",&N);
	char user[N][13], *ptruser[N];
	int keep[N],SizeOfPass[N];
	
	for(i=0;i<N;i++) {
		gets(user[i]);
		fflush(stdin);
	} //get input
	
	for(i=0;i<N;i++) {
		ptruser[i] = user[i];
	} //assign address of user to ptruser
	
	checkcol(ptruser,keep,N); //check if login has 4 letters
	checklogin(ptruser,keep,N); //check if login not number and contain letters
	checksizeofpass(ptruser,keep,N,SizeOfPass);
	checkpass(ptruser,keep,N,SizeOfPass);
	
	for(i=0;i<N;i++) {
		if(keep[i] == 1) {
			for(j=0;j<=3;j++) {
				if(j != 3) {
					printf("%c",user[i][j]);
				}
				else {
					printf("%c\0\n",user[i][j]);
				}
			}
		}		
	}
	
	/*for(i=0;i<N;i++) {
		printf("//%s ",user[i]);
	}*/ //debug
	
	return 0;
}

char checkcol(char *user[],int keep[], int N) {
	int i;
	for(i=0;i<N;i++) {
		if(user[i][4] == ':') {
			keep[i] = 1;
		}
		else {
			keep[i] = 0;
		}
	}
}

char checklogin(char *user[],int keep[], int N){
	int i,j,temp;
	char Apb,num;
	for(i=0;i<N;i++) {
		for(num='0';num<='9';num++) {
			if(user[i][0] == num) {
				keep[i] = 0; // disqualify if index[0] = number
				break;
			}
		}
		if(keep[i] == 1) {
			temp=0;
			for(Apb='a';Apb<='z';Apb++) {
				if(user[i][0] == Apb) {
					temp = 1;
					break;
				}
			}
			if(temp == 0) {
				for(Apb='A';Apb<='Z';Apb++) {
					if(user[i][0] == Apb) {
						temp = 1;
						break;
					}
				}
				if(temp == 0) {
					keep[i] = 0; //disqualify if no a-z or A-Z
				}
			}
		}
	}
}

char checksizeofpass(char *user[],int keep[], int N, int SOP[]) {
	int i,j,count;
	
	for(i=0;i<N;i++) {
		count = 0;
		for(j=5;user[i][j]!='\0';j++) {
			count++;
		}
		if(keep[i] == 0) {
			SOP[i] = 0;
		}
		else {
			SOP[i] = count;
		}
	}
	for(i=0;i<N;i++) {
		if(keep[i] == 1) {
			if(!(SOP[i] >= 4 && SOP[i] <= 8)) {
				keep[i] = 0;
			}
		}
	}
}

char checkpass(char *user[],int keep[], int N, int SOP[]) {
	int i,j,cbig,csmall,cnum;
	char Apb,num;
	for(i=0;i<N;i++) {
		if(keep[i] == 1) {
			cbig = 0;
			csmall = 0;
			cnum = 0;
			for(j=5;j<6+SOP[i];j++) {			
				for(Apb='A';Apb<='Z';Apb++) {
					if(user[i][j] == Apb) {
						//printf("found b|");
						cbig = cbig + 1; //count AZ
					}
				}				
				for(Apb='a';Apb<='z';Apb++) {
					if(user[i][j] == Apb) {
						//printf("found s|");
						csmall += 1; //count az
					}
				}				
				for(Apb='0';Apb<='9';Apb++) {
					if(user[i][j] == Apb) {
						//printf("found n|");
						cnum += 1; //count number
					}
				}
			}
			//printf("user%d : cbig=%d csmall=%d cnum=%d\n",i+1,cbig,csmall,cnum);
			if(cnum >= 2 && cbig >= 1 && csmall >= 1) {
				keep[i] = 1;
			}
			else {
				keep[i] = 0;
			}
		}
	}
}
