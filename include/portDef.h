#ifndef _PORTDEF_H_
#define _PORTDEF_H_

// -------------------- Port Defenitions in Numerical Order -----------
// ====== MOTORS ======
#define LEFT_MOTOR 1
#define RIGHT_MOTOR 5
#define LIFT_MOTOR 6
#define CLAW_MOTOR 10

// ===== VISION =======
#define VISION_SENSOR1 11

// ===== RADIOS =======
#define RADIO 21

// ===== LEGACY PORTS ======
#define POTENTIOMETER 2

// ----------- GLOBAL Variable Defines -------------------------------
#define POT_AUTO_COMP 250         // 0 to value read as autonomous for
                                  // competition - 15 sec autonomous
#define POT_AUTO_SKILL 3500       // 3500 to max read as autonomous


// ----------- Is DEBUGGING ON ---------------------------------------
#define DEBUG_ON true
#define VEXNET_MANUAL true        // turns opcontrol into allowing for
                                  // testing autonomous code
#define VEXNET_TIME 15            // 15 seconds or other time to run
                                  // not yet implemented                                  // for 60sec skills
#endif  // _PORTDEF_H_
