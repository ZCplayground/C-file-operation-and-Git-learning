#include "MakeList.h"
#include "Lines.h"

int main()
{ 
	printf("please input a absolute path of a file folder:");
    char PathofFolder[PATH_MAX]; 
    while(gets(PathofFolder))
    {
    	MakeList(PathofFolder);    
    	Lines(PathofFolder);
    	printf("please input a absolute path of a file folder(or ctrl+z to exit):");
	}
	printf("Done. Thanks for using!");
    system("pause");
    return 0;
}  
