#include<stdio.h>
#include<syslog.h>
#include <errno.h>

int main(int argc, char **argv)
{
	openlog("writer.c", LOG_PID, LOG_USER);
	if(argc < 2)
	{
		printf("Please enter atleast 2 args\n");
		return 1;
	}
	char * fileName = NULL;
	char * content = NULL;
	
	for (int i = 1; i < argc; ++i)
    	{
        	printf("argv[%d]: %s\n", i, argv[i]);
    	}

	fileName = argv[1];
	content = argv[2];


	FILE *fptr;

	// Open a file in writing mode
	fptr = fopen(fileName, "w");
	if(!fptr)
	{

		syslog(LOG_DEBUG, "Error opening file %s, %d", fileName, errno);
		return 1;	
	}

	syslog(LOG_DEBUG, "Writing %s to %s", content, fileName);
	fprintf(fptr,"%s", content);
	fclose(fptr);

	return 0;
}


