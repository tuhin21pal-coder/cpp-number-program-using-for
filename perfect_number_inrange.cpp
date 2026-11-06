#include<iostream>

int main(){
    int range;
    std::cout<<"Enter the range = ";
    std::cin>>range;
    for(int i=2;i<=range;i++){
        int sum = 0;
        for(int j = 1;j<=i/2;j++){
            if(i%j == 0){
                sum+=j;
            }
        }
        if(sum == i){
            std::cout<<i<<'\t';
        }
    }
    return 0;
}