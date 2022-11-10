#ifndef __STATICPOINTARRAY_H__
#define __STATICPOINTARRAY_H__

#include <iostream>
#include "Point.h"

/**
 * Arreglo de enteros estático representado en una clase
*/
class StaticStudentArray {
        int size;
        Point *data;    
        friend std::ostream& operator<< (std::ostream &output, const StaticStudentArray &p);    
    public:
        StaticStudentArray(int size);
        StaticStudentArray(const StaticStudentArray &o);

        void setAt(int index, Point value);
        Point getAt(int index) const ;
        int getSize() const ;
        void print() const ;

        ~StaticStudentArray();
};


#endif