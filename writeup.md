# Writeup

## Compilation
Code compiles without errors with cmake and make.

## Implementation

A PID controller is used to control the car. 

The [UpdateError method](https://github.com/arrawatia/CarND-PID-Control-Project/blob/master/src/PID.cpp#L26-L33) calculates the proportional, integral and derivative errors and [TotalError method](https://github.com/arrawatia/CarND-PID-Control-Project/blob/master/src/PID.cpp#L41-L44) calculates the total error.

## Reflection

Describe the effect each of the P, I, D components had in your implementation.

### P-controller 
A proportional controller (P-controller) corrects the cross-track error and steers the car toward the center line. When a P-Controller is used, the car overshoots the central line and drives off the road. 

Video showing the behavior of a P-controller: [p-controller.mov](videos/p-controller-720p.mov)

### PD-controller
A proportional derivative controller (PD-controller) corrects the overshooting behavior of P-controller by smoothing the approach to it but does not correct the bias. 

Video showing the behavior of a PD-controller: [pd-controller.mov](videos/pd-controller-720p.mov)

### PID-controller
A proportional integral derivative controller (PID-controller) eliminates the bias on the controlled system.  

Video showing the behavior of a PID-controller: [pid-controller.mov](videos/pid-controller-720p.mov)


## Describe how the final hyperparameters were chosen.

The hyperparameters (controller gains) were tuned by hand. I started by making sure the car drove in a straight line whne all gains set to 0. I then tuned `Kp` to make the car follow the center line with overshooting. Tuning `Kd` and `Ki` fixed the overshooting and the car was able to follow the track smoothly. 

The final gains are `kp = 0.15`, `Kd = 0.00031` and `Ki= 2.5` 

## Simulation

The vehicle was able to successfully drive a lap around the track.

This video [scenario-720p.mov](videos/scenario-720p.mov) shows the car driving a lap around the track successfully.
