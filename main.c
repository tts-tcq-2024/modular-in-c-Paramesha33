#include "test_colour_pair.h"
 
int main() {
    test_pair_number_to_color(4, WHITE, BROWN);
    test_pair_number_to_color(5, WHITE, SLATE);
    test_pair_number_to_color(21, VIOLET, BLUE);

    test_color_to_pair_number(YELLOW, BLUE, 16);
    test_color_to_pair_number(BLACK, ORANGE, 12);
    test_color_to_pair_number(VIOLET, SLATE, 25);
    test_reference_manual();
    return 0;
}
