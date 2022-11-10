#include <iostream>
#include "StaticPointArray.h"

StaticStudentArray::StaticStudentArray(int size) {
    data = new Point[size];
    this->size = size;
}

StaticStudentArray::StaticStudentArray(const StaticStudentArray &o) {
    size = o.size;
    data = new Point[o.size];
    for(int i = 0; i < size; i++)
        data[i] = o.data[i];
}

void StaticStudentArray::setAt(int index, Point value) {
    if(index >= 0 && index < size)
        data[index] = value;
}

Point StaticStudentArray::getAt(int index) const {
    if(index >= 0 && index < size)
        return data[index];            
}

int StaticStudentArray::getSize() const {
    return size;
}

void StaticStudentArray::print() const {
    for(int i = 0; i < size; i++)
        std::cout << data[i] << " ";
    std::cout << std::endl;
}

StaticStudentArray::~StaticStudentArray() {
    delete [] data;
}

std::ostream& operator<<(std::ostream &output, const StaticStudentArray &p) {
    for(int i = 0; i < p.size; i++)
        output << p.data[i] << " ";
    return output;
}