#include <stdio.h>
#include <sys/getphc.h>
#include <unistd.h>


int main(void){
	int Height = 1;
	int Count = 1;
	getPHC(&Height, &Count);
	printf("Read value: Height %d Count %d\n", Height, Count);
	
}
