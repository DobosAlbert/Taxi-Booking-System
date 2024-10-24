#ifndef TAXI_H
#define TAXI_H

class Taxi {
public:
    float cost;
    int taxiType, kilometers, taxiTypeFinal;
    static float costFinal;

    void typeTaxi();
};

#endif
