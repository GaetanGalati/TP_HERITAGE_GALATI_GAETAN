#include "vectok.h"

vectok::vectok(vectok& Vect) : vect(Vect)
{
	for (int i = 0; i < nelem; i++)
	{
		ptrAdr[i] = Vect.ptrAdr[i];
	}
}

vectok::vectok(int Dim) : vect(Dim)
{

}

int vectok::taille()
{
	return nelem;
}
