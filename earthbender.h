#include "Bender.h"
#ifndef EARTHBENDER_H
#define EARTHBENDER_H

class earthbender : public Bender{
	public:
		earthbender(int, int, int, int, string);
		virtual void ataqueNormal(Bender*);
		virtual void ataqueEspecial(Bender*);

};
#endif