#include <iostream>
using namespace std;

class car{
    private:
    float price, milage;
    int year;

    public:
    // Constructor
    car(int year=0, float price=0, float milage=0){
        this->year = year;
        this->price = price;
        this->milage = milage;
    }

    int getYear(){
        return year;
    }
    float getPrice(){
        return price;
    }
    float getMilage(){
        return milage;
    }
};

int main(){
    car TritonL200(2023, 238990.00, 0);
    
    cout << "Year: " << TritonL200.getYear() << endl;
    cout << "Price: " << TritonL200.getPrice() << endl;
    cout << "Milage: " << TritonL200.getMilage() << endl;

    return 0;
}