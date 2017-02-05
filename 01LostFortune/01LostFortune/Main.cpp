//Lost Fortune - A simple C++ program to use variables and structures
#include <iostream>
#include <string>


//Primary function for processing the program
int main()
{
	const int GOLD_PIECES = 900; //Number of gold pieces available to be distributed.  Making it a const because this number shouldn't ever change.

	//Define some variables to use:
	char exitPrompt;
	std::string leaderName;
	int totalParty;
	int remainingParty;

	std::cout << "\tWelcome to Lost Fortune \n\nPlease enter the following for a personalized adventure:\n\n";
	std::cout << "Enter your last name: ";
	std::cin >> leaderName;
	std::cout << "Enter a positive number: ";
	std::cin >> totalParty;
	std::cout << "Enter a positive number, but less than the first: ";
	std::cin >> remainingParty;

	//Now output the story
	std::cout << "\n\n" << "The brave " << leaderName << " led a group of " << totalParty << " adventurers on a quest.";
	std::cout << "\nThey fought a band of ogres and lost " << totalParty - remainingParty << "... only " << remainingParty << " survived.";
	std::cout << "\nThe party was about to give up when they stumbled upon a \nburied fortune of " << GOLD_PIECES << " gold pieces.  They split the loot evenly and";
	std::cout << "\neveryone received " << GOLD_PIECES / remainingParty << " gold pieces.  " << leaderName << " kept the extra " << GOLD_PIECES % remainingParty << " \ngold pieces to keep things fair.";
	
	std::cout << "\n\nPress any key to exit.\n";
	std::cin >> exitPrompt;
	

	return 0;
}