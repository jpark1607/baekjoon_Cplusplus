#include <stdio.h>

int main(void) {
	int input1, input2;
	int out1, out2, out3, outall;
	int temp;
	
	scanf("%d %d", &input1, &input2);
	outall = input1 * input2;
	
	temp = input2;
	out1 = input1 * (temp % 10);
	
	temp /= 10;
	out2 = input1 * (temp % 10);
	
	temp /= 10;
	out3 = input1 * temp;
	
	printf("%d\n%d\n%d\n%d\n", out1, out2, out3, outall);
	return 0;
}
