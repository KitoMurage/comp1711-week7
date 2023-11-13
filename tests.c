#include <stdio.h>

int main(){
      FILE *input = fopen("ggs", "r");
        if (!input)
        {
            printf("Error: File could not be opened\n");
            return 1;
        }

    float highest = 0;
    float current;

    while (fscanf(input,"%f", &current) == 1){
        if (current > highest){
            current = highest; }
            printf("Highest: %f",highest);}

    return (0);
}

