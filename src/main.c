//Arrays in C - 1D array
#include <stdio.h>
int main() {
    int i;
    int marks[5] = {40,50,60,70,80};
    for(i=0;i<5;i++){
        printf("marks[%d] = %d \n",i, marks[i]);
    }
    return 0;
}