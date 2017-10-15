#ifndef USER_HPP_
#define USER_HPP_
#include <string>
typedef struct
{
	std::string street;
	int number;
	int CEP;
	std::string UF;

}Address;
typedef struct
{
	int DDD;
	int number;

}Telephone;

typedef struct
{
	int number;
	std::string issuer;

}GeneralRegister;

class User
{
	private:
		std::string name;
		int cpf;
		std::string email;
		Address address;
		Telephone telephone;
		GeneralRegister generalRegister;
		bool verifyCPF(int cpf);
	public:
		User();
		User(std::string& name,int cpf,std::string email,Address& address,Telephone& telephone,GeneralRegister& generalRegister);
		~User();
		void	setName(std::string& in);
		void	getName(std::string& out);
		void	setCPF(int in);
		int		getCPF(void);
		void	setEmail(std::string& in);
		void	getEmail(std::string& out);
		void	setAddress(std::string& street,int number,int CEP,std::string& UF);
		void	setAddress(Address& in);
		void	getAddress(Address& out);
		void	setTelephone(int DDD,int number);
		void	setTelephone(Telephone& in);
		void	getTelephone(Telephone& out);
		void	setGeneralRegister(int number,std::string& issuer);
		void	setGeneralRegister(GeneralRegister& in);
		void	getGeneralRegister(GeneralRegister& out);


};
#endif /* USER_HPP_ */
