#include<iostream>

int main(){
    int number;
    std::cout<<"Enter a number : ";
    std::cin>>number;
    int count = 0;
    for(int i = 1;i<=number;i++){
        if(number % i == 0){
            count++;
        }
    }
    std::cout<<"Number of divisors are : "<<count;
    return 0;
}