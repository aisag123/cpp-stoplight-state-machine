#ifndef STOPLIGHT_H
#define STOPLIGHT_H

enum class LightState
{
    GREEN,
    YELLOW,
    RED
};

class stoplight
{
public:
    void init(int greenDuration, int yellowDuration, int redDuration);

    void tick();

private:
    LightState currentState_{LightState::GREEN};
    int greenDurration_{0};
    int yellowDurration_{0};
    int redDurration_{0};
};

#endif // STOPLIGHT_H