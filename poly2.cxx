#ifndef POLY2_H
#define POLY2_H
#include <cstdlib>   // Provides NULL
#include <iostream>  // Provides ostream

namespace main_savitch_5
{
            // CONSTRUCTORS and DESTRUCTOR
        polynomial(double c = 0.0, unsigned int exponent = 0)
	{
	  if(c = 0.0)
	    current_degree = exponent;
	    current_degree = exponent;
	}
        polynomial(const polynomial& source)
        ~polynomial( )
	{
	  delete;
	}

        // MODIFICATION MEMBER FUNCTIONS
        polynomial& operator =(const polynomial& source)
        void add_to_coef(double amount, unsigned int exponent)
        void assign_coef(double coefficient, unsigned int exponent)
        void clear( )
        
        // CONSTANT MEMBER FUNCTIONS
        double coefficient(unsigned int exponent) const
        unsigned int degree( ) const { return current_degree; }
        polynomial derivative( ) const
        double eval(double x) const
        void find_root(
            double& answer,
            bool& success,
            unsigned int& iterations,
            double guess = 0,
            unsigned int maximum_iterations = 100,
            double epsilon = 1e-8
            )
            const
        unsigned int next_term(unsigned int e) const
        unsigned int previous_term(unsigned int e) const
        
        // CONSTANT OPERATORS
        double operator( ) (double x) const { return eval(x); }
	
    private:
        polynode *head_ptr;             // Head pointer for list of terms
        polynode *tail_ptr;             // Tail pointer for list of terms
        mutable polynode *recent_ptr;   // Most recently used term
        unsigned int current_degree;    // Current degree of the polynomial
        // A private member function to aid the other functions:
        void set_recent(unsigned int exponent) const;
    };
    
    // NON-MEMBER BINARY OPERATORS
    polynomial operator +(const polynomial& p1, const polynomial& p2)
    polynomial operator -(const polynomial& p1, const polynomial& p2)
    polynomial operator *(const polynomial& p1, const polynomial& p2)
    
    // NON-MEMBER OUTPUT FUNCTION
    std::ostream& operator << (std::ostream& out, const polynomial& p)

}
#endif
