#include "BasePassKey.h"

BasePassKey::BasePassKey(
    const std::string& ownerId,
    const std::string& fullName,
    const std::string& organization
) {
    this->ownerId = ownerId;
    this->fullName = fullName;
    this->organization = organization;
}

std::string BasePassKey::getOwnerId() const {
    return ownerId;
}

std::string BasePassKey::getFullName() const {
    return fullName;
}

std::string BasePassKey::getOrganization() const {
    return organization;
}

void BasePassKey::Pass() {
}