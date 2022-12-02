#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "prog03.h"

int input_planet(Planet *Planet){
  FILE *fp;

  if((fp = fopen("planet.txt","r")) == NULL){
      return -1;
  }
  for(int i = 0; i < NPLANETS; i++){
    fscanf(fp,"%s %lf %lf %lf",Planet[i].name, &Planet[i].radius, &Planet[i].density, &Planet[i].orbital_radius);
  }
  fclose(fp);
  return 0;
}
