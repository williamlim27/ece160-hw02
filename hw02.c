#include <stdio.h>
#include <stdlib.h>

/*
Prints the sizes and possible ranges of four integer data types. 
*/
void print_int_ranges() {
	// TODO fill in missing values!
  int short_bytes = 0;
	int int_bytes = 0;
	int uint_bytes = 0;
	int long_bytes = sizeof(long);

  short short_min = 0;
	short short_max = 0;
  int int_min = 0;
	int int_max = 0;
  unsigned int uint_min = 0;
	unsigned int uint_max = 0;
  long long_min = 1L << long_bytes * 8 - 1;
	long long_max = ~long_min;

  // Keep these exact printf commands :)   
  printf("short is %d bytes or %d bits and ranges from %d to %d\n",
         short_bytes, short_bytes * 8, short_min, short_max);
  printf("int is %d bytes or %d bits and ranges from %d to %d\n",
         int_bytes, int_bytes * 8, int_min, int_max);
  printf("long is %d bytes or %d bits and ranges from %ld to %ld\n",
         long_bytes, long_bytes * 8, long_min, long_max);
  printf("unsigned int is %d bytes or %d bits and ranges from %u to %u\n",
         uint_bytes, uint_bytes * 8, uint_min, uint_max);
}

/*
Takes in an integer value v and a integer bit index i
Returns 1 if bit i in value v equals 1
Returns 0 if bit i in value v equals 0
*/
int is_bit_set(unsigned char v, unsigned char i) {
  if (i >= sizeof(unsigned char) * 8) {
    fprintf(stderr, "Index out of range!\n");
    return 0;
  }

  /*
  TODO your implementation goes here!
  */

  return 0;
}

/*
Don't touch anything in main!
*/
int main(int argc, char* argv[])
{
  if (argc < 3) {
    fprintf(stderr, "Not enough arguments!\n");
    return -1;  
  }

  print_int_ranges();
  
  unsigned char value = atoi(argv[1]);
  unsigned char bit = atoi(argv[2]);
  int is_set = is_bit_set(value, bit);
  switch(is_set) {
    case 1:
      printf("Bit %u in value %u is set\n", bit, value);
      break;
    case 0:
      printf("Bit %u in value %u is not set\n", bit, value);
      break;
    default:
      fprintf(stderr, "is_bit_set returned an invalid value!\n");
  } 
  
  return 0;
}
