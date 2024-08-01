#ifndef WEAPONDATA_H
#define WEAPONDATA_H

#include "entity.h" // Include the header where the enum is defined

struct WeaponData
{
    std::string name;
    int type; // Use int since the anonymous enum does not define a type
    int damage;
    int magazineSize;
    float fireRate;
    float reloadTime;

    WeaponData(std::string name, int type, int damage, int magazineSize, float fireRate, float reloadTime, int team)
        : name(name), type(type), damage(damage), magazineSize(magazineSize), fireRate(fireRate), reloadTime(reloadTime), team(team) {}
};


const WeaponData weaponData[] = {
    {"Sten", 0, 32, 32, 0.08f, 2.5f}, // Sten: 9mm, around 32 rounds, 500-550 RPM
    {"MP40", 1, 25, 32, 0.075f, 2.2f}, // MP40: 9mm, 32 rounds, 500-550 RPM
    {"M1A1 Thompson", 2, 45, 30, 0.1f, 3.5f}, // M1A1 Thompson: .45 ACP, 30 rounds, 600-700 RPM
    {"Kar98K", 3, 75, 5, 1.1f, 3.7f}, // Kar98k: 7.92×57mm Mauser, 5 rounds, bolt-action
    {"SMLE", 4, 70, 10, 1.2f, 3.0f}, // SMLE: .303 British, 10 rounds, bolt-action
    {"M1 Garand", 5, 60, 8, 0.2f, 2.6f}, // M1 Garand: .30-06 Springfield, 8 rounds, semi-automatic
};



#endif // WEAPONDATA_H