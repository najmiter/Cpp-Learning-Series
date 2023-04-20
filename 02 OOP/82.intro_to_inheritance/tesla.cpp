#include "Tesla.hpp"
#include <iostream>

void Vehicle::move() {
    std::cout << "Move " << this->get_name() << std::endl;
}

void Vehicle::set_name(std::string_view name) {
    this->m_Name = name;
}

std::string_view Vehicle::get_name() const {
    return this->m_Name;
}
