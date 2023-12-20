#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 double density; // Air density at sea level (kg/m^3)
cout<<"Enter the density of fluid in which aircraft is present."<<endl;
cin>>density;
 double velocity; // Velocity of the aircraft (m/s)
cout<<"Enter the velocity of the aircraft."<<endl;
cin>>velocity;
 double wingArea; // Wing area (m^2)
cout<<"Enter the wing area."<<endl;
cin>>wingArea;
 double liftCoefficient = 0.7; // Lift coefficient
cout<<"Enter the value of coefficient of lift i-e(Cl).";
cin>>liftCoefficient;
double dragCoefficient;
cout<<"Enter the value of coefficient of drag i-e (Cd).";
cin>>dragCoefficient;
//Calculating Lift and Drag Force By Formula:L=1/2pv^2SCl & D=1/2pv^2SCd
    double liftForce = 0.5 * density * velocity * velocity * wingArea * liftCoefficient;
    double dragForce = 0.5 * density * velocity * velocity * wingArea * dragCoefficient;
 // Output the calculated forces
cout << "Aerodynamic forces simulation results:\n";
cout << "Lift force: " <<liftForce << " Newtons\n";
cout << "Drag force: " <<dragForce << " Newtons\n";

    return 0;
}