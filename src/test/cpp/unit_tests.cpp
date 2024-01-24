/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2024
 *
 * @file    unit_tests.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Macros, libraries and definitions for use in csc232 assignments.
 * @version 0.1
 * @date    2021-09-10
 *
 * @copyright Copyright (c) 2021 James R. Daehn
 */

#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_session.hpp>
#include "csc232.h"

#if FINISHED_PART_1
SCENARIO("Evaluate Code for Task 1", "[task1]") {
    GIVEN("the student has completed Task 1") {
        WHEN("we assess whether they have declared the proper ROSTER_SIZE") {
            int rosterSize{ROSTER_SIZE};
            THEN("its found to be the expected size") {
                int EXPECTED_ONE_D_ARRAY_SIZE{5};
                REQUIRE(EXPECTED_ONE_D_ARRAY_SIZE == rosterSize);
            }
        }
        AND_WHEN("we assess they have declared a one-dimensional array named grades") {
            const char *filename = "csc232.h";
            std::ifstream input_stream{filename, std::ios::in};
            if (!input_stream)
                FAIL("Could not open csc232.h while evaluating Task 1!");
            const char *search_string = "grades";
            // Read the entire file into memory
            std::string file_contents;
            std::string current_line;
            while (getline(input_stream, current_line))
                file_contents += current_line + '\n';
            input_stream.close();
            size_t pos = file_contents.find(search_string);
            THEN("we find it to be declared as specified") {
                REQUIRE(static_cast<int>(pos) > 0);
            }
        }
        WHEN("we assess whether they have declared the proper NUM_COURSES") {
            int numCourses{NUM_COURSES};
            THEN("its found to be the expected size") {
                int EXPECTED_NUM_COURSES{3};
                REQUIRE(EXPECTED_NUM_COURSES == numCourses);
            }
        }
        AND_WHEN("we assess they have declared a two-dimensional array named gradeBook") {
            const char *filename = "csc232.h";
            std::ifstream input_stream{filename, std::ios::in};
            if (!input_stream)
                FAIL("Could not open csc232.h while evaluating Task 1!");
            const char *search_string = "gradeBook";
            // Read the entire file into memory
            std::string file_contents;
            std::string current_line;
            while (getline(input_stream, current_line))
                file_contents += current_line + '\n';
            input_stream.close();
            size_t pos = file_contents.find(search_string);
            THEN("we find it to be declared as specified") {
                REQUIRE(static_cast<int>(pos) > 0);
            }
        }
    }
}
#else
SCENARIO("Bootstrap - If you see this, you haven't done anything yet!", "[bootstrap]")
{
    GIVEN("The student just opened this assignment")
    {
        WHEN("They run the tests target")
        {
            THEN("They receive this encouraging message ==> Great job!")
            {
                bool expected{true};
                bool actual{true};
                REQUIRE(expected == actual);
            }
            AND_THEN("They're encouraged to get started ==> Now tackle task 1!");
        }
    }
}
#endif

#if FINISHED_PART_2
SCENARIO("Evaluate Code for Task 2", "[task2]") {
    GIVEN("the student has completed Task 2") {
        WHEN("we assess whether they have declared the maxGrade function") {
            const char *filename = "csc232.h";
            std::ifstream input_stream{filename, std::ios::in};
            if (!input_stream) {
                FAIL("Could not open csc232.h while evaluating Task 2!");
            }
            const char *search_string = "maxGrade";
            // Read the entire file into memory
            std::string file_contents;
            std::string current_line;
            while (getline(input_stream, current_line))
                file_contents += current_line + '\n';
            input_stream.close();
            size_t pos = file_contents.find(search_string);
            THEN("it is found to exist") {
                REQUIRE(static_cast<int>(pos) > 0);
            }
        }
        AND_WHEN("we assess whether they have declared the indexOfMaxGrade function") {
            const char *filename = "csc232.h";
            std::ifstream input_stream{filename, std::ios::in};
            if (!input_stream) {
                FAIL("Could not open csc232.h while evaluating Task 2!");
            }
            const char *search_string = "indexOfMaxGrade";
            // Read the entire file into memory
            std::string file_contents;
            std::string current_line;
            while (getline(input_stream, current_line))
                file_contents += current_line + '\n';
            input_stream.close();
            size_t pos = file_contents.find(search_string);
            THEN("it is found to exist") {
                REQUIRE(static_cast<int>(pos) > 0);
            }
        }
    }
}
#endif

#if FINISHED_PART_3
SCENARIO("Evaluate Code for Task 3", "[task3]") {
    GIVEN("the student has completed Task 3") {
        static const int NUM_TEST_GRADES{5};
        static const int NUM_TEST_COURSES{3};
        static constexpr double MAX_TEST_GRADE{95.0};
        double testGrades[NUM_TEST_GRADES] = {
                75.0, 85.0,
                65.0,
                MAX_TEST_GRADE,
                55.0
        };
        double testGradeBook[NUM_TEST_COURSES][NUM_TEST_GRADES] = {
                {75.0, 85.0, 65.0, 95.0,  55.0},
                {80.0, 90.0, 70.0, 100.0, 60.0},
                {70.0, 80.0, 60.0, 90.0,  50.0}
        };
        WHEN("we look for the maximum grade in the one-dimensional grades array") {
            // invoke said stimulus
            double expected{MAX_TEST_GRADE};
            double actual{maxGrade(NUM_TEST_GRADES, testGrades)};
            THEN("we find the largest value") {
                REQUIRE(expected == actual);
            }
        }
        AND_WHEN("we locate the index of the maximum grade in the two-dimensional grade book") {
            int expected{1};
            int actual{indexOfMaxGrade(NUM_TEST_COURSES, NUM_TEST_GRADES, testGradeBook)};
            THEN("we find the correct index") {
                REQUIRE(expected == actual);
            }
        }
    }
}
#endif
