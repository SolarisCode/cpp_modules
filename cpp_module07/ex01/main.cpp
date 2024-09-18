#include <iostream>
#include "iteration.hpp"
class Awesome
{
    public:
        Awesome( void ) : _n( 42 ) { return; }
        int get( void ) const { return this->_n; }
    private:
        int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }
int main()
{
    {
        std::cout << "**********************MY TEST**********************\n";
        std::string arr[4] = {"42 WOB", "42 BERLIN", "42 PARIS", "42 HAVRE"};
        iter(arr, 4, &say_hello);
        std::cout << "-----------------------------------------------------------\n";
        iter(arr, 4, &print_item);
    }
    std::cout << "**********************PROVIDED TEST**********************\n";
    {
        {
            int tab[] = { 0, 1, 2, 3, 4 };  // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
            Awesome tab2[5];

            iter( tab, 5, print<int> );
            iter( tab2, 5, print<Awesome> );
        }
    }
}