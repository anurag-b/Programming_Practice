//============================================================================
// Name        : hash_table.cpp
// Author      : Anurag Bansal
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <string>

#include "hash.h"

int main() {
	std::cout << "!!!Hello World!!!" << std::endl; // prints !!!Hello World!!!
	hash hashy;
	hashy.AddItem("Anurag","Latte");
	hashy.AddItem("Kim","Iced Mocha");
	hashy.AddItem("Emma","Strawberry Smoothy");
	hashy.AddItem("Annie","Hot Chocolate");
	hashy.AddItem("Sarah","Passion tea");
	hashy.AddItem("Pepper","Caramel Mocha");
	hashy.AddItem("Mike","Chai tea");
	hashy.AddItem("Steve","Apple Cider");
	hashy.AddItem("Bill","Root Beer");
	hashy.AddItem("Marie","Skinny Latte");
	hashy.AddItem("Susan","Water");
	hashy.AddItem("Joe","Green Teas");
	//hashy.PrintTable();
	hashy.PrintItemsInIndex(9);
	return 0;
}
