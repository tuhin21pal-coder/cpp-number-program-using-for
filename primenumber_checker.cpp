#include<iostream>

int main(){
    int number;
    std::cout<<"Enter a number to check if the number is prime or not : ";
    std::cin>>number;
    int isPrime = 1;
    if(number == 0){
        isPrime = 0;
    }
    for(int i=2;i<=number/2;i++){
        if(number%i == 0){
            isPrime = 0;
        }
    }
    if(isPrime){
        std::cout<<"Prime Number.";
    }
    else{
        std::cout<<"Not a Prime Number.";
    }
    return 0;
}