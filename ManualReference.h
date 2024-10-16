#ifndef REFERANCE_MANUAL_H
#define REFERANCE_MANUAL_H
 
typedef struct
{
  int cable_num;
  char cable_major[10];
  char cable_minor[10];
}map;
 
void cable_pair_mapping_manual(map *map_manual);
void cable_pair_manual_print(map *map_manual);
 
#endif
