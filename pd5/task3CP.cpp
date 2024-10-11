#include <iostream>

float vehicle_price_claculator(float, char);

int main() {
    float vehicle_price, tax_amount;
    char type;
    std::cout << "Enter the vehicle type code (M, E, S, V, T): ";
    std::cin >> type;
    std::cout << "Enter the price of the vehicle: $";
    std::cin >> vehicle_price;

    std::cout << "The final price of the vehicle of type " << type << " after adding the tax is $" << vehicle_price_claculator(vehicle_price, type);

return 0;
}

float vehicle_price_claculator(float vehicle_price, char type){
    float tax_rate, tax_amount, final_price;

    if(type == 'M') tax_rate = 6;
    else if(type == 'E') tax_rate = 8;
    else if(type == 'S') tax_rate = 10;
    else if(type == 'V') tax_rate = 12;
    else if(type == 'T') tax_rate = 15;


    tax_amount = vehicle_price * tax_rate / 100;

    return tax_amount + vehicle_price;

}
