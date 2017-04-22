#include<iostream>
#include<string>
using namespace std;

int main() {

	//declarations

	//for this project, we're going to break down all
	//of the components of name, and assign them to
	//firstName and lastName

	string name = "Ms. Maria Diaz";
	string firstName = "";
	string lastName = "";
	string gender = "";

	//we will need to find the index of the space or the address
	//locations, so we'll make a variable for the index of the space

	int indexOfSpace = 0;

	//We also want to know what the index of the space before is and the space
	//after, so that we don't grab those as well
	
	int indexOfSpaceBefore = 0;
	int indexOfSpaceAfter = 0;
	int lengthOfString = 0;

	//We're going to use this variable to see if the
	//user wants to do it again
	char tryAgain = 'y';

	//get user input
	while (tryAgain == 'y' || tryAgain == 'Y') {
		cout << "Enter your full name with prefix: ";
		//Just like last week, we shouldn't use cin because it would
		//just take the first word, getline will take in the whole line
		getline(cin, name);

		gender = name.substr(0, name.find(" ", 0));
		//first Parameter is the starting index
			//second parameter is the length
			//and we want the prefix (eg. mr, mrs) before the first space
		//var.find(thing you're looking for, starting point)
		//substr(starting point, length of thing you want to grab)
		if (gender == "Mr." || gender == "Mr" || gender == "Sir") {
			cout << "Gender: Male" << endl;
		}
		else if (gender == "Ms." || gender == "Ms" || gender == "Miss" || gender == "Mrs.") {
			cout << "Gender: Female" << endl;
		}

		//01234567890123
		//Ms. Maria Diaz
		indexOfSpaceBefore = name.find(" ", 0);
		indexOfSpaceAfter = name.find(" ", indexOfSpaceBefore + 1);
		lengthOfString = name.length();

		//obtain first name
	
		firstName = name.substr(indexOfSpaceBefore + 1, indexOfSpaceAfter - indexOfSpaceBefore - 1);
		
		cout << firstName << endl;

		//obtain the last name
		lastName = name.substr(indexOfSpaceAfter + 1, lengthOfString - indexOfSpaceAfter - 1);

		cout << lastName << endl;

		cout << "Try Again? Y or N?" << endl;

		cin >> tryAgain;
	}




	system("pause");
	return 0;
}