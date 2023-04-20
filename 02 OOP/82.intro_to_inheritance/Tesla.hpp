#pragma once
#include <typeinfo>
#include <string>

class Vehicle {
public:
    void move();
    void set_name(std::string_view name);
    std::string_view get_name() const;

private:
    uint32_t m_Power;
    uint32_t m_NumTyres;
    std::string m_Name;
};


class Tesla : public Vehicle {
private:
    uint32_t m_BatteryPower;
    void own() {  }

};