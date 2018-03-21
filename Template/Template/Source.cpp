#include <stdio.h>
#include "Header.h"

int main()
{
	List<int> a;
	a.Addhead(3);
	a.Addhead(5);
	a.Addhead(7);
	a.Addhead(3);

	List<int>::iterator b;
	b = a.begin();
	++b;
	++b;
	printf("%d", *b);
	while (true);
	return 0;
}
