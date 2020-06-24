#include <iostream>
#include <cmath>
#include <ctype.h>

/**
* Student : Deivid Santos 
* ID : 100731640
* Program : Lab 2: Logic Structures
* Description: In this project you will be writing a scoring application for an archery competition. For the purpose of
* this assignment, assume that the competition will be divided into four ends1
* (rounds). Three archers will
* compete. You will create a console C++ program that uses a nested loop to enter each archer's
* individual end scores and then displays the total score for each archer. Also calculate and display the
* overall average end score
*
**/
using namespace std;

int main(){

// Variable declarations
int count = 0;
int archerScore;
int sumScore;
int archerCompete;
int archerCount = 1;
double averageScore;

do{ //Excecutes the loop while the statement is true (loop for the competitors)

for(archerCompete = 1; archerCompete < 5; archerCompete++){ //loop for the scores
	
cout << "Please, Enter score for Archer " << archerCount << ": "; // asks user for input
while(!(cin>>archerScore)){ // Numeric validation
	
	cout << "The input can not be numeric"; //message user if its numeric
	cin.clear(); // clear the user input
	cout << "Please, Re-Enter score: "; //asks the user to re-enter a value
	cin.ignore(123, '\n'); 
} // end of numeric validation

while(archerScore <0 || archerScore > 60){ // range validation

	cout << "The Score you entered is out of range. It should be between 0-60." << endl;
	cin.clear();
	cout << "Please, Re-Enter score: ";
	cin >> archerScore;
}//end of range validating

sumScore = sumScore + archerScore; //sum all the scores

cout << "-----------------------------" << endl;
} //end of archer complete
cout << "\nThe sum of the scores are: " << sumScore <<endl; //displays the sum of the scores

cout << "********* ARCHER NUMBER :" << archerCount+1 << "**************** " << endl;
archerCount++; //increments the variable

}while(archerCount <4  ); // loop condition 

averageScore = sumScore/3; // calculates the average 
cout << "Archer average score was: " << averageScore; // displays the average.

return 0;
} 

