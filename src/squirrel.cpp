#include "squirrel.hpp"

Squirrel::Squirrel() : name_("Unnamed") {}

Squirrel::Squirrel(const std::string& name) : name_(name) {}

std::string Squirrel::getName() const {
    return name_;
}

void Squirrel::setName(const std::string& name) {
    name_ = name;
}

