#include <iostream>
using namespace std;
int main(void)
{
	int number; /* number to be added */
	int count; /* count of numbers to be added */
	int i; /* loop counter variable */
	int total; /* total of the set of numbers */
	double average; /* average of the set of numbers */
	cout << "How many numbers to process? ";
	cin >> count;

	total = 0;
	for (i = 1; i <= count; i++)
	{
		do {
			cout << "Enter number " << i << " : ";
			cin >> number;
			if (number < 1 || number > 100)
				cout << "Number must be between 1 and 100" << endl;
		} while (number < 1 || number > 100);
		total += number;
	}

	average = (double)total / count;
	cout << "Total is " << total << endl;
	cout << "Average is " << average << endl;
	return 0;
}