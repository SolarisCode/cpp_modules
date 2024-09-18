#pragma once
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <limits.h>
#include <sstream>

class ScalarConvert {
  public :
	static void convert(const std::string & literal);

  private :
	ScalarConvert();
	~ScalarConvert();
	ScalarConvert(const ScalarConvert & obj);
	ScalarConvert & operator=(const ScalarConvert & rhs);
}