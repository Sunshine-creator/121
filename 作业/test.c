#include<stdio.h>
#include<windows.h>
#include<string.h>
char  lefthandle(char* s,int a)
{
	int b = 0;
	for (; b < a; b++)
	{
		char temp = 0;
		int k = 0;
		while (*(s + 1 + k))
		{
			*(s + k) = *(s + k + 1);
			k++;
		}
		*(s + k) = temp;
	}

}
int main()
{
	char arrary[] = { "abcdefg" };
	lefthandle(arrary, 2);
	printf("%s", arrary);
	system("pause");
	return 0;
}