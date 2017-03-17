#include "Bender.h"
#include <string>
#ifndef EARTHBENDER_H
#define EARTHBENDER_H
using namespace std;

class earthbender : public Bender{
	public:
		earthbender(int, int, int, int, string);
		virtual void ataqueNormal(Bender*);
		virtual void ataqueEspecial(Bender*);

};
#endif