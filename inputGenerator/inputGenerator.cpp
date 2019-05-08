#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "hwsInputGenerator.h"


int main() {

	std::shared_ptr<hws::DataType> spInputData;

	hws::generateInputs(spInputData);
	std::cout << spInputData.use_count() << std::endl;

	for (int i = 0; i < hws::NUMINPUTS; ++i) {
		std::cout << spInputData.get()[i] << std::endl;
	}

	return 0;
}
