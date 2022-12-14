using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;
extern motor flywheel;
extern motor roller;
extern motor leftF;
extern motor rightF;
extern motor leftB;
extern motor rightB;
extern motor intake;
extern digital_out piston;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );