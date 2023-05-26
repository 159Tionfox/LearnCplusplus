#include <iostream>

int main()
{
	// C/C++
	short a = 12345;
	int b = 1234567891;
	//long [windows 4 byte]/[Linux 8 byte]
	std::cout<<sizeof(long)<<std::endl;	//Output long byte
	long long c = 123456789123456789;
	
	float d = 1.2f;
	double e = 1.2;
	
	bool f = true;//false
	
	char g = 'A'; //ASCII
	
	char h[] = "abcdefg";
	
	// C++
	std::string i = "abcdefg";
}
