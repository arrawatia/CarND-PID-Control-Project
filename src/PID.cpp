#include "PID.h"

/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
  /**
   * TODO: Initialize PID coefficients (and errors, if needed)
   */
  this->Kp = Kp_;
  this->Kd = Kd_;
  this->Ki = Ki_;
}

void PID::UpdateError(double cte) {
  /**
   * TODO: Update PID errors based on cte.
   */


  // Derivative error (p_error is set to the last recorded cte)
  d_error = cte - p_error;

  // Proportional error 
  p_error = cte;

  // Integral error
  i_error += cte; 

}

double PID::TotalError() {
  /**
   * TODO: Calculate and return the total error
   */
  return (-Kp * p_error) + // Proportional term
         (-Kd * d_error) + // Derivative term
         (-Ki * i_error)   // Integral term
         ;
}