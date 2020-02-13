#pragma once
class vect
{
protected:
	int nelem;
	int* ptrAdr;
public :

	vect(int nelem);
	~vect();
	int& operator[] (int nelem);
};

