#include<stdio.h>

template<typename Type>

Type Min(Type a, Type b)
{
	if (a > b)
	{
		return static_cast<Type> (b);
	}

	if (a < b)
	{
		return static_cast<Type> (b);
	}
}

template<>

char Min<char>(char a, char b)
{



}

