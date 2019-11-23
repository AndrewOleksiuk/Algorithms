#pragma once
#include <iostream>
#include <bitset>

using namespace std;

class BitSet
{
private:
	int set[8];
public:
	BitSet()
	{
		for (int i = 0; i < 8; i++)
		{
			set[i] = false;
		}
	}
	BitSet(const BitSet& other)
	{
		for (int i = 0; i < 8; i++)
		{
			set[i] = other.set[i];
		}
	}


	int getIndex(char elem)
	{
		int result = elem / 32;
		return result;
	}

	int getBit(unsigned char elem)
	{
		int result = elem % 32;
		return result;
	}
	
	void add(unsigned char elem)
	{
		int i = getIndex(elem);
		int j = getBit(elem);
		set[i] |= 0x1 << (j);
	}

	void remove(unsigned char elem)
	{
		int i = getIndex(elem);
		int j = getBit(elem);
		set[i] &= ~(0x1 << (j));
	}

	void  unionSet(BitSet set1, BitSet set2)
	{
		for (int i = 0; i < 8; i++)
		{
			set[i] = set1.set[i] | set2.set[i];
		}
	}

	void interSet(BitSet set1, BitSet set2)
	{
		for (int i = 0; i < 8; i++)
		{
			set[i] = set1.set[i] & set2.set[i];
		}
	}

	void except(BitSet set1, BitSet set2)
	{
		for (int i = 0; i < 8; i++)
		{
			set[i] = set1.set[i] & ~(set2.set[i]);
		}
	}

	bool isInSet(unsigned char element)
	{
		bool result;
		int i = getIndex(element);
		int j = getBit(element);
		result = set[i] & 0x1 << (j);
		return result;
	}
};

