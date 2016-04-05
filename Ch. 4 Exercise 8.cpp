#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

int main(){
	
	//Start Integar Variables
	int firstsquare = 2; //Grains of Rice on the First Square
	int gor = 0; //Grains of Rice
	int square = 1; //Square number out of 64
	int amount = 2; //Sum of all previous squares
	//End Integar Variables
	
	//Start Loop Booleans
	bool input = true;
	//End Loop Booleans
	
	//Start Input Loop
	while(input){
		
		std::cout << "Enter amount option (1000, 1000000, 1000000000): ";
		std::cin >> gor;
		std::if(gor != 1000 && gor != 1000000 && gor != 1000000000){std::cout << "Invalid Input, please retry.\n";}
		std::else {input = false;}
	}
	//End Input Loop
		
	//Start Move Through Board
		std::for(amouunt < gor; ++square;)
			amount = amount * amount;
	//End Move Through Board

	//Start Report Results
		std::cout << "Square Num.: " << square << "\n" << "Original Input: " << gor << "\n" << "Amount of Grains: " << amount << "\n" << std::endl;
		calc = false;
	//End Report Results
	
	return 0;
}