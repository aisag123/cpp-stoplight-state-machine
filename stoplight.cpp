#include <string>
#include "stoplight.h"
#include <iostream>
#include <chrono>
#include <thread>
#include <ctime>
#include <iomanip>
#include <string>

void stoplight::init(int greenDuration, int yellowDuration, int redDuration)
{
    std::cout << "init \n";

    greenDurration_ = greenDuration;
    yellowDurration_ = yellowDuration;
    redDurration_ = redDuration;

    std::cout << "all durrations set ready to start tick \n";
}

void stoplight::log(const std::string &message)
{
    const auto now = std::chrono::system_clock::now();
    const std::time_t time = std::chrono::system_clock::to_time_t(now);

    std::cout << "[" << time << "] " << message;
}

void stoplight::tick()
{
    std::cout << "starting light tick \n";

    switch (currentState_)
    {
    case LightState::GREEN:
        log("green light");
        break;

    case LightState::YELLOW:
        log("yellow light");
        break;

    case LightState::RED:
        log("red light");
        break;
    }
}