#include <iostream>
#include <thread>
#include <chrono>

int main()
{
	int start(0);
	std::cout<<"Enter the start of the countdown :" << std::endl;
	std::cin >> start;
	while(start > 0){
    	start -= 1;
    	std::this_thread::sleep_for (std::chrono::seconds(1));
    	std::cout << start << std::endl;
	}
	std::cout << "Countdown completed." << std::endl;
	return 0;
}
