#include "stoplight.h"
#include <iostream>
#include <chrono>
#include <thread>

void stoplight::init(int greenDuration, int yellowDuration, int redDuration)
{
    std::cout << "init \n";

    setGreenDurration(greenDuration);
    setYellowDurration(yellowDuration);
    setRedDurration(redDuration);

    std::cout << "all durrations set ready to start cycle";
}

void stoplight::setGreenDurration(int durration)
{
    green_durr = durration;
}

int stoplight::getGreenDurration() const
{
    return green_durr;
}

void stoplight::setYellowDurration(int durration)
{
    yellow_durr = durration;
}

int stoplight::getYellowDurration() const
{
    return yellow_durr;
}

void stoplight::setRedDurration(int durration)
{
    red_durr = durration;
}

int stoplight::getRedDurration() const
{
    return red_durr;
}

void stoplight::cycle()
{
    std::cout << "starting light cycle \n";

    const auto green = std::chrono::seconds(getGreenDurration());
    const auto yellow = std::chrono::seconds(getYellowDurration());
    const auto red = std::chrono::seconds(getRedDurration());

    while (true)
    {
        std::cout << "light is green! \n";
        std::this_thread::sleep_for(green);

        std::cout << "light is yellow! \n";
        std::this_thread::sleep_for(yellow);

        std::cout << "light is red! \n";
        std::this_thread::sleep_for(red);
    }
    // for (int i = 0; i < red; i++)
    // {
    // }
}