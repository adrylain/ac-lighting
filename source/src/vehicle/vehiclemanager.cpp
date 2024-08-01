#include <cube.h>
#include "vehicle.h"

vehicleent *CVehicleManager::CreateVehicle(const char *team, const char *name)
{

    vehicleent *v = newvehicleent();
    if (!v) return NULL;

    v->type = ENT_VEHICLE;

    //This needs to end up being a thing somehow.
    //vehicles.add(v); 
    return v;
}
