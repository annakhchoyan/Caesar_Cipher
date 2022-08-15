#include <iostream>

std::string encryption(std::string string, int shift)
{
	std::string result = "";

	for (int i = 0; i < string.length(); ++i)
	{
		if (isupper(string[i]))
		{
			result += char(int(string[i] + shift - 65) % 26 + 65);
		}
		else
		{
			result += char(int(string[i] + shift - 97) % 26 + 97);
		}
	}

	return result;
}

int main()
{
	std::string string;
	int shift;

	std::cout << "Enter a string: ";
	std::cin >> string;
	std::cout << "Enter a shift: ";
	std::cin >> shift;
	std::cout << std::endl;

	std::cout << "String: " << string << std::endl;
	std::cout << "Shift: " << shift << std::endl;
	std::cout << "Cipher: " << encryption(string, shift) << std::endl;

	return 0;
}
