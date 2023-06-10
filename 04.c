#include <stdio.h>
#include <math.h>
int length(const char* str)
{
	return *str ? 1 + length(++str) : 0;
}
int main() {
	char* str = "Vosem minus dwa!";
printf("'%s' - %d chars.\n",str,length(str));

	return 0;
}
