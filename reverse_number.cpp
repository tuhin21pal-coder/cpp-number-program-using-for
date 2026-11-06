#include<iostream>

int main(){
    int number;
    std::cout<<"Enter a number : ";
    std::cin>>number;
    int reverse = 0;
    for( ;number>0;number/=10){
        reverse = reverse*10 + number%10;
    }
    std::cout<<"The reverse of the number is : "<<reverse;
}