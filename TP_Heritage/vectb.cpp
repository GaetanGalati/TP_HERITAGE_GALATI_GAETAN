#include "vectb.h"
#include "vect.h"

vectb::vectb(int debut, int fin) : vect(End - Start + 1)
{
	Start = debut; 
	End = fin; 
}

int& vectb::operator[](int i)
{
	return vect::operator[](i - Start);
}



