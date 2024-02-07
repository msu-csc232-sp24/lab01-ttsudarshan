/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2024
 *
 * @file    csc232.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Macros, libraries and definitions for use in csc232 assignments.
 * @version 0.2023.07.27
 * @date    07/27/2023
 *
 * @copyright Copyright (c) 2023 James R. Daehn
 */

#ifndef MSU_CSC232_H_
#define MSU_CSC232_H_

#define FALSE 0
#define TRUE 1

#define FINISHED_PART_1 TRUE
#define FINISHED_PART_2 TRUE
#define FINISHED_PART_3 TRUE

#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <list>
#include <memory>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

#include "expanded_templates.h"

/** Common iostream objects */
using std::cerr;
using std::cin;
using std::cout;
using std::endl;

/** Common iomanip objects */
using std::left;
using std::right;
using std::setprecision;
using std::setw;

// TODO: 1.1 Declare a named constant ROSTER_SIZE initialized to the integer value 10.

const int ROSTER_SIZE {5};
    
// TODO: 1.3 Declare a named constant NUM_COURSES initialized to the integer value of 3.
const int NUM_COURSES{3};

// TODO: 1.2 Declare an array named as specified whose size is ROSTER_SIZE that stores floating-point numbers (e.g., double)
double grades [ROSTER_SIZE];

// TODO: 1.4 Declare a two-dimensional array as specified that has NUM_COURSES rows and ROSTER_SIZE columns that
//  stores floating point numbers (e.g., double)

    double gradeBook[NUM_COURSES][ROSTER_SIZE];

// TODO: 2.1 Declare a function named as specified that specifies two parameters. The first parameter is an integer that
//  specifies the number of elements in the array to process and the second parameter is an array of doubles.
double maxGrade(int num_elements,double arr1[]);

// TODO: 2.2 Declare function named as specified that specifies three parameters. The first parameter is an integer
//  that corresponds to the number of rows in the given table, the second parameter is an integer that corresponds to
//  the number of columns in the table, and the third parameter is for a two-dimensional array of double values.

    int indexOfMaxGrade(int num_rows, int num_columns, double arr2[][NUM_COURSES]);

// TODO: 3.1 - Implement the specified function below

    double maxGrade(int num_elements, double arr1[]){
        int max = 0;
        for (int i = 0; i<num_elements; i++){
            if (arr1[max] < arr1[i]){
                max = i;
            }
        }
        return arr1[max];
    }


// TODO: 3.2 Implement the specified function below




    int indexOfMaxGrade(int num_rows, int num_columns, double arr2[][ROSTER_SIZE]){
        int num_rows_max = 0;
        int num_columns_max = 0;
        for (int i=0; i< num_rows; i++){
            for (int j=0; j<num_columns; j++){
                if (arr2[num_rows_max][num_columns_max]< arr2[i][j]){
                    num_columns_max = j;
                    num_rows_max = i;
                }
            }


        }
        return num_rows_max;
    }
    




    








#endif // MSU_CSC232_H_
