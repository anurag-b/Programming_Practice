/*
 * hash.h
 *
 *
 *      Author: dark_knight
 */

#include <iostream>
#include <cstdlib>
#include <string>

#ifndef HASH_H_
#define HASH_H_

class hash{
private:
	static const int tableSize = 10;
	struct item{
		std::string name;
		std::string drink;
		item* next;
	};
	item* HashTable[tableSize];
public:
	hash();
	int Hash(std::string key);
	void AddItem(std::string name, std::string drink);
	int NumberOfItemInIndex(int index);
	void PrintTable();
	void PrintItemsInIndex(int index);

};

#endif /* HASH_H_ */
