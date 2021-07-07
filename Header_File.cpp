
#include"Header_File.h"

int main()
{
fun();
printf("Value of variable i is %d\n",i);

struct demo obj;
obj.i = 10;

printf("MAcro from header file has value %d\n",MAX);
return 0;
}

void fun()
{
	printf("Inside the function fun\n");
}
