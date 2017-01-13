//create a file name list 
#include<Windows.h>
#include<string.h>
#include<stdio.h>
#define PATHMAX 1000

void MakeList(const char * FilePath)
{   
    char BatPath[PATHMAX];
    strcpy(BatPath, FilePath);
    strcat(BatPath, "\\Text1.bat");
    FILE *fp;
    fp = fopen(BatPath, "w");
    if(fp==NULL){
    	printf("error: wrong absolute path.");
    	return;
	}
    fputs("DIR *.c /B>list.txt", fp);
    fclose(fp);
    system(BatPath); 
}
