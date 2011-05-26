#include "cheader.h"

cHeader::cHeader() : greeting("salutations")
{

}

void cHeader::SayHello() 
{
	std::cout << greeting << std::endl;
}