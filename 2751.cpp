#include <stdio.h>
#include <algorithm>

int main(void) {
    int range, i, input;
    int num[1000000];
    scanf("%d", &range);
  
    for (i = 0; i < range; i++) {
        scanf("%d", &input);
        num[i] = input;
    }

    std::sort(num, num + range);

    for (i = 0; i < range; i++) {
        printf("%d\n", num[i]);
    }
    
    return 0;
}
