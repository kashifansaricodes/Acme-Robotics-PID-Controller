/**
 * @file PID_Control.hpp
 * @brief Header file for the PID control implementation.
 * 
 * Driver: Kashif Ansari
 * Navigator: Piyush Goenka
 */

#include "../tdd_assg/PID_Control.cpp"
#include <stdio.h>

int main() {
    // Instantiate the PID controller with dummy values
    PID_Control pid(0.1, 0.5, 0.01, 0.1, 0, 0);  // Stub values don't matter

    double val = 20;  // Initial actual value
    for (int i = 0; i < 100; i++) {
        double inc = pid.output_value(0, val);  // Will always return 0.5 due to the stub
        printf("val:% 7.3f inc:% 7.3f\n", val, inc);  // Print the hardcoded result
        val += inc;  // Update the value with the fixed increment (0.5)
    }
    
    return 0;
}
