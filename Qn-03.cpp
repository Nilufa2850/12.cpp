/*3. In Qn 2, Overload ++(pre,post)in sec .
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

            normalization() ;
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
        Time operator++ ()
        {
            Time temp ;
            temp.sec = ++sec ;
            temp.min = min ;
            temp.hr = hr ;

            temp.normalization() ;
            return temp ;
        }
        Time operator++ (int)
        {
            Time temp ;
            temp.sec = sec++ ;
            temp.min = min ;
            temp.hr = hr ;

            temp.normalization() ;
            return temp ;
        }

        
};

int main ()
{
    Time t1(8,06,59), t2(8,30,61) ;
    t1.showData() ;
    t2.showData() ;

    ++t1 ;
    t1.showData() ;
    t1++ ;
    t1.showData() ;

    return 0 ;

}
