#include "stdafx.h"
#include "sequential_list.h"
#include "stdlib.h"

SequentialList::SequentialList()
{

}

SequentialList::~SequentialList()
{

}

int SequentialList::init(int size)
{
	if (size <= 0)
	{
		return -1;
	}
	data.size = size;
	data.length = 0;
	data.head = (int*)malloc(size * sizeof(int));
	//for (int i = 0; i < size; i++)
	//{
	//	data.head[i] = i;
	//}
	return 0;
}

int SequentialList::insertElement(int index, int element)
{
	if(index > data.length)
	{
		return -1;
	}
	if(data.length == data.size)
	{
		return -2;
	}
	for(int i = data.length; i > index; i--)
	{
		data.head[i] = data.head[i-1];
	}
	data.head[index] = element;
	data.length += 1;
	return 0;
}

int SequentialList::deleteElement(int index)
{
	if(index >= data.length)
	{
		return -1;
	}
	if (data.length <= 0)
	{
		return -2;
	}
	for (int i = index; i < data.length-1; i++)
	{
		data.head[i] = data.head[i+1];
	}
	data.length--;
	return 0;
}

int SequentialList::modifyElement(int index, int element)
{
	if (index >= data.length)
	{
		return -1;
	}
	data.head[index] = element;
	return 0;
}

int SequentialList::selectElement(int index, int& element)
{
	if (index >= data.length)
	{
		return -1;
	}
	element = data.head[index];
	return 0;
}

int SequentialList::getListLength(int & length)
{
	length = data.length;
	return 0;
}
