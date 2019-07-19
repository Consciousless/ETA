#include "Main.h"
#include <iostream>

int main()
{

Logic();

return 0;

}

void Logic()
{

    std::cout << "Howdy! Here you can estimate time arrival of an object with a certain speed. (set by f=ma formula)" << std::endl;

    //Intializing Distance variable
    std::cout << "What distance should it travel? (Km)" << std::endl;
    std::cin >> Distance;

    //Converting from meters to kilometers
    Distance = Distance * 1000;

    //Intializing Mass variable
    std::cout << "Enter mass of the object. (Kg)" << std::endl;
    std::cin >> Mass;

    //Intializing Force variable
    std::cout << "Enter force applied to the object. (Newtons)" << std::endl;
    std::cin >> Force;

    //For the equation to work force should be squred
    Force = Force * 2;

    //Calculating Velocity value by dividing F/M
    Velocity = Force / Mass;

    //Calculating time that it'll get to travel the distance
    ETA = Distance / Velocity;

    //Converting to minutes if it took more than 59 seconds
    if(ETA > 59)
    {

        ETA = ETA / 60;

        //Converting to hours if it took more than 59 minutes
        if(ETA > 59)
        {
            ETA = ETA / 60;

                //Converting to days if it took more than 24 hours
                if(ETA > 24)
                {
                    ETA = ETA / 24;
                    std::cout << "It took " << ETA << " days to complete the distance" << std::endl;
                    std::cout << "It was traveling at " << Velocity << " meters per second" << std::endl;
                }
                else
                {
                    std::cout << "It took " << ETA << " hours to complete the distance." << std::endl;
                    std::cout << "It was traveling at " << Velocity << " meters per second." << std::endl;
                }
        }
        else
        {
            std::cout << "It took " << ETA << " minutes to complete the distance." << std::endl;
            std::cout << "It was traveling at " << Velocity << " meters per second." << std::endl;
        }

    }
    else
    {
        std::cout << "It took " << ETA << " seconds to complete the distance." << std::endl;
        std::cout << "It was traveling at " << Velocity << " meters per second." << std::endl;
    }


}