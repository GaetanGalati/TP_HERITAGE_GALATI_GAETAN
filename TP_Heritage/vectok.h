#pragma once
#include "vect.h"

class vectok : vect
{
public : 
	int taille();
	vectok(vectok& Vect);
	vectok(int Dim);
};

