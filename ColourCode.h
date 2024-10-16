#ifndef COLOURPAIR_H
#define COLOURPAIR_H
 
typedef enum MajorColor 
{WHITE,
RED,
BLACK,
YELLOW,
VIOLET} MajorColor;
 
typedef enum MinorColor 
{BLUE,
ORANGE, 
GREEN, 
BROWN, 
SLATE}MinorColor;
 
typedef struct {
    enum MajorColor major_color;
    enum MinorColor minor_color;
} ColorPair;
 
void color_pair_to_string(const ColorPair* color_pair, char* output_buffer);
ColorPair get_color_from_pair_number(int pair_number);
int get_pair_number_from_color(const ColorPair* color_pair);
 
#endif // COLOURPAIR_H
