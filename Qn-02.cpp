/*2. Create a class Time , fields are hr, min , sec.
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
            cout<<hr<<" : "<<min<<" : "<<sec<<endl ;
        }
        bool operator >(Time t)
        {
            if (hr>t.hr)
                return true ;

            else if (hr == t.hr)
            {
                if (min>t.min)
                    return true ;
        
                else if (min == t.min)
                {
                    if (sec>t.sec)
                        return true ;
                }
                else 
                    return false ;
            }
            else
                return false ;

        }  
};

int main ()
{
    Time t1(8,06,25), t2(8,30,61) ;
    t1.showData() ;
    t2.showData() ;

    if(t1>t2)
        cout<<"T1 > T2" ;
    else
        cout<<"T2 > T1" ;

    return 0 ;

}
