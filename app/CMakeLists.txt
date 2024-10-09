# Define the executable (shell-app)
add_executable(shell-app
  main.cpp  # The main source file for the executable
  PID_Control.cpp
)

# Include directories for this target
target_include_directories(shell-app PUBLIC
  ${CMAKE_SOURCE_DIR}/include  # Include directory for header files
)

# Specify any additional link options if needed
target_link_options(shell-app PUBLIC
  --static  # Linking statically
)
