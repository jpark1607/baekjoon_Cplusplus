#include <stdio.h>
#include <math.h>

int main(void) {
	int T, i, n, j;
	double x1, y1, x2, y2, r1, r2;
	double cx, cy, r;
	int nCount;
	
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		
		scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
		scanf("%d", &n);
		
		nCount = 0;
		for(j = 0; j < n; j++) {
			scanf("%lf %lf %lf", &cx, &cy, &r);
			r1 = sqrt((x1 - cx) * (x1 - cx) + (y1 - cy) * (y1 - cy));
			r2 = sqrt((x2 - cx) * (x2 - cx) + (y2 - cy) * (y2 - cy));
			
			if(r1 < r && r2 >= r) {
				nCount += 1;
			}
			else if(r1 >= r && r2 < r) {
				nCount += 1;
			}
		}
		
		printf("%d\n", nCount);
	}
	return 0;
}
