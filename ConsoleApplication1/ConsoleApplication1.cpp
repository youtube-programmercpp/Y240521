#include <iostream>
#include <string>
#include <Dll2/evaluate.h>

int main()
{
	for (;;) {
		std::string s;
		if (std::getline(std::cin, s)) {
			const auto value = Dll2::evaluate(s.c_str());
			try {
				std::cout << "= " << value << std::endl;
			}
			catch (const std::exception& e) {
				std::cerr << e.what() << std::endl;
			}
		}
		else
			return 0;
	}
}
