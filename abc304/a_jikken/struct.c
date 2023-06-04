#include <stdio.h>
struct Ponta {
	char name;
	int age;
	double weight;
	double height;
};

int	main(void)
{
	struct Ponta daipon;
	daipon.age = 14;
	printf("%d\n",daipon.age);

	return (0);
}
