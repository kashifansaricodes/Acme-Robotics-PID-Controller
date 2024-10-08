#ifndef _TDD_ASSG_HPP_
#define _TDD_ASSG_HPP_

class PIDImpl;  // Forward declaration of PIDImpl

class PID_Control {
public:
    PID_Control(double Kp, double Kd, double Ki, double dt, double integral, double pre_error);
    ~PID_Control();
    double output_value(double setpoint, double actual_value);
    PIDImpl* pimpl;  // Use PIDImpl* for your implementation
    
};

#endif
