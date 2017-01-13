#include <stdio.h>
int Lines(const char * FileName)
{
	FILE *fp;
	fp=fopen(FileName,"r");
	if(fp==NULL)
	{
		printf("failed to open this file\n");
		return 0;
	}
	int count = 0, c;
	while((c = fgetc(fp)) != EOF)
	{
		if(c == '\n') count++;
	}
	fclose(fp);
	return count;
}
