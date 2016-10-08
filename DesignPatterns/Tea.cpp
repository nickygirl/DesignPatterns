#include "Tea.h"


Tea::Tea()
{
}


Tea::~Tea()
{
}

void Tea::brew(){
	std::cout << "Derived: tea brew" << std::endl;
}

void Tea::addCondiments(){
	std::cout << "Derived tea add condiments" << std::endl;
}

bool Tea::isCustomerWantCon(){
	return false;
}