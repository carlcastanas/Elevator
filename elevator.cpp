//To acquire the floor destination and determine whether the destination is the same, I utilize control structures, OOP, 
//Pointer, and functions in my elevator code. To prompt the starting and destination floors, I use the commands goUp and goDown.
#include <iostream> // cout
using namespace std; // cout
template<typename T> // template
class elevator // elevator
{
private: // private
    T m_t; // m_t
public: // public
    elevator(T t) : m_t(t) {} // elevator
};
    int i = 0; // i
   elevator<int> intelevator = i; // int elevator

    double d = 0.0; // d
    elevator<double> doubleelevator = d; // double elevator

int main() // main
{
    int goUp, // go up elevator
        goDown; // go down elevator
    
    cout<<"Enter the starting floor: "; // prompt for starting floor
    cin>>goUp; // get starting floor
    cout<<"Enter the destination floor: "; // prompt for destination floor
    cin>>goDown; // get destination floor
    if // if
    (goDown<1 || goDown>5){ // if destination floor is not between 1 and 5
        cout<<"Destination must be one from 1,2,3,4,5"; // print error
    }
    else if // else if
    (goUp == goDown) // if starting floor is equal to destination floor
    {
        cout<<"start and destination floor is the same"; // print error
    }
    else // else
    {
    for // for
    (int i = goUp + 1; i<goDown; i++) // for each floor between starting and destination floor
    { cout<<i<<endl; // print floor
    }
        cout<<"now in level "<<goDown; // print destination floor
    }
    return 0; // return 0
}
