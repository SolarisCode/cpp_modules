#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template<typename T>
class Array
{
private:
    T * _tab;
    size_t _size;

public:
    Array(void)
    {
        this->_tab = new T[0];
        this->_size = 0;
    }

    Array(unsigned int n)
    {
        this->_tab = new T[n];
        this->_size = n;
    }

    virtual ~Array(void)
    {
        if (this->_tab)
            delete[] this->_tab;
    };

    size_t size() const
    {
        return this->_size;
    }

    Array(Array const & src)
    {
        *this = src;
    }

    Array & operator=(Array const & src)
    {
        size_t i = 0;
        this->_size = src.size();
        if (this->_tab)
            delete[] this->_tab;
        this->_tab = new T[src.size()];
        while (i < src.size())
        {
            this->_tab[i] = src._tab[i];
            i++;
        }
        return (*this);
    }

    T & operator[](int i) const
    {
        if (i > this->_size - 1 || i < 0)
            throw Array::IndexOutExceptions(); 
        return this->_tab[i]; 
    };

    class IndexOutExceptions : public std::exception
    {
        public:
            virtual const char *what() const throw()
            {
                return ("Exception : index is out of bounds\n");
            }
    };
};

#endif