#include <iostream>

class Circle{
    private:
        int radius;

    public: 
        Circle(int r){
            radius = r;
        }
        void setRadius(int radius){
            this->radius=radius;
        }
        int getRadius() const{ 
            return radius;
        }
    
};

class Utility{
    public:
        double computeArea(const Circle& c){  
            int r = c.getRadius();
            return 3.14*r*r;
        }

};

int main(){
    int radius =0;
    std::cout<<"Enter the radius in cm: "<<std::endl;
    std::cin>>radius;

    Circle obj(radius);
    Utility c1;
    std::cout<<"Area = "<<c1.computeArea(obj)<<"cm^2"<<std::endl;
    return 0;
}
