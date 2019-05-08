#include <iostream>
#include <time.h>
#include "hwsInputGenerator.h"

void hws::generateInputs(std::shared_ptr<hws::DataType> &spInputData)
{
	
	spInputData = std::move(std::shared_ptr<DataType>(new DataType[NUMINPUTS], [](DataType *p) {delete [] p; }));
	srand(time(nullptr));
	for (size_t i = 0; i < NUMINPUTS; ++i) {
		auto data = rand();
		auto start = MININPUT;
		auto end = MAXINPUT;

		auto N = (data % (static_cast<int>(end) - static_cast<int>(start) + 1)) + start;

		spInputData.get()[i] = N;
		if (bPrintInputs) {
			std::cout << N << std::endl;
		}
	}
}