#include "Lines.h"

int main() 
{
    char filename[FILENAME_MAX];
    printf("please input file name:");
    while(gets(filename)) {
		int result = Lines(filename);
		if(result)
        	printf("line(s) of codes in the file: %d\n", result);
        printf("please input file name:(or ctrl+z to exit):");
    }
    return 0;
}

