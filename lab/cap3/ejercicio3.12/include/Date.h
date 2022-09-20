#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date
{
    public:
        Date(int d, int m, int y):
            day(d), year(y){
            if( m >= 1  && m <= 12){
                month = m;
            } else {
                month = 1;
            }
        }

        void setDay( int d ) {
            day = d;
        }
        void setMonth( int m ) {
            month = m;
        }
        void setYear( int y ) {
            year = y;
        }

        int getDay() const {
            return day;
        }
        int getMonth() const {
            return month;
        }
        int getYear() const {
            return year;
        }

        void displayDate() const {
            std::cout << day << " / " << month << " / " << year << std::endl;
        }

    private:
        int day;
        int month;
        int year;
};

#endif // DATE_H
