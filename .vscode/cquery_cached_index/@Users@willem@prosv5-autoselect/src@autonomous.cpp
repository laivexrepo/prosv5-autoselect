#include "main.h"
#include "auto.h"
#include "portDef.h"

/**
 * Runs the user autonomous code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the autonomous
 * mode. Alternatively, this function may be called in initialize or opcontrol
 * for non-competition testing purposes.
 *
 * If the robot is disabled or communications is lost, the autonomous task
 * will be stopped. Re-enabling the robot will restart the task, not re-start it
 * from where it left off.
 */

 bool AUTO_SKILL_RUN = false;       // variable to check waht skill to run

 void getAutoMode() {
    pros::ADIAnalogIn pot_sensor (POTENTIOMETER);
    pros::delay(20);
    std::cout << "Pot value: " << pot_sensor.get_value() << "\n";

    if(pot_sensor.get_value() > POT_AUTO_SKILL ) {
      AUTO_SKILL_RUN = false;                    // we are running skills autonomous
    } else {
      AUTO_SKILL_RUN = true;                     // standard skills run
    }
  }
                                 // autonomous
 void autonomous_skill() {
   // SKILL autonomous - all autonomous code it goes in this function
   std::cout << "autonomous_skill \n";
   pros::delay(20);
 }

 void autonomous_comp() {
   // COMPETITION 15sec autonomous all code for competition code goes here
   std::cout << "autonomous_comp \n";
   pros::delay(20);
 }

void autonomous() {
  getAutoMode();                // what have we selected?
  if(AUTO_SKILL_RUN) {
     autonomous_skill();
  } else {
     autonomous_comp();
  }
}
