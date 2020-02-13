#pragma once
#include "vect.h"
class vectb : public vect
{
	int Start;
	int End;

public:

	vectb(int debut, int fin);
	int& operator[](int i);

};