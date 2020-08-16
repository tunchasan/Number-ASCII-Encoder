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
		encodeProcessHandler(line);
	}
}

// Handle encode process for each content
void Encoder::encodeProcessHandler(string line)
{
	// Pass value to ContentConverter
	int *content = contentConverter(line);

	// Stores encode obeb value
	int obebResult = -1;

	for (int i = 0; i <= getWordCount(line); i++) {
		//cout << content[i] << endl;

		// Create linked list based on the encode rules
		if (obebResult == -1) {

			obebResult = 0;
			
			// Add first element to list
			// TODO
		}

		else {
			
			// Traverse and calculate Obeb for each element on the list
			// TODO

			// if calculatedObeb >= obebResult
			// TODO

			// if calculatedObeb = 0
			// TODO
		}
	}

	// Deallacote the array right after encode process
	// TODO
}

// Convert given content into words
int * Encoder::contentConverter(string content)
{
	int *contentArray = (int*)malloc(getWordCount(content) * sizeof(int));

	string word = "";

	int index = 0;

	// Splits content for backspace
	for (int i = 0; i < content.size(); i++) {

		if (content[i] != 32) {

			word += content[i];
		}

		else {

			contentArray[index] = stoi(word);

			word = "";

			index++;
		}
	}

	contentArray[index] = stoi(word);

	return contentArray;
}

// Returns given content' word count
int Encoder::getWordCount(string content)
{
	int counter = 0;

	for (int i = 0; i < content.size(); i++) {

		if (content[i] == 32) {
			counter++;
		}
	}

	return counter;
}