#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
 using namespace std;
int main(){
	//Start Variables
	vector<string> v{"zero","one","two","three","four","five","six","seven","eight","nine"};
	string str = " ";
	int input = 0;
	int num = 0;
	//End Variables
	
while(true){
	//Start Input
	cout << "Convert from number to letters(0) or convert from letters to number(1): ";
	cin >> input;
	//End Input
	
	//Start Numbers to Letters
	while(input == 0){
	cout << "Enter a single digit number(-1 for exit): ";
	cin >> num;
	if(num == -1){break;}
	else if(num == 0)
		cout << " " << v[0] << endl;
	else if(num == 1)
		cout << " " << v[1] << endl;
	else if(num == 2)
		cout << " " << v[2] << endl;
	else if(num == 3)
		cout << " " << v[3] << endl;
	else if(num == 4)
		cout << " " << v[4] << endl;
	else if(num == 5)
		cout << " " << v[5] << endl;
	else if(num == 6)
		cout << " " << v[6] << endl;
	else if(num == 7)
		cout << " " << v[7] << endl;
	else if(num == 8)
		cout << " " << v[8] << endl;
	else if(num == 9)
		cout << " " << v[9] << endl;
	else {
		cout << " " << num << " is an invalid value." << endl;
		}
	}
	//End Numbers to Letters
	
	//Start Letters to Numbers
	while(input == 1){
	cout << "Enter number in letter form(exit, zero, one, two, three, ...,nine) to convert to numbers: ";
	cin >> str;
	if(str == "exit"){break;}
	else if(str == "zero")
		cout << "0" << endl;
	else if(str == "one")
		sout << "1" << endl;
	else if(str == "two")
		cout << "2" << endl;
	else if(str == "three")
		cout << "3" << endl;
	else if(str == "four")
		cout << "4" << endl;
	else if(str == "five")
		cout << "5" << endl;
	else if(str == "six")
		cout << "6" << endl;
	else if(str == "seven")
		cout << "7" << endl;
	else if(str == "eight")
		cout << "8" << endl;
	else if(str == "nine")
		cout << "9" << endl;
	else {cout << " " << str << " is invalid." << endl;}
	}
	//End Letters to Numbers
}		
	return 0;
}
