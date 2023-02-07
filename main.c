#include <stdio.h>

int findoutFibonNumbers(int);
float getMedian(FILE, int);

int main() 
{
  int input, i, fibonnumber,number;
  float median;
  FILE *file;
  file = fopen("Fibonacci.txt", "w+");
  input = 6;
  
  if (input<0){
    printf("invalid input");
    fclose(file);
    goto end;
  }
  else{
    printf("Your entered argument: %d\n", input);
    for (i = 0; i<= input; i++){
      fibonnumber = findoutFibonNumbers(i);
      fprintf("%d ", fibonnumber);
    }
  }
  
  
  printf("1. File Fibonacci content:\n");
  rewind(file);
  fflush(file);
  while (fscanf(file, "%d",&number)!= EOF){
    fprintf(file," %d ", number);
  }
  printf("Total: %d numbers in Fibonacci",input);
  
  median = getMedian(file, input);
  prinf("2. The Fibonacci median: %f",median);
  
  end:
  return 0;
}

int findoutFibonNumbers(int number){
  if (number == 1 || number == 0 ){
    return 1;
  }
  if (number >= 2){
    return(findoutFibonNumbers(number - 1) + findoutFibonNumbers(number -2));
  }
}

float getMedian(FILE *file, int input){
  float median;
  if (input%2 == 0){
    
  }
  else{
    median = 
  }
  return median;
}