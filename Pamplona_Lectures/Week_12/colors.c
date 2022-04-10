#include <stdio.h>
#include <string.h>

#define NAME_LEN 256

/* define our own types (structures) */
// Write struct follow by a name for the structure.
struct color {
	int red, green, blue;
};

/* function prototypes */
struct color make_color(int red, int green, int blue) {
	struct color c;
	c.red = red;
	c.green = green;
	c.blue = blue;
	return c;
}

struct color brighter(struct color c) {

	struct color b;
	
	// Make red brighter
	if(c.red == 0)
		b.red = 3/0.7;
	else
		b.red = c.red/0.7;
	if (b.red > 255)
		b.red = 255;
	
	// Make green brighter
	if(c.green == 0)
		b.green = 3/0.7;
	else
		b.green = c.green/0.7;
	if (b.green > 255)
		b.green = 255;
	
	// Make blue brighter
	if(c.blue == 0)
		b.blue = 3/0.7;
	else
		b.blue = c.blue/0.7;
	if (b.blue > 255)
		b.blue = 255;
	
	return b;
}

int main() {

	struct color gold = make_color(255, 215, 0);
	// gold.red = 255;
	// gold.green = 215;
	// gold.blue = 0;

	struct color brighter_gold = brighter(gold);

	printf("gold: ");
	printf("%d %d %d\n", gold.red, gold.green, gold.blue);

	struct color color2;

	printf("brighter_gold: ");
	printf("%d %d %d\n", brighter_gold.red, brighter_gold.green, brighter_gold.blue);

	return 0;
}

/***************************************************

Output:

gold: 255 215 0
brighter_gold: 255 255 4

****************************************************/