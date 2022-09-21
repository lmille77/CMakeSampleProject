//
//  lib.cpp
//  CMakeSampleProject
//
//  Created by Logan Miller on 9/16/22.
//
#include <vector>
#include <string>
#include <stdio.h>

#include "lib.h"

void printHelloWorld() {
    std::cout << "Hello World!";
}

std::string fibSequence(int firstNumber, int secondNumber, int iterations) {
	std::string output;
    int thirdNumber = firstNumber + secondNumber;
    
	output = "[" + std::to_string(firstNumber) + ",";
	output += " " + std::to_string(secondNumber)+ + ",";

	while (iterations - 2 > 0) {
		output +=  " " + std::to_string(thirdNumber) + ",";
		firstNumber = secondNumber;
		secondNumber = thirdNumber;
		thirdNumber = firstNumber + secondNumber;
		iterations--;
	}
	output.pop_back();
	output += "]";
	return output;
}

int factorial(int number) {
	if (number == 1) {
		return 1;
	} else {
		return number * factorial(number - 1);
	}
}

std::string reverseString(std::string input) {
	if (input.length() == 0) {
		return "";
	} else {
		return reverseString(input.substr(1)) + input[0];
	}
}
