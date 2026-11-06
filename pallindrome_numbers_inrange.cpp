#include<iostream>

int main(){
    int range;
    std::cout<<"Enter the range : ";
    std::cin>>range;
    for(int i = 1;i<=range;i++){
        int reverse = 0;
        int original = i;
        for( ;original>0;original/=10){
            reverse = reverse *10 + original%10;
        }
        if(reverse == i){
            std::cout<<i<<'\t';
        }
    }
    return 0;
}