using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            for (; ; )
            {
                string s = Console.ReadLine();
                if (string.IsNullOrEmpty(s))
                    return;
                else
                {
                    Console.WriteLine("= {0}", ClassLibrary1.Class1.Evaluate(s));
                    continue;
                }
            }
        }
    }
}
