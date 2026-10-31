#pragma once

#include <string>

class BasePassKey {
private:
    std::string ownerId;
    std::string fullName;
    std::string organization;

public:
    BasePassKey(
        const std::string& ownerId,
        const std::string& fullName,
        const std::string& organization
    );

    virtual ~BasePassKey() = default;

    std::string getOwnerId() const;
    std::string getFullName() const;
    std::string getOrganization() const;

    virtual void Pass();
};