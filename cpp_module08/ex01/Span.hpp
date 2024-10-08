#ifndef SPAN
# define SPAN

# include <numeric>
# include <vector>
# include <iostream>
# include <algorithm>
# include <exception>
# include <cstdlib>
# include <ctime>
# include <cstdarg>

class	Span
{
	public:
		Span();
		Span(const Span &);
		~Span();
		Span &	operator=(const Span &);

		Span(unsigned int n);

		void			addNumber(int);
		void			addNumbers(int, ...);
		void			addVec(std::vector<int>::const_iterator, std::vector<int>::const_iterator);
		void			addRandom(int);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();

	private:
		unsigned int		allocated;
		unsigned int		size;
		std::vector<int>	vector;

		class	overflowException: public std::exception
		{
			public:
				const char *	what() const throw();
		};
		class	noSpanException: public std::exception
		{
			public:
				const char *	what() const throw();
		};
};
#endif