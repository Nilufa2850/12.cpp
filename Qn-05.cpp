/*5.Define a class matrix to represent 3x3 matrix. Provide appropriate
instance methods. Also define operator +,-,* 
*/
#include<iostream>
using namespace std ;

class Matrix
{
    private :
        int a[3][3] ;
    public:
        void setData()
        {
            cout<<"Enter 3x3 Matrix\n";

            for(int i=0 ; i<3 ; i++)
                for (int j=0 ; j<3 ; j++)
                    cin>>a[i][j] ;
        }
        void showData()
        {
            for(int i=0 ; i<3 ; i++)
            {
                for (int j=0 ; j<3 ; j++)
                    cout<<a[i][j]<<" " ;
                cout<<"\n" ;
            }
            cout<<endl ;
        }
        Matrix operator + (Matrix m) //Addition
        {
            Matrix temp ;
            for(int i=0 ; i<3 ; i++)
                for (int j=0 ; j<3 ; j++)
                    temp.a[i][j] = a[i][j] + m.a[i][j] ;
            return temp ; 
        }
        Matrix operator - (Matrix m) //Subtraction
        {
            Matrix temp ;
            for(int i=0 ; i<3 ; i++)
                for (int j=0 ; j<3 ; j++)
                    temp.a[i][j] = a[i][j] - m.a[i][j] ;
            return temp ;
        }
        Matrix operator * (Matrix m)
        {
            Matrix temp ;
            int sum ;

            for(int i=0 ; i<3 ; i++)
            {
                for (int j=0 ; j<3 ; j++)
                {
                    sum = 0 ;
                    for (int k=0 ; k<3 ; k++)
                        sum += a[i][k] * m.a[k][j] ;

                    temp.a[i][j] = sum ;
                }
            }
            return temp ;
            
        }

};
int main ()
{
    Matrix m1,m2,m3;
    m1.setData() ;
    m2.setData() ;

    cout<<"\n Matrix - m1\n" ;
    m1.showData() ;
    cout<<"\n Matrix - m2\n" ;
    m2.showData() ;

    m3 = m1+m2 ;
    cout<<"\nAddition\n" ;
    m3.showData() ;

    m3 = m1-m2 ;
    cout<<"\nSubtraction\n" ;
    m3.showData() ;

    m3 = m1*m2 ;
    cout<<"\nMultiplication\n" ;
    m3.showData() ;


}
