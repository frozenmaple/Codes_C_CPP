//demo for file copy
#include <stdio.h>
#include <stdlib.h>

int copyfile(char *fileread, char *filewrite);

int main()
{
	char readlist[100];  //list for files to be read, i.e., to be copied from
	char writelist[100]; //list for files to be writed, i.e., to be copied to

	printf("Files to be copied from: \n");
	scanf("%s", readlist);
	printf("Files to be copied to: \n");
	scanf("%s", writelist);

	if ((copyfile(readlist, writelist)) == 0)
	{
		printf("file copied successfully\n");
	}
	else
	{
		printf("failed\n");
	}

	return 0;
}

int copyfile(char *fileread, char *filewrite)
{
	FILE *fpread;
	FILE *fpwrite;
	int buf_len = 1024 * 4;
	//int *pointer = (int *)malloc(buf_len); //allocate free memory for buffering
	void *pointer = malloc(buf_len);
	int read_count;

	if (pointer == NULL)
	{
		printf("cannot allocate enough memory\n");
		return EXIT_FAILURE;
	}

	if ((fpread = fopen(fileread, "rb")) == NULL || (fpwrite = fopen(filewrite, "wb")) == NULL)
	{
		printf("cannot open files\n");
		return EXIT_FAILURE;
	}

/*
通过fread()函数，每次从 fileRead 文件中读取 bufferLen 个字节，放到缓冲区，
再通过fwrite()函数将缓冲区的内容写入fileWrite文件。
正常情况下，每次会读取bufferLen个字节，即readCount=bufferLen；
如果文件大小不足bufferLen个字节，或者读取到文件末尾，实际读取到的字节就会小于bufferLen，即readCount<bufferLen。
所以通过fwrite()写入文件时，应该以readCount为准。
*/
	while ((read_count = fread(pointer, 1, buf_len, fpread)) > 0)
	{
		fwrite(pointer, read_count, 1, fpwrite);
	}

	free(pointer);
	fclose(fpread);
	fclose(fpwrite);

	return 0;
}
