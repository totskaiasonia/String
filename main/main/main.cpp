#include"C_String.h"

int main()
{
	C_String* str_2 = new C_String("Hello");
	C_String* str_3 = new C_String(*str_2);
	std::cout << *str_3 << "\n";
	std::cout << *(*str_2 + *str_3);
}