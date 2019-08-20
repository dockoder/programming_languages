#include <string>
#include <car.h>

Car::setColor(const string& color)
{
    m_color = color;
}

Car::setGear (const int gears)
{
    m_gears = gears;
}

Car::setHp(const int hp)
{
    m_hp = hp;
}

Car::getProperties() const
{
    cout << "Properties: " << m_color << " color, " << m_gears << " gears and " << m_hp << "of horsepower";  
}
    
