#include<stdio.h>
#include<math.h>

int isPrime(int num);

int main(){
    // 2 -100
    //isPrime(89);
    int sum =0;
    int i = 2;
    for (i ; i <= 100 ; i ++){
        if( isPrime(i) ){
            sum += i;
        }
    }
    printf("The sum is %d",sum);
    return 0;
}

int isPrime(int num){

    int i = 2;
    int ns = sqrt(num);
    for (i ; i < ns ; i++){
        if (num % i == 0){
            // 0 indicates number is composite
            return 0;
        }
    }
    //this pint
    return 1;
}
