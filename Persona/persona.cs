using System;
namespace Persona
{
	public class persona
	{
		public string nombre;
		public string email;
		public int edad;
		
		public persona()
		{
			
				Console.WriteLine("\n¿Cual es tu nombre? \n\r");
				nombre = Console.ReadLine();
			    Console.WriteLine("\n¿Cual es tu Email? \n\r");
			    email =  Console.ReadLine();
			    Console.WriteLine("\n¿Cual es tu edad? \n\r");
			    edad =  int.Parse(Console.ReadLine());
			    
			    Console.Clear();
			    
			    Console.WriteLine("\n*"+nombre );
			    Console.WriteLine("\n*"+email );
			    Console.WriteLine("\n*"+edad );
			    
			    
		}
	}
}
