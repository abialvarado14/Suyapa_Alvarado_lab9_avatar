#include "Bender.h"
#ifndef WATERBENDERS_H
#define WATERBENDERS_H
class waterbenders : public Bender{	
	public:


		waterbenders(int, int, int, int, string);
		virtual void ataqueNormal(Bender*);
		virtual void ataqueEspecial(Bender*);
};
#endif