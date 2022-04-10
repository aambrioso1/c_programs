#include <stdio.h>
#include <string.h>

#define NAME_LEN 256

/* define our own types (structures) */
// Write struct follow by a name for the structure.
struct part {
	int number;
	char name[NAME_LEN+1];
	int on_hand;
};

/* function prototypes */
void print_part(struct part p);
struct part build_part(int number, char *name, int on_hand);

int main() {
	int i;

	struct part part1 = {0, "hello", 123};
	struct part part2 = {-3, "", 33};

	// This shows how to find the size of a variable.
	printf("\n*************** sizeof(type) a variable *******************************\n");
	printf("The sizeof(int)=%ld\n", sizeof(int));
	printf("sizeof(char)=%ld\n", sizeof(char));
	printf("sizeof(struct part)=%ld\n", sizeof(struct part));
	printf("**********************************************\n\n");

	// Illustrates how to access structures variables
	printf("************ Accessing a structure variable *************************\n");
	printf("part1.name=%s and part2.onhand=%d\n", part1.name, part2.on_hand);
	printf("part1.name=%s and part2.onhand=%d\n", part1.name, part2.on_hand);
	printf("part1.name=%s and part2.onhand=%d\n\n", part1.name, part2.on_hand);

	printf("*************** Modifying a structure variable *********************\n");
	FILE *str = stdin; // Just in case we want to run some experiments with other streams!
	// Illustrates how to modify structure variables from a stream
	printf("Enter and number, a name, and how many on hand.  Hit enter after each: \n");
	fscanf(str, "%d%s%d", &part2.number, part2.name, &part2.on_hand); // Note we are using stdin (keyboard).
	// This is equivalent to scanf
	printf("part2.number=%d, part2.name=%s, and part2.onhand=%d\n\n", part2.number, part2.name, part2.on_hand);
	
	printf("*************** Assignment with stuctures works *************************\n");
	struct part temp_part = {0, "", 0};
	printf("Before swap:\n");
	printf("part1.number=%d, part1.name=%s, and part1.onhand=%d\n", part1.number, part1.name, part1.on_hand);
	printf("part2.number=%d, part2.name=%s, and part2.onhand=%d\n", part2.number, part2.name, part2.on_hand);
	temp_part = part1;
	part1 = part2;
	part2 = temp_part;
	printf("After swap:\n");
	printf("part1.number=%d, part1.name=%s, and part1.onhand=%d\n", part1.number, part1.name, part1.on_hand);
	printf("part2.number=%d, part2.name=%s, and part2.onhand=%d\n\n", part2.number, part2.name, part2.on_hand);

	printf("*************** Compare structure variables (compare based on element types) *************************\n");
	printf("Does part1 = temp_part? %d\n", part1.number == temp_part.number&&strcmp(part1.name, temp_part.name)==0&&
		part1.on_hand == temp_part.on_hand);
	printf("Does part2 = temp_part? %d", part2.number == temp_part.number &&strcmp(part2.name, temp_part.name)==0&&
		part2.on_hand == temp_part.on_hand);
	
	printf("\n\n*************** Structures as function arguments and return values *************************\n");
	printf("Print elements of temp_part\n");
	print_part(temp_part);

	// A structure as a return value
	struct part part3 = build_part(17, "thing_a_ma_bob", 5);
	printf("***** Print elements of part3 *****\n");
	print_part(part3);

}

// A function that calls a part structure and prints out its three elememts.
// Illustrates that a function can call a structure.
void print_part(struct part p) {
	printf("Part number: %d\n", p.number);
	printf("Part name: %s\n", p.name);
	printf("Quantity on hand: %d\n\n", p.on_hand);
}

// Creates a new part structure.  
// Illustrates that a structure can be returned by a function.
struct part build_part(int number, char *name, int on_hand) {
	struct part p;
	p.number = number;
	strcpy(p.name, name);
	p.on_hand = on_hand;
	return p;
}

/*********************************************************************

Output:


*************** sizeof(type) a variable *******************************
The sizeof(int)=4
sizeof(char)=1
sizeof(struct part)=268
**********************************************

************ Accessing a structure variable *************************
part1.name=hello and part2.onhand=33
part1.name=hello and part2.onhand=33
part1.name=hello and part2.onhand=33

*************** Modifying a structure variable *********************
Enter and number, a name, and how many on hand.  Hit enter after each:
100
do_hickey
19
part2.number=100, part2.name=do_hickey, and part2.onhand=19

*************** Assignment with stuctures works *************************
Before swap:
part1.number=0, part1.name=hello, and part1.onhand=123
part2.number=100, part2.name=do_hickey, and part2.onhand=19
After swap:
part1.number=100, part1.name=do_hickey, and part1.onhand=19
part2.number=0, part2.name=hello, and part2.onhand=123

*************** Compare structure variables (compare based on element types) *************************
Does part1 = temp_part? 0
Does part2 = temp_part? 1

*************** Structures as function arguments and return values *************************
Print elements of temp_part
Part number: 0
Part name: hello
Quantity on hand: 123

***** Print elements of part3 *****
Part number: 17
Part name: thing_a_ma_bob
Quantity on hand: 5

*****************************************************************************************************/