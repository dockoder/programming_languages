using System;
using System.Diagnostics.Contracts;

namespace ConsoleTutorial
{
    
    class Program
    {
        
        class Animal  
        {
            protected bool intInRange(int a, int b, int value) => (value > a && value < b);
            public int Temp {get;protected set;}
            public void SetTemp(int value)
            {
                /*
                if (!(value > 32 && value < 39))
                    throw new ArgumentException("Valor fora do escopo");
                    */
               //               

                Contract.Requires(!intInRange(34, 42, value), "Valor fora do escopo");
                Contract.EndContractBlock();
                this.Temp = value;
            }
        }
        class Cat  { public int Color {get;set;}}
        class Xana  { public string Nome {get;set;}}
        static void Main(string[] args)
        {
            var myCat = new Animal();
            myCat.SetTemp(0);            
            Console.WriteLine(myCat.Temp);
        }
    }
}
