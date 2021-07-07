#include<stdio.h>

static int Global_static  = 10;

void Fun_Normal()
{
	// This is local static variable
	// whose value persist throughout the function call.
	// Initialisation of static variable only once

	static int i = 10 ;

	// Incrementing value of i
	++i;

	printf("\nValue of i from Fun_Normal is %d",i);
	printf("\nAddress of static variable is %u",&i);

}

// Recursive function which uses static variable
void Gun_Recursive_Static()
{
	static int i = 5;

	i--;

	if(i != 0)
	{
		printf("\nIn Gun_Recursive_Static value of is is %d",i);
		Gun_Recursive_Static();
	}
}

// Recursive function which uses auto variable
void Gun_Recursive_Auto()
{
	auto int i = 5;

	i--;

	if(i != 0)
	{
		printf("\nIn Gun_Recursive_Auto value of is is %d",i);
		Gun_Recursive_Auto();
	}
}

int main()
{

// Calling function multiple time
Fun_Normal();
Fun_Normal();
Fun_Normal();

Gun_Recursive_Static();

//Gun_Recursive_Auto();

return 0;
}
