#include <stdio.h>
#include <string.h>

int main(void) {
	int num;
	char op;
	int tot;
	
	scanf("%d", &num);
	getchar();
	scanf("%c", &op);
	
	tot = num;
	while(op != '=') {
		scanf("%d", &num);
		getchar();
		switch(op) {
		case '+':
			tot += num;
			break;
		case '-':
			tot -= num;
			break;
		case '*':
			tot *= num; 
			break;
		case '/':
			tot /= num;
			break;
		}
		
		scanf("%c", &op);
	}
	
	printf("%d", tot);
    return 0;
}

