/*1. Define a class Complex with properties and methods.
Define following operator in the class
i.    +
ii.   -
iii.  *
iv.   ==
*/

#include<iostream>
using namespace std ;

class Complex
{
    private :
        int real , img ;
    public :
        Complex(int a , int b) : real(a),img(b) { }
        Complex(){real=0 ; img=0 ;}
        void showData()
        {
            cout<<real<<" "<<img<<endl ;
        }
        Complex operator + (Complex c)
        {
            Complex temp ;
            temp.real = real + c.real ;
            temp.img = img + c.img ;
            return temp ;
        }
        Complex operator - (Complex c)
        {
            Complex temp ;
            temp.real = real - c.real ;
            temp.img = img - c.img ;
            return temp ;
        }
        Complex operator * (Complex c)
        {
            Complex temp ;
            temp.real = (real*c.real) - (img*c.img) ;
            temp.img = (real*c.img) + (img*c.real)  ;
            return temp ;
        }
        bool operator == (Complex c)
        {
            if (real == c.real && img == c.img)
                return true ;
            else 
                return false ;
        }
        
};
int main ()
{
    Complex c1(1,2), c2(1,2), c3 ;

    cout<<"Data Values :\n" ;
    c1.showData() ;
    c2.showData() ;

    //1
    cout<<"\nAddition"<<endl ;
    c3 = c1+c2 ;
    c3.showData() ;

    //2
    cout<<"\nSubtraction"<<endl ;
    c3 = c1-c2 ;
    c3.showData() ;

    //3
    cout<<"\nMultiplication"<<endl ;
    c3 = c1*c2 ;
    c3.showData() ;

    //4
    cout<<"\nCompare"<<endl ;
    if (c1==c2)
        cout<<"same"<<endl ;
    else
        cout<<"Not same"<<endl ;


    return 0 ;

}
