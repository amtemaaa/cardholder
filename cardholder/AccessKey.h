#pragma once

#include "BasePassKey.h"

class AccessKey : public BasePassKey {
public:
    AccessKey(
        const std::string& ownerId,
        const std::string& fullName,
        const std::string& organization
    );

    void Pass() override;
};
