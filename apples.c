#include <stdio.h>

int main()
{
	int apples;
	int students;
	unsigned int price = 2; // 2 dollars per apple

	printf("Quantity of students: ");
	scanf("%d", &students);
	printf("Quantity of apples per student: ");
	scanf("%d", &apples);

	// get total apples
	apples = apples * students;
	
	// get total price
	price = price * apples;

	// print result
	printf("The price for %d apples is $%d\n", apples, price);
	return 0;
}
