#include <stdio.h>

void printFibonacci(int n) {
    int a = 1, b = 1, f;
	printf ("Arvie Sinocruz");
    printf("The Fibonacci Sequence of %d is: ", n);

    while (a <= n) {
        printf("%d ", a);
        f = a + b;
        a = b;
        b = f;
    }
    printf("\n\nProgram Terminated!");
}

int Fibonacci(int num) {
    int a = 1, b = 1, f;

    while (a <= num) {
        if (a == num) {
            return 1;
        }
        f = a + b;
        a = b;
        b = f;
    }

    return 0;   
    
}

int main() {
    int num;

    printf("Enter a number: ");
    
    while (1) {
        scanf("%d", &num);

        if (Fibonacci(num)) {
  
            printFibonacci(num);
            break; 
        } else {
            printf("%d is not a  Fibonacci number.\n\nEnter another number: ", num);
        }
    }

    return 0;
}

