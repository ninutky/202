class Phone {
	void call();
	void receive();
	void sendMessage();
};

class Music {
	void soundOn();
	void soundOff();
};

class SmartPhone : Phone
{ 
public:
	SmartPhone();
	~SmartPhone();

private:

};

SmartPhone::SmartPhone()
{
}

SmartPhone::~SmartPhone()
{
}