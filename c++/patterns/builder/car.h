#include <string>

class Car 
{
 public:
    void setColor(const string& color);

    void setGear (const int gears);

    void setHp(const int hp);

    void getProperties();
    
private:

    string m_color;
    int m_gears;
    int m_hp;
}