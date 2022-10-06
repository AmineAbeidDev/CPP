#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137)
{
    this->target = "{NO TARGET SPECIFIED}";
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
{
	*this = obj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	this->target = obj.target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	try
	{
    	if (this->getSign() == false || executor.getGrade() > this->getGradeToExec())
        	throw (gradeTooLowException);

		std::ofstream file;

		file.open(this->getName() +  "_shrubbery");

		file << "              _{\\ _{\\{\\/}/}/}__ "               << std::endl;
		file << "             {/{/\\}{/{/\\}(\\}{/\\} _ "           << std::endl;
		file << "            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _ "       << std::endl;
		file << "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\} "  << std::endl;
		file << "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/} "        << std::endl;
		file << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/} "        << std::endl;
		file << "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\} "  << std::endl;
		file << "      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\} "   << std::endl;
		file << "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\} "  << std::endl;
		file << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/} " << std::endl;
		file << "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_) " << std::endl;
		file << "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/} " << std::endl;
		file << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\} "  << std::endl;
		file << "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\} "   << std::endl;
		file << "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_) "     << std::endl;
		file << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/} "         << std::endl;
		file << "             {/{\\{\\{\\/}/}{\\{\\}/} "            << std::endl;
		file << "              {){/ {\\/}{\\/} \\}\\} "             << std::endl;
		file << "              (_)  \\.-'.-/ "                      << std::endl;
		file << "          __...--- |'-.-'| --...__ "               << std::endl;
		file << "   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__ "    << std::endl;
		file << " -\"    \' .  . \'    |.\'-._| \'  . .  \'   jro " << std::endl;
		file << " .  '-  '    .--'  | \'-.\'|    .  \'  . \' "      << std::endl;
		file << "          ' ..     |'-_.-| "                       << std::endl;
		file << "  .  \'  .       _.-|-._ -|-._  .  '  . "          << std::endl;
		file << "              .\'   |'- .-|   \'. "                << std::endl;
		file << "  ..-\'   \' .  \'.   `-._.-�   .\'  \'  - . "     << std::endl;
		file << "   .-\' \'        \'-._______.-\'     \'  . "      << std::endl;
		file << "        .      ~, "                                << std::endl;
		file << "    .       .   |\\   .    \' \'-. "               << std::endl;
		file << "    ___________/  \\____________ "                 << std::endl;
		file << "   /  Why is it, when you want \\ "                << std::endl;
		file << "  |  something, it is so damn   | "                << std::endl;
		file << "  |    much work to get it?     | "                << std::endl;
		file << "   \\___________________________/ "                << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
