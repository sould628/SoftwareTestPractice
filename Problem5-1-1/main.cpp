#include <iostream>

#include "../inputGenerator/hwsInputGenerator.h"

int main() {
	std::cout << "this is ComprehensionScore Problem\n";

	std::shared_ptr<hws::DataType> spInputData;

	hws::generateInputs(spInputData);


}