#ifndef MISSION_H
#define MISSION_H
#include <iostream>
#include <string>

class Mission
{
public:
    Mission();
    ~Mission();
    // MISSION(const MISSION& entre);
     //MISSION& operator = (const MISSION& entre);

    Mission(std::string nbPersonne, std::string descriptifMission, std::string nbHeure);
    void setNbPersonne(std::string nombrepersonne);
    std::string getNbPersonne();
    void setDescriptifMission(std::string discrptiondemission);
    std::string getdescriptifMission();
    void setNbHeure(std::string NombreHeure);
    std::string getNbHeure();


private:

    std::string nbPersonne;

    std::string descriptifMission;

    std::string nbHeure;
   




};
#endif