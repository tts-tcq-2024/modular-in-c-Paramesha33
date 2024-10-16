#include <stdio.h>
#include "colourpair.h"
#include "referance_manual.h"
 
extern const char* major_color_names[5];
 
extern const char* minor_color_names[5];
 
void cable_pair_mapping_manual(map *map_manual)
{
  ColorPair cable_colorPairs;
  for(int i = 0 ; i<25 ;i++)
  {
    cable_colorPairs = get_color_from_pair_number(i+1);
     map_manual[i].cable_num = i+1;
     sprintf(map_manual[i].cable_major,"%s",major_color_names[cable_colorPairs.major_color]);
     sprintf(map_manual[i].cable_minor,"%s",minor_color_names[cable_colorPairs.minor_color]);
  }
}
 
void cable_pair_manual_print(map *map_manual)
{
    for(int i=0;i<25;i++)
    {
        printf("%d  %s  %s\n",map_manual[i].cable_num,map_manual[i].cable_major,map_manual[i].cable_minor);
    }
}
