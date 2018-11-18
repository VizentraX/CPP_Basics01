#include <iostream>
#include <string>

class InheritanceVirtual
{
public:
	virtual std::string GetName() { return "entity"; }
};

class InheritanceVirtualChild : public InheritanceVirtual
{
private:
	std::string m_name;
public:
	InheritanceVirtualChild(const std::string& name) : m_name(name) {}; 
	std::string GetName() override { return m_name; }
};

void printName(InheritanceVirtual* e)
{
	std::cout << e->GetName() << std::endl;
}

int main()
{
	InheritanceVirtual* e = new InheritanceVirtual();
	printName(e);

	InheritanceVirtualChild* p = new InheritanceVirtualChild("vishnu");
	printName(p);
	
}