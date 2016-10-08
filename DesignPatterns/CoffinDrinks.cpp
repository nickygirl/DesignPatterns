#include "CoffinDrinks.h"


CoffinDrinks::CoffinDrinks()
{
}


CoffinDrinks::~CoffinDrinks()
{
}

void CoffinDrinks::prepareRecipe(){
	boilWater(); 
	brew();
	pourInCup();
	if (isCustomerWantCon())
		addCondiments();
}

void CoffinDrinks::boilWater(){
	std::cout << "Base: boil water" << std::endl;
}

void CoffinDrinks::brew(){

}

void CoffinDrinks::pourInCup(){
	std::cout << "Base: pour in cup" << std::endl;
}

void CoffinDrinks::addCondiments(){

}

bool CoffinDrinks::isCustomerWantCon(){
	return true;
}