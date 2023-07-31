/*
* This program is about how to use function templates. Function templates allows us to use 
* a single function to do similar things on different data types. For example in the following program
* I'll use the same function to add an int, a float, and string data types. 
* 
* Hence, the name Function Templates
*/

#include <iostream>
#include <string>

template <typename myTemplate>		// Template of the Add function
myTemplate Add(myTemplate var1, myTemplate var2) {
	return var1 + var2; 
}

template <typename secTemplate>		// Template of the Sub Function 
void Sub(secTemplate var1, secTemplate var2) {
	std::cout << "\nSubtracting " << var2 << " from " << var1 << " we get: " << var1 - var2 << std::endl; 
}

int main() {
	std::string firStr = "Perse";
	std::string secStr = "verance";

	std::cout << "First int: " << Add(4, 7) << std::endl;			// Same function template 
	std::cout << "First doub: " << Add(2.3, 3.4) << std::endl;		// 
	std::cout << "First Str: " << Add(firStr, secStr);				// 

	std::cout << "\n********************************************"; 
	Sub(7, 4);				// Same function template Sub
	Sub(4.5, 2.1);			// 

	return 0; 
}