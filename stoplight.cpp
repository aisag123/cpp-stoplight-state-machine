#include <string>
#include "stoplight.h"
#include <iostream>
#include <chrono>
#include <thread>
#include <ctime>
#include <iomanip>
#include <string>

void stoplight::init(int greenDuration, int yellowDuration, int redDuration, int pedestrianDurration)
{
    std::cout << "init \n";

    greenDurration_ = greenDuration;
    yellowDurration_ = yellowDuration;
    redDurration_ = redDuration;
    pedestrianDurration_ = pedestrianDurration;

    std::cout << "all durrations set ready to start tick \n";
}

void stoplight::log(const std::string &message)
{
    const auto now = std::chrono::system_clock::now();
    const std::time_t time = std::chrono::system_clock::to_time_t(now);

    std::cout << "[" << time << "] " << message << "\n";
}

void stoplight::pedestrianCrossButton()
{
    pedestrianWaiting_ = true;
}

void stoplight::tick()
{
    switch (currentState_)
    {
    case LightState::GREEN:
        log("green light");
        std::this_thread::sleep_for(std::chrono::seconds(greenDurration_));
        currentState_ = LightState::YELLOW;
        break;

    case LightState::YELLOW:
        log("yellow light");
        std::this_thread::sleep_for(std::chrono::seconds(yellowDurration_));
        currentState_ = LightState::RED;
        break;

    case LightState::RED:
        log("red light");

        if (checkForPedestrian() == true)
        {
            log("waiting for pedestrian");
            std::this_thread::sleep_for(std::chrono::seconds(pedestrianDurration_));
            pedestrianWaiting_ = false;
        }

        std::this_thread::sleep_for(std::chrono::seconds(redDurration_));
        cycles++;
        currentState_ = LightState::GREEN;
        break;
    }
}