/* hello_signal.c */
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <stdbool.h>


void handler(int signum)
{ 
  printf("Turing was right! \n");
}

int main(int argc, char * argv[])
{
  signal(SIGINT,handler); //register handler to handle SIGALRM

  int i = 1;
  while(1){
    printf("Hello World!\n");; //busy wait for signal to be delivered
    sleep(1);
  }
return 0; //never reached
}
