#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", PresidentialPardonForm::sign, PresidentialPardonForm::exec), _target("default")
{

}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", PresidentialPardonForm::sign, PresidentialPardonForm::exec), _target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm("PresidentialPardonForm", PresidentialPardonForm::sign, PresidentialPardonForm::exec), _target(copy._target)
{
	
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	*this = PresidentialPardonForm(rhs._target);
    return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	(void)executor;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

std::string PresidentialPardonForm::getTarget() const
{
	return _target;
}

std::ostream& operator<<(std::ostream &out, const PresidentialPardonForm& b)
{
	const AForm& form = b;
    out << form;
	out << ", target: " << b.getTarget();

    return out;
}
