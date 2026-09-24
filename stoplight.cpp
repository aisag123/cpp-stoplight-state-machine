#include "stoplight.h"
#include <iostream>
#include <chrono>
#include <thread>

void stoplight::init(int greenDuration, int yellowDuration, int redDuration)
{
    std::cout << "init \n";

    greenDurration_ = greenDuration;
    yellowDurration_ = yellowDuration;
    redDurration_ = redDuration;

    std::cout << "all durrations set ready to start tick \n";
}

void stoplight::tick()
{
    std::cout << "starting light tick \n";

    using namespace std::chrono;

    switch (currentState_)
    {
    case LightState::GREEN:
        std::cout << "green active";

        break;

    case LightState::YELLOW:
        std::cout << "yellow active";

        break;

    case LightState::RED:
        std::cout << "red active";

        break;
    }
}