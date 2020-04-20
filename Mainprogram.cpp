//Input and output stream header.
#include <iostream>
//Input and output header for terminal. 
#include <stdio.h> 
//This header defines several general purpose functions, including dynamic memory management, random number generation, communication with the environment, integer arithmetics, searching, sorting and converting.
#include <stdlib.h>
//This header is for the string class.
//This is for x86 arch #include <string>
#include <string>
using namespace std;

void optionOne();
void optionTwo();
void optionThree();
void optionFour();
void optionFive();
void optionSix();

int main(){

	//string optionOne, optionTwo, optionThree, optionFour, optionFive, optionSix;
	//Intergers for options.
	int entry;
	
	string option[6]{
		 "Nightrider LED format.",
		 "Every Other One LED format.",
		 "Every Other Yellow LED format.",
		 "Every Other Red LED format.",
		 "Alternate between 1 and 2, 7 and 8, 3 and 4, then 5 and 6 LED format.",
		 "Checking surveillance system."
	};

		//Output of the program, and listing the options.
		cout	<< "Welcome to your personal assistant.\n"
				<< "I can upload the below LED patterns to your ardiuno, or check the area surveillance system if anything is detected. \n";

	while(true){		
		cout	<< "Here is the list of options.\n" << "\n" 
				<< "Option 1: " << option[0]   << " This will light up the LEDs starting at the first to the last, and go back and forth.\n"
				<< "Option 2: " << option[1]   << " This will light every other Yellow LED first to last, and Red LED first to last. After that, it will do the reverse.\n"
				<< "Option 3: " << option[2] << " This will light every Yellow LED with a one second delay, then loop.\n"
				<< "Option 4: " << option[3]  << " This will light every Red LED with a one second delay, then loop.\n"
				<< "Option 5: " << option[4]  << " This will light the LEDs as it's described.\n"
				<< "Option 6: " << option[5]   << " This will check the area surveillance system if anything is detected.\n"
				<< "\n"
				<< "Now enter one of the above options.\n";
		cin 	>> entry;

	
		//Check if entry value is 1.	
		if (entry == 1){
			cout 	<< "Running " << option[0] << "\n";
			optionOne();
			return 0;
		}		
		//Check if entry value is 2.
		else if (entry == 2){
			cout 	<< "Running " << option[1] << "\n";
			optionTwo();
			return 0;
		}
		//Check if entry value is 3.
		else if (entry == 3){
			cout 	<< "Running " << option[2] << "\n";	
			optionThree();
			return 0;
		}
		//Check if entry value is 4.
		else if (entry == 4){
			cout 	<< "Running " << option[3] << "\n";	
			optionFour();
			return 0;
		}
		//Check if entry value is 5.
		else if (entry == 5){
			cout 	<< "Running " << option[4] << "\n";	
			optionFive();
			return 0;
		}
		//Check if entry value is 6.
		else if (entry == 6){
			cout 	<< "Running " << option[5] << "\n";	
			cout 	<< "Check your telegram application for the results." << "\n";
			optionSix();
			return 0;
		}
		//Entry is not valid.
		else{
			cout << "\033[1;31mYOU HAVE NOT ENTERED A VALID ENTRY, PLEASE RETRY.\033[0m\n" << "\n" << "\n";							
		}
						
	}
	

	return 0;
}

void optionOne(){
	system("/home/pi/Pictures/forCPPproject/option1.sh");
}	
	
void optionTwo(){
	system("/home/pi/Pictures/forCPPproject/option2.sh");
}	
	
void optionThree(){
	system("/home/pi/Pictures/forCPPproject/option3.sh");
}	

void optionFour(){
	system("/home/pi/Pictures/forCPPproject/option4.sh");
}	

void optionFive(){
	system("/home/pi/Pictures/forCPPproject/option5.sh");
}	

void optionSix(){
	system("/home/pi/Pictures/forCPPproject/option6.sh");
}	
