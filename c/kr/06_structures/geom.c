#define XMAX 500
#define YMAX 500
#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))


struct point {
  int x;
  int y;
};


struct rect {
  // opposite corners
  struct point p1;
  struct point p2;
};


/* make a point from Cartesian coordinates */
struct point makepoint(int x, int y) {
  struct point temp;

  temp.x = x;
  temp.y = y;
  return temp;
}


/* add two points */
struct point addpoint(struct point p1, struct point p2) {
  p1.x += p2.x;
  p1.y += p2.y;
  return p1;
}


/* return 1 if point p in rect r, 0 if not */
int pinrect(struct point p, struct rect r) {
  return p.x >= r.p1.x && p.x < r.p2.x && p.y >= r.p1.y && p.y < r.p2.y;
}


/* canonicalize rect coords: p1 = lower lefte, p2 = upper right */
struct rect canonrect(struct rect r) {
  struct rect temp; 

  temp.p1.x = min(r.p1.x, r.p2.x);
  temp.p1.y = min(r.p1.y, r.p2.y);
  temp.p2.x = max(r.p1.x, r.p2.x);
  temp.p2.y = max(r.p1.y, r.p2.y);
  return temp;
}


struct rect screen;
struct point middle;
struct point makepoint(int, int);

screen.pt1 = makepoint(0, 0);
screen.pt2 = makepoint(XMAX, YMAX);
middle = makepoint(
  (screen.p1.x + screen.p2.x) / 2, (screen.p1.y + screen.p2.y) / 2);
