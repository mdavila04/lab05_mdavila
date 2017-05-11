#ifndef POLY2_H
#define POLY2_H
#include <cstdlib>   // Provides NULL
#include <iostream>  // Provides ostream

namespace main_savitch_5
{
            // CONSTRUCTORS and DESTRUCTOR
        polynomial::polynomial(double c = 0.0, unsigned int exponent = 0)
	{
	  if(c = 0.0)
      {
        head_ptr->set_coef(0.0)
      head_ptr->set_exponent(0)
      current_degree = 0;
      }
    else
        head_ptr->set_exponent(exponent)
	    current_degree = exponent;
    if(c != 0.0)
        head_ptr->set_coef(c)
	}
        polynomial::polynomial(const polynomial& source)
        {
            head_ptr = source.head_ptr;
            current_degree = source.current_degree;
            tail_ptr = source.tail_ptr;
            for()//copy all data from source nodes to new nodes
            {
                head_ptr.set_coef(source.coefficient);
                head_ptr.set_exponent(source.degree);
            }
        }
        ~polynomial( )
	{
        clear();
	}

        // MODIFICATION MEMBER FUNCTIONS
        polynomial& operator =(const polynomial& source)
        {

        }
        void polynomial::add_to_coef(double amount, unsigned int exponent)
        {
            set_recent(exponent);
            recent_ptr->set_coef()
        }
        void polynomial::assign_coef(double coefficient, unsigned int exponent)
        {
            set_recent(exponent);
            if(exponent>current_degree && coefficient==0.0)
            {
                return;
            }
            if(recent_ptr == NULL)//no node then new node and care for tail_ptr
            {
                new polynode new_node;
                new_node->set_coef(coefficient);
                new_node->set_exponent(exponent);
            }
            if(exponent = 0 || coefficient != 0.0)
            {
                recent_ptr->set_coef(coefficient);
            }
            recent_ptr->set_coef(coefficient);
            recent_ptr->set_exponent(exponent);
        }
        void polynomial::clear( )
        {
            polynode *n = head_ptr;
        while(n)
        {
            Node *del = n;
            n->fore();
            delete del;
        }

        }
        
        // CONSTANT MEMBER FUNCTIONS
        double polynomial::coefficient(unsigned int exponent) const
        unsigned int polynomial::degree( ) const { return current_degree; }
        polynomial polynomial::derivative( ) const
        double polynomial::eval(double x) const
        void polynomial::find_root(
            double& answer,
            bool& success,
            unsigned int& iterations,
            double guess = 0,
            unsigned int maximum_iterations = 100,
            double epsilon = 1e-8
            )
            const
        unsigned int polynomial::next_term(unsigned int e) const
        unsigned int polynomial::previous_term(unsigned int e) const
        
        // CONSTANT OPERATORS
        double operator( ) (double x) const { return eval(x); }
	
    private:
        polynode *head_ptr;             // Head pointer for list of terms
        polynode *tail_ptr;             // Tail pointer for list of terms
        mutable polynode *recent_ptr;   // Most recently used term
        unsigned int current_degree;    // Current degree of the polynomial
        // A private member function to aid the other functions:
        void set_recent(unsigned int exponent) const;
	{
	  if(exponent == 0) //if exponent is 0 set recent to head
	    recent_ptr = head_ptr;
	  if(exponent >= current_degree)// if exponent greater than current degree set to tail
	    recent_ptr = tail_ptr;
	  if(exponent < recent_ptr->exponent) //Move recent_ptr back to match exponent
	    {

        	      for(;recent_ptr != NULL && recent_pointer->exponent != exponent; recent_pointer = recent_pointer ->back());
                    if(recent_pointer == NULL)
                    {
                        recent_pointer = head_ptr;
                    }
	    }
	  else//move recent foreward to match exponent
	    {
        for(;recent_ptr != NULL && recent_pointer->exponent != exponent; recent_pointer = recent_pointer ->fore());//moves forward to tail
            if(recent_pointer == tail_ptr)
	      const node *cursor;
	      for(cursor = recent_ptr; cursor != NULL; cursor = cursor->fore())
		{
		  if(recent_ptr->exponent != exponent)
		    recent_ptr->fore();
		  else continue;
		}
	    }
	}
	    
    };
    
    // NON-MEMBER BINARY OPERATORS
    polynomial operator +(const polynomial& p1, const polynomial& p2)
    polynomial operator -(const polynomial& p1, const polynomial& p2)
    polynomial operator *(const polynomial& p1, const polynomial& p2)
    
    // NON-MEMBER OUTPUT FUNCTION
    std::ostream& operator << (std::ostream& out, const polynomial& p)

}
#endif