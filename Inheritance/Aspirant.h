#ifndef ASPIRANT_H
#define ASPIRANT_H

#include "student.h"

class Aspirant : public Student {
private:
    string thesisTopic;
public:
    Aspirant();  
    Aspirant(const std::string& name, int age, int studentId, const std::string& thesisTopic);

    const string& getThesisTopic() const;
    void setThesisTopic(const std::string& thesisTopic);

    void display() const;
};

#endif 
