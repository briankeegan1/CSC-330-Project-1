#include "Contents.h"

void Contents::setItemName(string itemName)
{
	this->itemName.push_back(itemName);
}

void Contents::setQuantity(int quantity)
{
	this->quantity.push_back(quantity);
}

string Contents::getItemName(int index)
{
	return itemName.at(index);
}

int Contents::getQuantity(int index)
{
	return quantity.at(index);
}

int Contents::getVectSize()
{
	return itemName.size();
}

void Contents::emptyVectors()
{
	int temp = itemName.size();
	for (int i = 0; i < temp; i++)
	{
		itemName.pop_back();
		quantity.pop_back();
	}
}