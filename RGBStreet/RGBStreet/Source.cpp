#include <stdio.h>
#include <algorithm>
using namespace std;
int numOfHouse, r, g, b, orr , og, ob;
int main() {
	scanf_s("%d", &numOfHouse);
	scanf_s("%d %d %d", &orr, &og, &ob);
	for (int i = 0; i < numOfHouse-1;i++) {
		scanf_s("%d %d %d",&r,&g,&b);
		r += min(og, ob);
		g += min(orr , ob);
		b += min(orr , og);
		orr = r;
		og = g;
		ob = b;
	}
	printf("%d", min(r, min (g,b)));
}