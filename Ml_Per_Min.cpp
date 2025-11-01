#include <iostream>
int main(){
    int flow;
    std:: cout << "What is your Flow in MGD: " ; // In million gallons per day
    std:: cin >> flow;

    int dose;
    std:: cout << "What is your dose in Mg/L:" ; // doseage of chemical
    std:: cin >> dose;

    
    double specific_gravity;
    std:: cout << " What is your specific gravity: "; // normal range is any where from 10.2 for alum and 10.8 for las 
    std:: cin >> specific_gravity;

    const double Lbs_per_gal = 8.34;

    int min_per_day = 1440;

    int ml_per_gal = 3785;

    double mgl_per_min = flow * dose * Lbs_per_gal / min_per_day/specific_gravity * ml_per_gal;

    std:: cout << "Your drawdown weight is : " << mgl_per_min << std:: endl ; // when doing a pump test 

    return 0;
}