#include <iostream>
#include <memory>

using namespace std;

class IMotorcycle
{
    public:
        virtual void drive() = 0;
        virtual ~IMotorcycle() { cout << "~IMotorcycle" << endl;};
};

class Motorcycle : public IMotorcycle
{
    public:
        void drive() { cout << "Driving the motorcycle" << endl; };
};

class ProxyMotorcycle : public IMotorcycle
{
    public:
        ProxyMotorcycle(int age) : mAge(age) {}
        void drive()
        {
            if(mAge > 18){
                motorcycle->drive();
            } else {
                cout << "Driver too young to drive a motorcycle." << endl;
            }
        }

    private:
        unique_ptr<IMotorcycle> motorcycle = make_unique<Motorcycle>();
        int mAge;
};

int main() {

  std::unique_ptr<IMotorcycle> motorcycle = make_unique<ProxyMotorcycle>(16);
  motorcycle->drive();

  motorcycle = make_unique<ProxyMotorcycle>(20);
  motorcycle->drive();

  return 0;
}