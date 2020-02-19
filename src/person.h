/*
class c_Person
{
public:

	//Constructor
	c_Person(unsigned int in_Age, std::string in_Name) 
	{
		m_Age  = in_Age;
		m_Name = in_Name;
	}

	~c_Person() {  };

	// user-defined copy assignment, copy-and-swap form
	c_Person & operator=(c_Person other)
	{
		m_Age = other.m_Age;
		m_Name = other.m_Name;
		return *this;
	}

	std::string getName() { return m_Name;  }

private:
	unsigned int m_Age;
	std::string  m_Name;
};
*/