#include<iostream>

int main(){
    int range;
    std::cout<<"Enter the range : ";
    std::cin>>range;
    int a=0,b=1;
    std::cout<<a<<'\t';
    std::cout<<b<<'\t';
    for(int i = 3;i<=range;i++){
        int c = a+b;
        std::cout<<c<<'\t';
        a=b;
        b=c;
    }
    return 0;
}