#ifndef STOPLIGHT_H
#define STOPLIGHT_H

#include <string>

enum class LightState
{
    GREEN,
    YELLOW,
    RED
};

class stoplight
{
public:
    void init(int greenDuration, int yellowDuration, int redDuration, int pedestrainDurration);
    void tick();
    void log(const std::string &message);
    void pedestrianCrossButton();
    bool checkForPedestrian() { return pedestrianWaiting_; }

    int cycles{0};

private:
    LightState currentState_{LightState::GREEN};
    int greenDurration_{0};
    int yellowDurration_{0};
    int redDurration_{0};
    int pedestrianDurration_{0};
    bool pedestrianWaiting_{false};
};

#endif // STOPLIGHT_H