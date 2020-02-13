#include "vect.h"

vect::vect(int Nelem)
{
	nelem = Nelem;
	ptrAdr = &nelem;
}

vect::~vect()
{
}

int& vect::operator[](int nelem)
{
	return ptrAdr[nelem];
}
