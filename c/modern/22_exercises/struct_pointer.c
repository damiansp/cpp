#include <stdio.h>


typedef struct {
  char artist[50];
  int n_tracks;
  double playtime;
} Album;


int main(void) {
  Album mo = {"Midnight Oil", 12, 47.33};
  Album* pmo = &mo;
  printf(
    "%s's new album has %d new songs that last %.2f minutes",
    pmo->artist,
    pmo->n_tracks,
    pmo->playtime);
}
