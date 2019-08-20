class Animal
{
public:

    virtual void setLegs(int legs)=0;

    virtual void setFur(bool hasFur)=0;

    virtual void move()=0;

    virtual ~Animal() {};

};