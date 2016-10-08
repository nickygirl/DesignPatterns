// DesignPatterns.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"Tea.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Tea t;
	CoffinDrinks * p = &t;
	t.prepareRecipe();
	p->prepareRecipe();
	std::cin.get();
	return 0;
}

