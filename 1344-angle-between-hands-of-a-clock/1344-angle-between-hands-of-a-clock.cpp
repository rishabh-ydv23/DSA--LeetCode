class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minuteAngle=minutes*6.0;       //60 min 360deg    1min =6 deg
        //12 ghante 360 deg   1hour=360/12= 30deg        1 minute=0.5 deg
        double hourAngle=(hour%12) * 30 + minutes* 0.5;

        double diff= abs(hourAngle-minuteAngle);
        return min(diff,360-diff);  
    }
};