#include <stdio.h> // Necessary for printf()
#include <stdlib.h>
#include <time.h> 

int main() {
	// The main function is the entrypoint of the program. When the program
	// is executed, it will automatically start here.
	
	// TODO Complete the program
	srand(time(NULL)); //seeds the random number range
	
	int r = rand() % 11; //makes it 0-10 inclusive

	if (r >= 0 && r <= 4) { //if # is between 0 and 4
		printf("Eat more beef, kick less cats\n");
	

	} else if (r>=5 && r <= 9) { //if number is between 5 and 9
		printf("FRODO LIVES\n");
	} else {
		printf("Larn is the best roguelike\n"); //if number is equal to 10
	}
	printf("The random number was %d\n", r); //prints the random #

	return 0; //ends the program


}
