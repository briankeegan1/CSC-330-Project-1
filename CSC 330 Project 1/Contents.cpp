#include "Contents.h"

void Contents::setItemName(string itemName[], int size)
{
	for (int i = 0; i < size; i++)
	{
		this->itemName[i] = itemName[i];
	}
}

void Contents::setQuantity(float *quantity, int size)
{
	for (int i = 0; i < size; i++)
	{
		this->quantity[i] = quantity[i];
	}
}

string Contents::getItemName(int index)
{
	return itemName[index];
}

float Contents::getQuantity(int index)
{
	return quantity[index];
}
