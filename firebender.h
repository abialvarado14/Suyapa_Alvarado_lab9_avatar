#include "Bender.h"
#ifndef FIREBENDER_H
#define FIREBENDER_H
class firebender : public Bender{	
	public:
		firebender(int, int, int, int, string);
		virtual void ataqueNormal(Bender*);
		virtual void ataqueEspecial(Bender*);
};
#endif