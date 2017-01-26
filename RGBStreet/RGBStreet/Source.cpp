#include <stdio.h>
#include <algorithm>
using namespace std;
int main() {
	int numOfHouse,r,g,b,or,og,ob;
	scanf_s("%d", &numOfHouse);
	scanf_s("%d %d %d", &or, &og, &ob);
	for (int i = 0; i < numOfHouse-1;i++) {
		scanf_s("%d %d %d",&r,&g,&b);
		r += min(og, ob);
		g += min(or , ob);
		b += min(or , og);
		or = r;
		og = g;
		ob = b;
	}
	printf("%d", min(r, min (g,b)));
}