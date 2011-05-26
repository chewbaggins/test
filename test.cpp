#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string.h>

#include "cHeader.h"

int main(int argc, char** argv)
{
	char word[] = "word";

	char* wordp = "word";

	int length = strlen(wordp);
	length = strlen((char*)argv);

	cHeader Header;
	Header.SayHello();
	
	return 1;
}