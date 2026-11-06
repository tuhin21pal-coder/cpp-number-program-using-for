#include<iostream>

int main(){
    int number;
    std::cout<<"Enter a number : ";
    std::cin>>number;
    int sum =0;
    int original = number;
    for( ;number>0;number/=10){
        int rem = number%10;
        int product = 1;
        for(int j=1;j<=rem;j++){
            product *= j;
        }
        sum += product;
    }
    if(original == sum){
        std::cout<<"Strong Number.";
    }
    else{
        std::cout<<"Not a Strong Number.";
    }

    return 0;
}