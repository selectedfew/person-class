#ifndef __PERSON_H__
#define __PERSON_H__

#include <iostream>

using std::string;

class Person{
  string m_firstName;
	string m_lastName;
	char m_gender;
	int m_age;
	float m_weight;
	bool m_believesInGod;
public:
	Person(
	  const string & t_firstName, 
	  const string & t_lastName, 
	  const char & t_gender,
	  const int & t_age,
	  const float & t_weight,
	  const bool & t_believesInGod 
	) 
	  :m_firstName(t_firstName), 
     m_lastName(t_lastName),
     m_gender(t_gender),
     m_age(t_age),
     m_weight(t_weight),
     m_believesInGod(t_believesInGod)
	{/*Bloo bla ble bleep*/}
	
	void about() const;
	const string & firstName() const;
	const string & lastName() const;
	const char & gender() const;
	const int & age() const;
	const float & weight() const;
	const bool & believesInGod() const;
};

#endif
