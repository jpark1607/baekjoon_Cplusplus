#include <stdio.h>

int main(void) {
	int x, y = 0;
	int nCount = 0;
	scanf("%d %d", &x, &y);
	--x, --y;
	
	while(x != 0) {
		switch (x) { 
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
			nCount += 31;
			break;
		
		case 4:
		case 6:
		case 9:
		case 11:
			nCount += 30;
			break;
		
		case 2:
			nCount += 28;
			break;
		}
		
		--x;
	}
	nCount += y;
	nCount %= 7;
	
	switch(nCount) {
	case 0:
		printf("MON");
		break;
	case 1:
		printf("TUE");
		break;
	case 2:
		printf("WED");
		break;
	case 3:
		printf("THU");
		break;
	case 4:
		printf("FRI");
		break;
	case 5:
		printf("SAT");
		break;
	case 6:
		printf("SUN");
		break;
	}
	
	return 0;
	
}
