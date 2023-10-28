#include <iostream>

using namespace std;

class Cargo {
public:
	void setCargo(std::string &) const;
	void setSueldo(std::string &) const;
	void setTipoCargo(int &) const;
private:
	std::string cargo;
	std::string sueldo;
	int tipo_cargo;
}
