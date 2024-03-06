#include <stdio.h>

int main() {
	int x, y, w, h, min;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	int d1, d2, d3, d4;
	d1 = x; d2 = w - x; d3 = y; d4 = h - y;
	
	min = d1;
	if (min > d2) min = d2;
	if (min > d3) min = d3;
	if (min > d4) min = d4;
	printf("%d", min);
}
