#include "AccessKey.h"
#include <iostream>
#include <chrono>
#include <ctime>
#include <iomanip>

AccessKey::AccessKey(
    const std::string& ownerId,
    const std::string& fullName,
    const std::string& organization
) : BasePassKey(ownerId, fullName, organization) {
}

void AccessKey::Pass() {
    std::time_t currentTime =
        std::chrono::system_clock::to_time_t(
            std::chrono::system_clock::now()
        );

    std::tm* localTime = std::localtime(&currentTime);

    std::cout << "Access granted";

    if (localTime != nullptr) {
        std::cout << " at "
                  << std::put_time(localTime, "%Y-%m-%d %H:%M:%S");
    }

    std::cout << std::endl;
}
