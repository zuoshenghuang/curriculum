#pragma once

template<typename K, typename V>
class Pair
{
public:
	Pair(K k, V v) : key(k), value(v){}

	K getKey() { return key; }
	V getValue() { return value; }

	bool operator == (const Pair & other)
	{
		return key == other.key;
	}

private:
	K key;
	V value;
};
#pragma once
