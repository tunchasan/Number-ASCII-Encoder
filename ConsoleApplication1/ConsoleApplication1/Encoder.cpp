#include "Encoder.h"

#include <fstream>

void Encoder::EncodeFromFile(string fileName)
{
	// Read File with fileName line by line
	ifstream file(fileName);

	string line = "";

	while (getline(file, line)) {
		cout << line << endl;
	}

	// Start main process for each line
}
