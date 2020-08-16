#include "Encoder.h"

// Main encode process Initializer
Encoder::Encoder(string fileName)
{
	// Read File with fileName
	ifstream file(fileName);

	string line = "";

	// Line by Line read process on the file
	while (getline(file, line))
	{
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

	ListManager *manager = new ListManager();

	for (int i = 0; i <= getWordCount(line); i++)
	{
		int number = content[i];

		// Create linked list based on the encode rules
		if (obebResult == -1)
		{
			obebResult = 0;

			// Add first element to list
			manager->addFirstElemToList(number);
		}

		else
		{
			Node *travelar = manager->getLinkedList();

			Node *listRoot = manager->getLinkedList();

			while (true)
			{

				if (Math::OBEB(travelar->getValue(), number) >= obebResult)
				{
					// Update current obeb result
					obebResult = Math::OBEB(travelar->getValue(), number);

					int modResult = Math::MOD(
						Math::MAX(number, travelar->getValue()),
						Math::MIN(number, travelar->getValue()));

					if (modResult == 0)
					{
						manager->addElemToRight(number, travelar);

						break;
					}

					else
					{
						manager->addElemToLeft(number, modResult, travelar);

						break;
					}
				}

				else if (travelar->next == listRoot)
				{
					int modResult = Math::MOD(
						Math::MAX(number, travelar->getValue()),
						Math::MIN(number, travelar->getValue()));

					if (modResult == 0)
					{
						manager->addElemToRight(number, travelar);

						break;
					}

					else
					{
						manager->addElemToLeft(number, modResult, travelar);

						break;
					}
				}

				travelar = travelar->next;
			}
		}
	}

	// Pass processed list to "asciiConverter" for final process of Encoder
	asciiConverter(manager->getLinkedList(), manager);
}

// Convert given content into words
int *Encoder::contentConverter(string content)
{
	int *contentArray = (int *)malloc(getWordCount(content) * sizeof(int));

	string word = "";

	int index = 0;

	// Splits content for backspace
	for (int i = 0; i < content.size(); i++)
	{
		if (content[i] != 32)
		{
			word += content[i];
		}

		else
		{
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

	for (int i = 0; i < content.size(); i++)
	{

		if (content[i] == 32)
		{
			counter++;
		}
	}

	return counter;
}

// Number to Ascii
void Encoder::asciiConverter(Node *root, ListManager *manager)
{

	string encodedText = ""; // The encoded text

	Node *travelar = root;

	char toAscii;

	while (travelar->next != root)
	{

		toAscii = travelar->getValue();

		encodedText += toAscii;

		travelar = travelar->next;
	}

	toAscii = travelar->getValue();

	encodedText += toAscii;

	cout << "Password ...: " << encodedText << endl;

	// Memory Deallaction Initializer
	// manager->dellactionOnList();
}
