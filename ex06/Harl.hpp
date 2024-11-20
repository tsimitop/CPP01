#ifndef HARL_H
# define HARL_H
#include <iostream>

typedef enum
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
} compLevel;

class Harl
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
public:
	void	complain(std::string level);
	Harl();
	~Harl();
};

#endif