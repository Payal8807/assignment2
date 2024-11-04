#include <stdio.h>
#include <math.h>

int a;
int b;
int c = 0;
int n = 0;

 int count_digit( int a){
    if (a/10 == 0){
        return 1;
    }else
      {  return 1 + count_digit(a / 10);}
}

int power(int p , int q){
    int i , result =1;
    for (i=0 ; i<q ; i++){
        result *= p;
    }

    return result;
}
    
 int digit_count( int a , int b){
    char str[10];
    while ( n < count_digit(a)){
        sprintf(str, "%d", a);
        if (str[n] = b){
            a = power(10 , n);
            return 1 + digit_count( a , b);
        }
        
    }

 }


int main(){
    int a;
    int b;
    printf("choose two values first an integer and other a digit");
    scanf("%d %d\n", &a , &b);
    digit_count( a, b);
    printf("the digit count is ;- %d\n", digit_count(a , b));



}
