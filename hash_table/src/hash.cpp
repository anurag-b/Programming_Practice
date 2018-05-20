/*
 * hash.cpp
 *
 *
 *      Author: dark_knight
 */
#include <iostream>
#include <cstdlib>
#include <string>

#include "hash.h"

hash::hash() {
	// TODO Auto-generated constructor stub
	for(int i = 0; i < tableSize; i++){
		HashTable[i] = new item;
		HashTable[i]-> name = "empty";
		HashTable[i]-> drink = "empty";
		HashTable[i]-> next = NULL;
	}
}

int hash::Hash(std::string key){
	int hash = 0;
	int index;
	for(int i = 0; i<key.length(); i++){
		hash += (int)key[i];
	}
	index = hash % tableSize;
	return index;
}
void hash::AddItem(std::string name, std::string drink){
	int index = Hash(name); //get index
	if(HashTable[index] -> name == "empty"){
		HashTable[index] -> name = name;
		HashTable[index] -> drink = drink;
	}
	else{
		item* Ptr = HashTable[index];
		item* n = new item;
		//passing name and drink pointer n pointing
		//to new item and starting it there and then go to end
		//find end of list
		n->name = name;
		n->drink = drink;
		n->next = NULL;
		while(Ptr->next != NULL){
			Ptr = Ptr->next;
		}
		Ptr->next = n; //link last item to newly created item
	}
}

//helper function
int hash::NumberOfItemInIndex(int index){
	int count = 0;
	if(HashTable[index]->name == "empty"){
		return count;
	}
	else{
		count++;
		item* Ptr = HashTable[index];
		while(Ptr->next != NULL){
			count++;
			Ptr = Ptr->next;
		}
	}
	return count;
}

void hash::PrintTable(){
	int number;
	for(int i = 0; i < tableSize; i++){
		number = NumberOfItemInIndex(i);
		std::cout<<"-------------------\n";
		std::cout<<"index = "<<i<<std::endl;
		std::cout<<HashTable[i]->name<<std::endl;
		std::cout<<HashTable[i]->drink<<std::endl;
		std::cout<<"# of items "<<number<<std::endl;
		std::cout<<"-------------------\n";
	}
}
 void hash::PrintItemsInIndex(int index){
	 item* Ptr = HashTable[index];//1st item in index
	 if(Ptr->name == "empty"){
		 std::cout<<"Bucket = "<<index<<"is empty";
	 }
	 else{
		 std::cout<<"index = "<<index<<" contains the list below\n";
		 while(Ptr != NULL){
			 std::cout<<"-------------------\n";
			 std::cout<<Ptr->name<<std::endl;
			 std::cout<<Ptr->drink<<std::endl;
			 std::cout<<"-------------------\n";
			 Ptr = Ptr->next; //goto next pointer
		 }
	 }
 }
