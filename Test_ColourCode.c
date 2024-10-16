#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "test_colour_pair.h"
#include "referance_manual.h"
 
 
void test_pair_number_to_color(int pair_number,
    enum MajorColor expected_major_color,
    enum MinorColor expected_minor_color)
{
    ColorPair color_pair = get_color_from_pair_number(pair_number);
    char color_pair_name[16];  // 16 is enough for buffer size
    color_pair_to_string(&color_pair, color_pair_name);
    //printf("Got pair %s\n", color_pair_name);
    assert(color_pair.major_color == expected_major_color);
    assert(color_pair.minor_color == expected_minor_color);
}
 
void test_color_to_pair_number(
    enum MajorColor major_color,
    enum MinorColor minor_color,
    int expected_pair_number)
{
    ColorPair color_pair;
    color_pair.major_color = major_color;
    color_pair.minor_color = minor_color;
    int pair_number = get_pair_number_from_color(&color_pair);
    //printf("Got pair number %d\n", pair_number);
    assert(pair_number == expected_pair_number);
}
 
void test_reference_manual(void)
{
     map mapping_manual[25];
     map test_pair;
     test_pair.cable_num = 3;
     strcpy( test_pair.cable_major,"White");
     strcpy( test_pair.cable_minor,"Green");
     cable_pair_mapping_manual(mapping_manual);
     // printf("Got pair for ref %d %d\n", test_pair.cable_num,mapping_manual[2].cable_num);
      assert(test_pair.cable_num == mapping_manual[2].cable_num);
}
