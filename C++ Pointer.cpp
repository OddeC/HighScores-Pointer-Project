// Shjon Oelke
// Pointer Project

#include <iostream>
#include <string>

using namespace std;

void increase(int* const array, const int numElements);
void display(const int* const array, const int numElements);

int main()
{
	cout << "Starting application..." << endl;
	cout << "generating high score list" << endl;
	const int numScores = 5;
	int highScores[numScores] = { 4300,3850,4850,3600,4500 };

	cout << "Displaying high scores..." << endl;
	cout << *highScores << endl;
	cout << *(highScores + 1) << endl;
	cout << *(highScores + 2) << endl;
	cout << *(highScores + 3) << endl;
	cout << *(highScores + 4) << endl;
	cout << *(highScores + 5) << endl;

	cout << "Detecting change to high scores. Adjusting..." << endl;
	increase(highScores, numScores);
	cout << "Displaying high scores..." << endl;
	display(highScores, numScores);

	return 0;
}

void increase(int* const array, const int numElements)
{
	for (int i = 0; i < numElements; i++)
	{
		array[i] += 1000;
	}
}
 
void display(const int* const array, const int numElements) {
	for (int i = 0; i < numElements; i++)
	{
		cout << array[i] << endl;
	}
}