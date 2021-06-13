#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>

class NinjaTrap
{

	public:

		NinjaTrap();
		NinjaTrap( NinjaTrap const & src );
		~NinjaTrap();

		NinjaTrap &		operator=( NinjaTrap const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, NinjaTrap const & i );

#endif /* ******************************************************* NINJATRAP_H */