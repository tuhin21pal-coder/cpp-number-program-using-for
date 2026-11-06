#include<iostream>

int main(){
    int range;
    std::cout<<"Enter the range : ";
    std::cin>>range;
    for(int i = 1;i<=range;i++){
        int isPrime = 1;
        for(int j=2;j<=i/2;j++){
            if(i%j == 0){
                isPrime =0;
            }
        }
        if(isPrime){
            std::cout<<i<<'\t';
        }
    }
    return 0;
}