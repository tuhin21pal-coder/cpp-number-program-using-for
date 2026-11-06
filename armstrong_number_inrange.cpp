#include<iostream>

int main(){
    int range;
    std::cout<<"Enter the range : ";
    std::cin>>range;
    for(int i = 1;i<=range;i++){
        int power = 0;
        int original = i;
        int pow_num = i;
        for( ;pow_num>0;pow_num/=10){
            power++;
        }
        int sum = 0;
        int num = i;
        for( ;num>0;num/=10){
            int rem = num%10;
            int p =1;
            for(int j = 1;j<=power;j++){
                p*=rem;
            }
            sum += p;
        }
        if(sum == original){
            std::cout<<original<<'\t';
        }
    }
    return 0;
}