#include <iostream>

double GetHeight()
{
    int TowerHeight {};
    std::cout << "enter the height of tower in meters : ";
    std::cin >> TowerHeight;
    return TowerHeight;
}
double HeightTravelled(double TowerHeight ,int time)
{
    double Falldistance {(9.8 * time *time)/2};
    double Ballheight {(TowerHeight-Falldistance)};
    return Ballheight;
    
}
void PrintBallHeight (double Ballheight , int time)
{
    if (Ballheight > 0.0)
        std::cout << "At " << time  << " seconds , the ball is at height " <<Ballheight <<"meterts\n";
    else
        std::cout << "At" << time << "ball is at ground \n";
}
int main()
{
int time {2};
double TowerHeight {GetHeight()};
double Ballheight {HeightTravelled(TowerHeight,time)};
PrintBallHeight (Ballheight,time);


}