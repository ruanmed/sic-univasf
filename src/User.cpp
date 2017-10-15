#include "User.hpp"
User::User()
{
	name = "User not defined";
	cpf = 0;
	email = "User not defined";
}
User::User(std::string& name,int cpf,std::string email,Address& address,Telephone& telephone,GeneralRegister& generalRegister)
{
	User::name = name;
	User::cpf = cpf;
	User::email = email;
	setAddress(address);
	setTelephone(telephone);
	setGeneralRegister(generalRegister);
}
User::~User()
{
	//adieu
}
void	User::setName(std::string& in)
{
	name = in;
}
void	User::getName(std::string& out)
{
	out = name;//ver se '=' está sobrecarregado como copiador na classe std::string
}
bool User::verifyCPF(int cpf)
{
	return true;//preguiça define kkkkkkk
}
void	User::setCPF(int in)
{
	if(verifyCPF(in))
		cpf = in;
}
int		User::getCPF(void)
{
	return cpf;
}
void	User::setEmail(std::string& in)
{
	email = in;
}
void	User::getEmail(std::string& out)
{
	out = email;
}
void	User::setAddress(std::string& street,int number,int CEP,std::string& UF)
{
	address.street = street;
	address.number = number;
	address.CEP = CEP;
	address.UF = UF;

}
void	User::setAddress(Address& in)
{
	address.street = in.street;
	address.number = in.number;
	address.CEP = in.CEP;
	address.UF = in.UF;
}
void	User::getAddress(Address& out)
{
	out.street = address.street;
	out.number = address.number;
	out.CEP = address.CEP;
	out.UF = address.UF;
}
void	User::setTelephone(int DDD,int number)
{
	telephone.DDD = DDD;
	telephone.number = number;
}
void	User::setTelephone(Telephone& in)
{
	telephone.DDD = in.DDD;
	telephone.number = in.number;
}
void	User::getTelephone(Telephone& out)
{
	out.DDD = telephone.DDD;
	out.number = telephone.number;
}
void	User::setGeneralRegister(int number,std::string& issuer)
{
	generalRegister.number = number;
	generalRegister.issuer = issuer;
}
void	User::setGeneralRegister(GeneralRegister& in)
{
	generalRegister.number = in.number;
	generalRegister.issuer = in.issuer;
}
void	User::getGeneralRegister(GeneralRegister& out)
{
	out.number = generalRegister.number;
	out.issuer = generalRegister.issuer;
}
