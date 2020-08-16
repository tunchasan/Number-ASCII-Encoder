#ifndef ENCODER_H
#define ENCODER_H

#include <string>
#include <iostream>
#include <fstream>

#include "ListManager.h"
#include "Math.h"

using namespace std;

struct Encoder {

public:

	// Get file name to be processed
	Encoder(string); 

private:

	void encodeProcessHandler(string);

	// Converts content to int array
	int *contentConverter(string);

	// Returns word count
	int getWordCount(string);
};

#endif
