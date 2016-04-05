#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
 
int main(){
	//Start Variables
	std::vector<string> v("zero","one","two","three","four","five","six","seven","eight","nine");
	std::string str = " ";
	std::int input = 0;
	std::int num = 0;
	//End Variables
	
while(true){
	//Start Input
	std::cout << "Convert from number to letters(0) or convert from letters to number(1): ";
	std::cin >> input;
	//End Input
	
	//Start Numbers to Letters
	while(input == 0){
	std::cout << "Enter a single digit number(-1 for exit): ";
	std::cin >> num;
	if(num == -1){break;}
	else if(num == 0)
		std::cout << " " << v[0] << endl;
	else if(num == 1)
		std::cout << " " << v[1] << endl;
	else if(num == 2)
		std::cout << " " << v[2] << endl;
	else if(num == 3)
		std::cout << " " << v[3] << endl;
	else if(num == 4)
		std::cout << " " << v[4] << endl;
	else if(num == 5)
		std::cout << " " << v[5] << endl;
	else if(num == 6)
		std::cout << " " << v[6] << endl;
	else if(num == 7)
		std::cout << " " << v[7] << endl;
	else if(num == 8)
		std::cout << " " << v[8] << endl;
	else if(num == 9)
		std::cout << " " << v[9] << endl;
	else {
		std::cout << " " << num << " is an invalid value." << endl;
		}
	}
	//End Numbers to Letters
	
	//Start Letters to Numbers
	while(input == 1){
	std::cout << "Enter number in letter form(exit, zero, one, two, three, ...,nine) to convert to numbers: ";
	std::cin >> str;
	if(str == "exit"){break;}
	else if(str == "zero")
		std::cout << "0" << endl;
	else if(str == "one")
		std::cout << "1" << endl;
	else if(str == "two")
		std::cout << "2" << endl;
	else if(str == "three")
		std::cout << "3" << endl;
	else if(str == "four")
		std::cout << "4" << endl;
	else if(str == "five")
		std::cout << "5" << endl;
	else if(str == "six")
		std::cout << "6" << endl;
	else if(str == "seven")
		std::cout << "7" << endl;
	else if(str == "eight")
		std::cout << "8" << endl;
	else if(str == "nine")
		std::cout << "9" << endl;
	else {std::cout << " " << str << " is invalid." << endl;}
	}
	//End Letters to Numbers
}		
	return 0;
}