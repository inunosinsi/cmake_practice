#include "hoge.h"
#include <iostream>
#include <string.h>

Hoge::Hoge(){
	std::cout << "start" << std::endl;
}

Hoge::~Hoge(){
	std::cout << "end" << std::endl;
}

void Hoge::Greeting(){
	strcpy(message, "hello world");
	std::cout << message << std::endl;
}