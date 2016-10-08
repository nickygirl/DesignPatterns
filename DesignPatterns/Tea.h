#pragma once
#ifndef TEA_H
#define TEA_H

#include "CoffinDrinks.h"
class Tea :
	public CoffinDrinks
{
public:
	Tea();
	~Tea();
	void brew();
	void addCondiments();
	bool isCustomerWantCon();
};

#endif