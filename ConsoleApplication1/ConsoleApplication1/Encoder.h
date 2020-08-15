#ifndef ENCODER_H
#define ENCODER_H

#include <string>
#include <iostream>
#include <fstream>

#include "ListManager.h"

using namespace std;

struct Encoder {

public:

	// Get file name to be processed
	Encoder(string); 

private:

	void EncodeProcessHandler(string);
};

#endif
