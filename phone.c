#include <stdio.h>

int main(void) {
	char input1[100];
	int input2, i, count;
	i = 0;
	count = 0;
	while (1) {
		scanf("%99s %d", &input1, &input2);
		while (input1[i] != '\0') {
			count++;
			i++;
		}
		if (count > 10) {
			if (input2 == 0) {
				printf("%s\n", input1);
			}
			else {
				printf("%c\n", input1[count - 1]);
			}
		}
		else {
			if (input2 == 0) {
				printf("%s\n", input1);
			}
			else if (1 <= input2 && input2 <= 9) {
				printf("%c\n", input1[input2]);
			}
			else if (9 < input2) {
				printf("%c\n", input1[count - 1]);
			}
			else {
				printf("Error\n");
			}
		}
		count = 0;
		i = 0;
	}
	return 0;
}
