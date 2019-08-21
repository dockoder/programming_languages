#include <string>
#include <iostream>


using namespace std;

class  Weapon 
{
public:
    Weapon() {mStr = "New Weapon";}

    virtual void assembly() = 0;

    virtual ~Weapon() { cout << "~Weapon\n"; }

protected:
    string mStr;
};

class Tank : public Weapon 
{
public:
    Tank() { mStr = "New Weapon";}

    void assembly() 
    {
         cout << "Tank assembled\n"; 
    }

    ~Tank() { cout << "~Tank\n"; }

protected:
    string mStr;
};

//Decorator Abstract class
class WeaponDecorator : public Weapon
{
public:
    virtual void assembly() = 0;

    virtual ~WeaponDecorator() { cout << "~WeaponDecorator\n"; }
};

//Decorator Concrete class
class Aim : public WeaponDecorator
{
public:
    Aim(Weapon *weapon) : mWeapon(weapon) {}

    void assembly()
    {
        cout << "Aim assembled\n";
    }

    ~Aim() 
    { 
        cout << "~Aim\n"; 
        delete mWeapon;
    }

private:
    Weapon *mWeapon;
};

//Decorator Concrete class
class Armour : public WeaponDecorator
{
public:
    Armour(Weapon *weapon) : mWeapon(weapon) {}

    void assembly()
    {
        cout << "Armour assembled\n";
    }

    ~Armour() 
    { 
        cout << "~Armour\n"; 
        delete mWeapon;
    }

private:
    Weapon *mWeapon;
};

//Decorator Concrete class
class XtraPower : public WeaponDecorator
{
public:
    XtraPower(Weapon *weapon) : mWeapon(weapon) {}

    void assembly()
    {
        cout << "XtraPower assembled\n";
    }

    ~XtraPower() 
    { 
        cout << "~XtraPower\n"; 
        delete mWeapon;
    }

private:
    Weapon *mWeapon;
};

int main(void)
{
    Weapon *weapon = new XtraPower(new Armour( new Aim( new Tank())));

    delete weapon;
    
    return 0;



}