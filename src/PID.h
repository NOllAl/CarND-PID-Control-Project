#ifndef PID_H
#define PID_H

#include <iostream>
#include <limits>
#include "Eigen/Dense"

using Eigen::VectorXd;

class PID {
public:
  /*
  * Errors
  */
  double p_error;
  double i_error;
  double d_error;

  /*
  * Coefficients
  */ 
  double Kp;
  double Ki;
  double Kd;

  /*
  * Cross track error: needed for twiddle and reset after each step
  */
  double totalError;
  /*
  * Constructor
  */
  PID();

  /*
  * Destructor.
  */
  virtual ~PID();

  /*
  * Initialize PID.
  */
  void Init(double Kp, double Ki, double Kd);

  /*
  * Update the PID error variables given cross track error.
  */
  void UpdateError(double cte);
};

#endif /* PID_H */
