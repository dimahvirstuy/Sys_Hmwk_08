#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <sys/stat.h>
#include <stdlib.h>

int main(){
  printf("\nFile size: %d\n", st_size("file.txt"));
  printf("\n Mode: %d\n", st_mode("file.txt"));
  printf("\nTime of last access: %d", st_atime("file.txt"));
  return 1;
}
	 
