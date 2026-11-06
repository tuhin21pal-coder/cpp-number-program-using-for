#include<iostream>

int main(){
    int range;
    std::cout<<"Enter the range of the number : ";
    std::cin>>range;
    for(int i = 1;i<=range;i++){
        int sum=0;
        int original = i;
        for( ;original>0;original/=10){
            sum+=original%10;
        }
        if(i%sum == 0){
            std::cout<<i<<'\t';
        }
    }
    return 0;
}