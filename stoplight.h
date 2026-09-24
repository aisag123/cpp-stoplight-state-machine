#ifndef STOPLIGHT_H
#define STOPLIGHT_H
class stoplight
{
public:
    void init(int greenDuration, int yellowDuration, int redDuration);
    void setGreenDurration(int durration);
    int getGreenDurration() const;

    void setYellowDurration(int durration);
    int getYellowDurration() const;

    void setRedDurration(int durration);
    int getRedDurration() const;

    void cycle();

private:
    int green_durr;
    int yellow_durr;
    int red_durr;
};

#endif // STOPLIGHT_H