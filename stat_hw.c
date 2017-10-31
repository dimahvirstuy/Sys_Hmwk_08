#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <sys/stat.h>
#include <stdlib.h>

int main(){
  struct stat mybuffer;
  stat("file.txt", &mybuffer);
  printf("\nFile size: %d\n", mybuffer.st_size);
  printf("\nMode: %d\n", mybuffer.st_mode);
  printf("\nTime of last access: %s\n",ctime(&mybuffer.st_atime));
  return 1;
}
	 
