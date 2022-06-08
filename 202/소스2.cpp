class CBox
{
private :
	double width;
	
public :
	void setW(double w) {
		width = w;
	}
};

class ChildBox : CBox {
public :
	void setWidth(double w) {
		setW(w);
	}
};