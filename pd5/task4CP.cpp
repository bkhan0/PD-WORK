#include <iostream>

std::string project_time_calculation(int, int, int);

int main(){
    int hours_needed, days, workers;
    std::cout << "Enter the needed hours: ";
    std::cin >> hours_needed;
    std::cout << "Enter the days that the firm has: ";
    std::cin >> days;
    std::cout << "Enter the number of all workers: ";
    std::cin >> workers;
    std::cout << project_time_calculation(hours_needed, days, workers);
}

std::string project_time_calculation(int hours_needed, int days, int workers){
    int available_hours = 9 * days * workers ;
    if(available_hours >= hours_needed)
        return "Yes! " + std::to_string(available_hours - hours_needed) + " hours left.";
    else
        return "Not enough time! " + std::to_string(hours_needed - available_hours) + " hours needed.";
}

