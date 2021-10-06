// Abstract class
#ifndef CALCGEO_H_
#define CALCGEO_H_

class ICalcGeo{
    public:
        virtual float getSurface()=0; // Pure virtual function
        virtual void affiche()=0; // Pure virtual function
};
#endif /* CALCGEO_H_ */
