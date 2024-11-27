#include <iostream>

int GetHeight()
{
    int x {};
    std::cout << "enter the height of tower in meters : ";
    std::cin >> x;
    return x;
}
double HeightTravelled(int time)
{
    double height {};
    height = (9.8 * (time*time))/2;
    return height;
    
}
int main()
{
    int time{};
    std::cout << "time at which you want the height" << '\n';
    std::cin >> time;
    double height1 {GetHeight()};
    double height2 {HeightTravelled(time)};
    double height{height1-height2};
    if (height >0)
    std::cout << "At " << time << "seconds, the ball is at height:" << height;
    else
    std::cout << "Ball is on the ground";


}