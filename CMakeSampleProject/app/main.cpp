//
//  main.cpp
//  CMakeSampleProject
//
//  Created by Logan Miller on 9/16/22.
//

#include "config.hpp"
#include "lib.h"

#include <iostream>
#include <nlohmann/json.hpp>

int main(int argc, const char * argv[]) {
	
	// Test data
	int fibFirstTerm = 3;
	int fibSecondTerm = 5;
	int fibIterations = 8;
	int factorialTerm = 6;
	std::string testString = "I will reverse this string.";
	
	// Test function calls
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << '\n';
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << '\n';
	std::cout << "Project Name and Version: " << '\n';
	std::cout << project_name << " " << project_version << '\n';
	
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << '\n';
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << '\n';
	std::cout << "Nlohmann JSON Project Version: " << '\n';
	std::cout << NLOHMANN_JSON_VERSION_MAJOR << ".";
	std::cout << NLOHMANN_JSON_VERSION_MINOR << ".";
	std::cout << NLOHMANN_JSON_VERSION_PATCH << '\n';
	
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << '\n';
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << '\n';
	std::cout << "Sample function calls: " << '\n';
	
	std::cout << "Fibonacci Sequence starting with [" << std::to_string(fibFirstTerm) << ", " << std::to_string(fibSecondTerm) << "] for "
	<< std::to_string(fibIterations) << " iterations: " << '\n' << '\t' << "•" << fibSequence(fibFirstTerm, fibSecondTerm, fibIterations) << '\n';
	
	std::cout << "Factorial of " << std::to_string(factorialTerm) << ": " << '\n' << '\t' << "•" << std::to_string(factorial(factorialTerm)) << '\n';
	
	std::cout << "Reversing a string: " << '\n' << '\t' << "• Original string: " + testString << '\n' << '\t' << "• Reversed string: " << reverseString(testString) << '\n';
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << '\n';
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << '\n';
	
    return 0;
}
