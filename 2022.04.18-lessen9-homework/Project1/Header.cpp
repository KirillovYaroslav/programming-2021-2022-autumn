#include "Header.h"

void ArrayList::expand(int count)
{
	int* newdata = new int[count + this->capacity];
	for (int i = 0; i < this->capacity; ++i)
	{
		newdata[i] = this->data[i];
	}
	delete[] this->data;
	this->data = newdata;
	this->capacity += count;
}

void ArrayList::swap(int posi, int posj)
{
	int temp = 0;
	temp = this->data[posi];
	this->data[posi] = this->data[posj];
	this->data[posj] = temp;
}

int ArrayList::ind(int index)
{
	if (index < 0)
	{
		pushbegin(0);
		return 0;
	}
	if (index >= this->count)
	{
		pushend(0);
		return this->count - 1;
	}
	return index;
}

ArrayList::ArrayList(int capacity)
{
	this->capacity = capacity;
	this->count = 0;
	this->data = new int[capacity];
}

ArrayList::ArrayList(const ArrayList& list)
{
	this->capacity = list.count;
	this->count = list.count;
	this->data = new int[list.count];
	for (int i = 0; i < list.count; ++i)
	{
		this->data[i] = list.data[i];
	}
}

ArrayList::~ArrayList()
{
	this->count = 0;
	this->capacity = 0;
	for (int i = 0; i < this->capacity; ++i)
	{
		this->data[i] = 0;
	}
	delete[] this->data;
}

void ArrayList::Swap(int a, int b)
{
	swap(a, b);
}

void ArrayList::pushend(int element)
{
	if (this->count == this->capacity)
	{
		expand(this->capacity);
	}
	this->data[this->count] = element;
	this->count++;
}

void ArrayList::pushbegin(int element)
{
	if (this->count == this->capacity)
	{
		expand(this->capacity);
	}
	for (int i = this->count; i > 0; --i)
	{
		this->data[i] = this->data[i-1];
	}
	this->data[0] = element;
	this->count++;
}

void ArrayList::insert(int element, int position)
{
	if (position < count && position >= 0)
	{
		if (this->count == this->capacity)
		{
			expand(this->capacity);
		}
		for (int i = this->count; i > position; --i)
		{
			this->data[i] = this->data[i - 1];
		}
		this->data[position] = element;
		this->count++;
	}
	else if(position >= count)
	{
		if (this->count == this->capacity)
		{
			expand(this->capacity);
		}
		this->data[this->count] = element;
		this->count++;
	}
	else if (position < 0)
	{
		for (int i = this->count; i > 0; --i)
		{
			this->data[i] = this->data[i - 1];
		}
		this->data[0] = element;
		this->count++;
	}
}

int ArrayList::extractbegin()
{
	int begin = this->data[0];
	for (int i = 0; i < count - 1; ++i)
	{
		this->data[i] = this->data[i + 1];
	}
	count--;
	return begin;
}

int ArrayList::extractend()
{
	this->count--;
	return this->data[this->count];
}

int ArrayList::extract(int position)
{
	if (position >= 0 && position < count)
	{
		int begin = this->data[position];
		for (int i = position; i < count; ++i)
		{
			this->data[i] = this->data[i + 1];
		}
		count--;
		return begin;
	}
	else if (position < 0)
	{
		int begin = this->data[0];
		for (int i = 0; i < count - 1; ++i)
		{
			this->data[i] = this->data[i + 1];
		}
		count--;
		return begin;
	}
	else
	{
		this->count--;
		return this->data[this->count];
	}
}

int& ArrayList::operator[](int pos)
{
	return data[ind(pos)];
}


void ArrayList::qsort(int begin, int end)
{
	int mid = 0;
	int temp = 0;
	int i = begin;
	int j = end;
	mid = this->data[(i + j) / 2]; 
	do
	{
		while (this->data[i] < mid)
		{
			++i;
		}
		while (this->data[j] > mid)
		{
			--j;
		}
		if (i <= j) 
		{
			temp = this->data[i];
			this->data[i] = this->data[j];
			this->data[j] = temp;
			++i;
			--j;
		}
	}
	while (i < j);
	if (begin < j)
	{
		qsort(begin, j);
	}
	if (i < end)
	{
		qsort(i, end);
	}
}

void ArrayList::sort()
	{
		qsort(0, count-1);
	}


std::ostream& operator<<(std::ostream& stream, ArrayList& list)
{
	stream << "[" << list.count << "/" << list.capacity << "] {";
	if (list.count == 0)
	{
		stream << "EMPTY";
	}
	else
	{
		for (int i = 0; i < list.count - 1; ++i)
		{
			stream << list.data[i] << ", ";
		}
		stream << list.data[list.count - 1];
	}
	stream << "}";
	return stream;
}