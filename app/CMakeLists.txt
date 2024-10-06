# Add the shell-app executable with its source files.
add_executable(shell-app
  main.cpp
)

# Add CourseGrading executable with its source file.
add_library(tdd_assg
tdd_assg.cpp
)

# Include directories needed for CourseGrading.
target_include_directories(tdd_assg PUBLIC
  ${CMAKE_SOURCE_DIR}/include
)

# Specify link directories and libraries for CourseGrading.
target_link_directories(tdd_assg PUBLIC ${COMMON_INCLUDE_DIRS})
target_link_libraries(tdd_assg PUBLIC ${COMMON_LIBS})
target_link_options(tdd_assg PUBLIC --static)

# Add STL_average executable with its source file.
add_executable(tdd_assg
  tdd_assg.cpp
)

# Include directories needed for shell-app.
target_include_directories(shell-app PUBLIC
  ${CMAKE_SOURCE_DIR}/include
)

# Link libraries for shell-app.
target_link_libraries(shell-app PUBLIC
  myLib1
  myLib2
)

# Link options for shell-app.
target_link_options(shell-app PUBLIC
  --static
)