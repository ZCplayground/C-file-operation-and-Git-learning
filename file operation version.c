#include <stdio.h>
int Lines(const char * FileName)
{
	FILE *fp;
	errno_t err;
	err = fopen_s(&fp, FileName, "r");
	if (err == 0)
	{
		static int count = 0;
		int c;
		while ((c = fgetc(fp)) != EOF)
		{
			if (c == '\n') count++;
		}
		fclose(fp);
		return count;
	}
	else
	{
		printf("failed to open this file\n");
		return 0;
	}
}

int main()
{
	char filename[FILENAME_MAX];
	printf("please input file name:");
	while (gets_s(filename)) {
		int result = Lines(filename);
		if (result)
			printf("line(s) of codes accumulated: %d\n", result);
		printf("please input file name:(or ctrl+z to exit):");
	}
	return 0;
}