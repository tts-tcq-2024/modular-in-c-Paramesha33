#ifndef TEST_COLOUR_PAIR_H
#define TEST_COLOUR_PAIR_H
#include "colourpair.h"
 
void test_pair_number_to_color(int pair_number, enum MajorColor expected_major_color, enum MinorColor expected_minor_color);
void test_color_to_pair_number(enum MajorColor major_color, enum MinorColor minor_color, int expected_pair_number);
void test_reference_manual(void);
 
#endif // TEST_COLOUR_PAIR_H
