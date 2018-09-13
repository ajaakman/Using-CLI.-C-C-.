using CPPWRAPPER;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharp_CLI
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("C Sharp");
            CLIWrapperClass cli = new CLIWrapperClass();

            Console.WriteLine(cli.GetCLI_var());
            Console.ReadLine();
            cli.SetCLI_var(8);
            Console.WriteLine(cli.GetCLI_var());
            Console.ReadLine();            
        }
    }
}
