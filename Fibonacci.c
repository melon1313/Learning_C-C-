#include <stdio.h>

int fib_recur(int n){
    if(n == 0) return 0;
    else if(n == 1) return 1; 
    else return (fib_recur(n-1) + fib_recur(n-2));
}

int fib_loop(int n){
    int temp = 0;
    int temp0 = 0, temp1 = 1;

    if(n == 0) return 0;
    else if(n == 1) return 1;

    for(int i = 1; i < n; i++){
        temp = temp0 + temp1;
        temp0 = temp1;
        temp1 = temp;
    }
    return temp;
}
 
int main(){
    int n1;
    int n2;

    printf("(Recursion)Plz enter the number between 20 to 1: "); scanf("%d", &n1);
    n1 = fib_recur(n1);

    printf("(Loop)Plz enter the number between 20 to 1: "); scanf("%d", &n2);
    n2 = fib_loop(n2);

    printf("(Recursion): %d\n", n1);
    printf("(Loop): %d", n2);

}