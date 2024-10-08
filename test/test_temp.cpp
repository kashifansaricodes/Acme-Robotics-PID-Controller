#include <gtest/gtest.h>
#include "../include/PID_Control.hpp"  // Include the header instead of the cpp

class PIDControllerTest : public ::testing::Test {
protected:
    PID_Control* pid;

    void SetUp() override {
        // This is called before each test
        pid = new PID_Control(0.8, 0.6, 0.3, 20.0, 30.0, 0.1);
    }

    void TearDown() override {
        // This is called after each test
        delete pid;
    }
};

// Test Calculate Output (this will fail as it depends on unimplemented methods)
TEST_F(PIDControllerTest, Output_Value) {
    // Adjust the expected value based on your PID controller's logic
    EXPECT_DOUBLE_EQ(pid->output_value(20.0, 30.0), 0.0);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}