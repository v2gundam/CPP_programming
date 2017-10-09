using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{
	class Program
	{
		static void Main(string[] args)
		{
			Console.WriteLine("CurrentCulture:" + System.Globalization.CultureInfo.CurrentCulture.ToString());
			Console.WriteLine();


			string tmp = "콘솔 테스트 123 ABC";

			byte[] bArray = Encoding.Default.GetBytes(tmp);

			Console.WriteLine(Encoding.Default.EncodingName);
			Console.WriteLine(Encoding.Default.GetString(bArray));
			Console.WriteLine(bArray.Length);
			Console.WriteLine();

			byte[] u7Array = Encoding.Convert(Encoding.Default, Encoding.UTF7, bArray);
			Console.WriteLine(Encoding.UTF7.EncodingName);
			Console.WriteLine(Encoding.UTF7.GetString(u7Array));
			Console.WriteLine(u7Array.Length);
			Console.WriteLine();


			byte[] u8Array = Encoding.Convert(Encoding.Default, Encoding.UTF8, bArray);
			Console.WriteLine(Encoding.UTF8.EncodingName);
			Console.WriteLine(Encoding.UTF8.GetString(u8Array));
			Console.WriteLine(u8Array.Length);
			Console.WriteLine();

			byte[] uNArray = Encoding.Convert(Encoding.Default, Encoding.Unicode, bArray);
			Console.WriteLine(Encoding.Unicode.EncodingName);
			Console.WriteLine(Encoding.Unicode.GetString(uNArray));
			Console.WriteLine(uNArray.Length);
			Console.WriteLine();

			byte[] uAArray = Encoding.Convert(Encoding.Default, Encoding.ASCII, bArray);
			Console.WriteLine(Encoding.ASCII.EncodingName);
			Console.WriteLine(Encoding.ASCII.GetString(uAArray));
			Console.WriteLine(uAArray.Length);
			Console.WriteLine();

		}
	}
}
[출처][C#] 문자열 인코딩하기, UTF7, UTF8, Unicode 등 | 작성자 골드러쉬