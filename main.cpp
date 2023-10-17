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
	printf("”šˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ");
	return 0;
}

int main()
{
	char a = 'a';
	char b = 'b';

	printf("%d\n", Min<int>(200, 90));


	printf("%f\n", Min<float>(10.0f, 90.0f));


	printf("%f\n", Min<double>(15.0f, 9.0f));

	Min<char>(a, b);

	return 0;
}

