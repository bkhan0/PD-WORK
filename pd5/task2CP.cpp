#include <iostream>

double pyramidVolume(double, double, double, std::string);

int main(){
    double length, height, width;
    std::string outputUnit;
    std::cout << "Enter the length of pyramid (in meters): ";
    std::cin >> length;
    std::cout << "Enter the width of pyramid (in meters): ";
    std::cin >> width;
    std::cout << "Enter the height of pyramid (in meters): ";
    std::cin >> height;
    std::cout << "Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    std::cin >> outputUnit;

    std:: cout << pyramidVolume(length, width, height, outputUnit) << " cubic " << outputUnit;

    return 0;
}

double pyramidVolume(double length, double width, double height, std::string outputUnit){
    double volume = length * width * height / 3;
    if(outputUnit == "meters") return volume;
    else if (outputUnit == "kilometers") return volume / 1000;
    else if (outputUnit == "centimeters") return volume * 100;
    else if (outputUnit == "millimeters") return volume * 1000;

}
