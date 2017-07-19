#include "PID.h"

using namespace std;

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_in, double Ki_in, double Kd_in) {
  // Initialize coefficients
  Kp = Kp_in;
  Ki = Ki_in;
  Kd = Kd_in;

  // Initialize errors
  p_error = 0;
  d_error = 0;
  i_error = 0;

  // Initialize totalError with zero
  totalError = 0;

}

void PID::UpdateError(double cte) {
  // i_error is the total error
  i_error += cte;

  // d_error is current cte minus previous cte
  d_error = cte - p_error;

  // p_error is current cte
  p_error = cte;
}

