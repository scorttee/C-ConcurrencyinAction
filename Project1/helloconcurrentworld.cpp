#include<iostream>
#include<thread>

void hello()
{
	std::cout << "hello concurrent world";
}

int main()
{
	std::thread t(hello);
	t.join();
}