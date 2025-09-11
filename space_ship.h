#include <iostream>

// starship component functions
// each returns true if the component is ready, false otherwise
// the ship will only launch if all components are ready

bool engines();
bool weapons();
bool shields();
bool thrusters();
bool comms();
bool life_support();
bool navigation();