/*4. In Qn 2, Overload + to add Two Time .
2. Create a class Time , fields are hr, min , sec.
Overload geater than (>) operator to compare two time objects.*/

#include<iostream>
using namespace std ;

class Time
{
    private :
        int hr,min,sec ;
    public :
        Time (int a=0,int b=0,int c=0)
        {
            hr=a ;
            min=b ;
            sec=c ;
        }
        void normalization()
        {
            min += sec/60 ;
            sec%=60 ;
            hr += min/60 ;
            min%=60 ;
        }
        void showData()
        {
            normalization() ;
            cout<<hr<<" : "<<min<<" : "<<sec<<endl ;
        }
        Time operator +(Time t)
        {
            Time temp ;
            temp.hr = hr+t.hr ;
            temp.min = min + t.min ;
            temp.sec = sec + t.sec ;

            temp.normalization() ;
            return temp ;
        }    
};

int main ()
{
    Time t1(8,05,65), t2(8,30,50) , t3;
    t1.showData() ;
    t2.showData() ;

    t3 = t1+t2 ;
    t3.showData() ;

    return 0 ;

}
