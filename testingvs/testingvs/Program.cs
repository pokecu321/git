using System;


  class Program
  {
    static void Main(string[] args)
    {
        int angka = 0;
        
        Console.Write("Masukkan angka akhir: ");
        int akhir = Convert.ToInt32(Console.ReadLine());
        for (int i = angka; i <= akhir; i++)
        {
            Console.WriteLine(i);
        }
    }    
  }
  
