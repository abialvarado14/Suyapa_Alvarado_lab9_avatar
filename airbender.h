#include "Bender.h"
#ifndef AIRBENDER_H
#define AIRBENDER_H
using namespace std;

class airbender : public Bender{
	public:

		airbender(int, int, int, int, string);
		virtual void ataqueNormal(Bender*);
		virtual void ataqueEspecial(Bender*);

};
#endif 