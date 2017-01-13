#include<stdio.h>
#include<string.h>
#define LINE_MAXLEN 200
#define PATHMAX 1000
void Lines(const char * s)
{
	
    FILE *fp1, *fp2;
    char ListPath[PATHMAX];
    strcpy(ListPath, s);
    strcat(ListPath, "\\list.txt");
    fp1 = fopen(ListPath, "r");
    char FileName[FILENAME_MAX];
    char SingleLine[LINE_MAXLEN];
    while(fgets(FileName, FILENAME_MAX, fp1)){//get one line from list, each line refers to a .c file name
        int len = strlen(FileName);
        if(FileName[len-1] == '\n') {
			FileName[len-1] = '\0';
			}		
        printf("%s: ", FileName);  
        fp2 = fopen(FileName, "r");
        
        static int sum = 0;        
        int count = 0;
        while(fgets(SingleLine, LINE_MAXLEN, fp2)){//open the correct file, according to the file name
            count++;
            sum++;
        }   
        printf("%d lines, %d lines accumulated\n", count, sum);
        printf("\n");
        fclose(fp2);
    }
    fclose(fp1);
}

