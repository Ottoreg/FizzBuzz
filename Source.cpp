#include <iostream>
#include <string>

using namespace std;

int main() {
	
	// FIZZ * 3
	// BUZZ * 5
	// FIZZ BUZZ *5 * 3

	for (int i = 1; i < 101; i++)
	{
		string toDisplay = "";

		if ((i % 3 == 0) && (i % 5 == 0))
		{
			toDisplay += "FIZZBUZZ";
		}
		else if (i%5 == 0)
		{
			toDisplay += "BUZZ";
		}
		else if (i % 3 == 0)
		{
			toDisplay += "FIZZ";
		}
		else 
		{
			toDisplay = to_string(i);
		}

		cout << toDisplay << endl;
		
	}

	return 0;
}