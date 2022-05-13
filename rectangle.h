///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file rectangle.h
/// @version 1.0
///
/// @author Jared Inouye <jinouye7@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////


#include "shape.h"

class rectangle : public shape {

protected:
    double length = 0 ;
    double width = 0;

public:
    rectangle(double newLength, double newWidth);

    double getLength() const;

    double getWidth() const;

    double compute_area() override;
};


