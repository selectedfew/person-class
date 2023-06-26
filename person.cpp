#include "person.h"

void Person::about() const {
  std::cout
    <<"            Name: "<<m_firstName<<' '<<m_lastName<<std::endl
    <<"          Gender: "<<m_gender<<std::endl
    <<"             Age: "<<m_age<<std::endl
    <<"          Weight: "<<m_weight<<std::endl
    <<"Believes in God?: "<<(m_believesInGod ? "true" : "false")<<std::endl;
}

const string & Person::firstName() const { return m_firstName; }

const string & Person::lastName() const { return m_lastName; }

const char & Person::gender() const { return m_gender; }

const int & Person::age() const { return m_age; }

const float & Person::weight() const { return m_weight; }

const bool & Person::believesInGod() const { return m_believesInGod; }
