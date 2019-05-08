#pragma once

namespace hws {

	using DataType = int;

	static const bool bPrintInputs = false;
	static const size_t NUMINPUTS = 10;
	static const DataType MININPUT = 1;
	static const DataType MAXINPUT = 100;

	void generateInputs(std::shared_ptr<DataType> &spInputData);
}