# Introduction

The goal of this project is to implement a PID controller in C++. This controller should successfully steer the car in the Udacity simulator around the track. The input to the PID controller is the cross-track-error and this should be used to determine the steering angle.

# Hyperparameter optimization

A PID controller has three hyperparamers:

+ $K_P$ for the proportional term
+ $K_I$ for the integral term
+ $K_D$ for the derivative term

The hyperparameters were found manually by trial-and-error. An alternative would have been to find a reasonable set of initial values and then use the twiddle or stochastic gradient descent algorithm to improve on those.

# Effect of removing terms

Let me first give a link to the results when all three terms are kept:

** GIVE LINK HERE**

Each term in the PID controller is supposed to handle a different problem.

## Removing the derivative term

The derivative term is supposed to handle the problem of the car **overshooting** and as a consequence of becoming unstable and wiggly. The following video shows that, indeed, without the D-term the car does not behave well:

## Removing the integral term

The integral term should handle the problem of the car being **biased**. This means that the car does not, on average, go along the designated line. The following video shows that the car really is biased: it tends to be on the right part of the lane:

## Removing the proprtional term

The proportional term is designed to make the car steer in the direction of and proportional to the cross track error. Intuitively, removing this term should have a very big effect in that the car does not steer directly proportional to the CTE. Surprisingly, the controller still performed reasonable:
