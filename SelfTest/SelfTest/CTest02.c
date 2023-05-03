#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define INIT_CAPACITY 3
#define BUFFER_SIZE 50

char** names;
char** numbers;

int capacity = INIT_CAPACITY;
int n = 0;

char delim[] = " ";

int main()
{
	init_directory();
	process_command();

	return 0;
}

void init_directory()
{
	names = (char**)malloc(INIT_CAPACITY * sizeof(char*));
	numbers = (char**)malloc(INIT_CAPACITY * sizeof(char*));
}

int read_line(char str[], int limit)
{
	int ch, i = 0;

	while((ch = getchar()) != '\n')
		if 
}