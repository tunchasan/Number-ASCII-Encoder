#include "Encoder.h"

// Main encode process Initializer
Encoder::Encoder(string fileName)
{
	// Read File with fileName
	ifstream file(fileName);

	string line = "";

	// Line by Line read process on the file
	while (getline(file, line)) {

		// Start main process for each line
		EncodeProcessHandler(line);
	}
}

// Handle encode process for each content
void Encoder::EncodeProcessHandler(string line)
{
	cout << line << endl;
}
