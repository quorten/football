//Football

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <cmath>

using namespace std;

main()
{
	int numPlayerWon = 0;
	int numComputerWon = 0;

	srand(time(0));
	cout << "                                     Football\n                           Vikings versus the Packers\n";
		

	while (true)
	{
		int playerNumber;
		int playerGuess;
		int computerNumber;
		int computerGuess;
		bool exit;

		while (true)
		{
			cout << "Enter your winning number from 0 to 1,000,000: ";
			cin >> playerNumber;
			if (playerNumber >= 0 && playerNumber <= 1000000)
				break;
		}
		while (true)
		{
			cout << "Enter your guess of the Packer's winning number(0-1,000,000): ";
			cin >> playerGuess;
			if (playerGuess >= 0 && playerGuess <= 1000000)
				break;
		}
		computerNumber = rand() % 1000001;
		computerGuess = rand() % 1000001;

		if (abs(computerNumber - playerGuess) == abs(playerNumber - computerGuess))
		{
			int tieNum = abs(computerNumber - playerGuess);
			cout << "It was a tie. " << tieNum << " to " << tieNum << ".\n";
		}
		if (abs(computerNumber - playerGuess) < abs(playerNumber - computerGuess))
		{
			numPlayerWon++;
			cout << "Vikings won! " << abs(playerNumber - computerGuess) << " to " << abs(computerNumber - playerGuess) << ".\n";
		}
		if (abs(computerNumber - playerGuess) > abs(playerNumber - computerGuess))
		{
			numComputerWon++;
			cout << "Vikings lost. " << abs(computerNumber - playerGuess) << " to " << abs(playerNumber - computerGuess) << ".\n";
		}
		if (numPlayerWon == 1)
			cout << "Vikings won " << numPlayerWon << " time so far.\n";
		else
			cout << "Vikings won " << numPlayerWon << " times so far.\n";
		if (numComputerWon == 1)
			cout << "Packers won " << numComputerWon << " time so far.\n";
		else
			cout << "Packers won " << numComputerWon << " times so far.\n";
		while (true)
		{
			char input = ' ';
			cout << "Play again?(y/n): ";
			cin >> input;
			if (input == 'y')
			{
				exit = false;
				break;
			}
			if (input == 'n')
			{
				exit = true;
				break;
			}
		}
		if (exit == true)
			break;
	}
}
