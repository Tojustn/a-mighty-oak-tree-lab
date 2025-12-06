#ifndef SQUIRREL_HPP
#define SQUIRREL_HPP

#include <string>

class Squirrel {
public:
    Squirrel();
    explicit Squirrel(const std::string& name);
    
    std::string getName() const;
    void setName(const std::string& name);
    
private:
    std::string name_;
};

#endif 

