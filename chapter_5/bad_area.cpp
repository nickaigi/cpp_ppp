#include<iostream>

constexpr int frame_witdth = 2;

class Bad_area{};

int area(int length, int width){
    if(length <= 0 || width <= 0)
        throw Bad_area{};
    return length * width;
}

int framed_area(int x, int y){
    return area(x-frame_witdth, y-frame_witdth);
}

int main(){
    try{
        std::cout<<"area(4, 4) = "<<area(4, 4)<<std::endl;
        std::cout<<"framed_area(-1, 4) = "<<framed_area(-1, 4);
        std::cout<<"area(-1, 4) = "<<area(-1, 4);
    } catch(Bad_area){
        std::cerr<<"Bad arguments to area()"<<std::endl;
    }
}
