//This program reads from two files and decodes one file.
//Programmer: Badtothebunny
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, char** argv) {
	string code;
	char let;
	fstream filecode("code.dat");
	fstream filemes("message.dat");
	//Below, I am testing whether my files open or not.
	if (!filecode)
	{
		cout<<"Unable to open code file.";
		return 0;
	}
	if (!filemes)
	{
		cout<<"Unable to open message file";
		return 0;
	}
	//If both files opened, then I can continue on with the program. 
	//First, I am showing the user the data of the first file.
	while ((filecode.peek())!= EOF)
	{	
		
	}
	return 0;
}

