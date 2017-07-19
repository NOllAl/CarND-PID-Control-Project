# Introduction

The goal of this project is to implement a PID controller in C++. This controller should successfully steer the car in the Udacity simulator around the track. The input to the PID controller is the cross-track-error and this should be used to determine the steering angle.

# Hyperparameter optimization

A PID controller has three hyperparamers:

+ $K_P$ for the proportional term
+ $K_I$ for the integral term
+ $K_D$ for the derivative term

The hyperparameters were found manually by trial-and-error. An alternative would have been to find a reasonable set of initial values and then use the twiddle or stochastic gradient descent algorithm to improve on those.

# Effect of removing terms

