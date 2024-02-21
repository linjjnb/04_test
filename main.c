#include <stdio.h>
int main(int argc , char * agrv[])
{
	int i;
	for(i=0 ; i < argc ; i++)
	{
		printf("argv[%0d] is %sn", i ,argv[i]);

	}
	return 0;
}
