#pragma once
#ifndef COFFINDRINKS_H
#define COFFINDRINKS_H

#include<iostream>
class CoffinDrinks
{
public:
	CoffinDrinks();
	~CoffinDrinks();

	void prepareRecipe();
	void boilWater();
	virtual void brew();
	void pourInCup();
	virtual void addCondiments();
	bool isCustomerWantCon();
};

#endif