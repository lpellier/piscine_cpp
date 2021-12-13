#include <iostream>
#include <string>
#include <cctype>
#include <limits>
#include <stdlib.h>
#include <iomanip>



class Contact {
private:
	// data
	std::string         _firstName;
	std::string         _lastName;
	std::string         _nickname;
	std::string         _phoneNumber;
	std::string         _darkestSecret;

public:
	// default constructor
	Contact             (void);
	// parameter constructor
	Contact             (std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret);
	// destructor
	~Contact             (void);
	// copy constructor
	Contact             (Contact const & src);
	// assignment operator
	Contact              & operator=(Contact const & src);

	// accessors
	std::string         getFirstName() const;
	std::string         getLastName() const;
	std::string         getNickname() const;
	std::string         getPhoneNumber() const;
	std::string         getDarkestSecret() const;
	// mutators
	void                setFirstName(std::string firstName);
	void                setLastName(std::string lastName);
	void                setNickname(std::string nickname);
	void                setPhoneNumber(std::string phoneNumber);
	void                setDarkestSecret(std::string darkestSecret);

	// methods
};
