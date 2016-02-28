#include <stdio.h>

void triangles_in_the_term(int h, int n){                   /* This function prints triangles of stars of a given height (h) and a given amount of triangles (n) */
  
  int space;
  int height;
  int star;
  int ncopy;
  
  for(ncopy = 1; ncopy <= n ; ncopy++){                      /* This loop iterates to allow for additional amounts of triangles */
    for(height = 1 ; height <= h ; height++){                /* This loop iterates through to account for height each iteration */
      for(space = h - height ; space >= 1 ; space--){        /* This loop prints spaces before each initial star within each line */
	printf(" ");
      }
      for(star = 1 ; star <= height * 2 -1 ; star++){        /* This loop prints the amount of stars needed to complete the triangle */
	printf("*");
    }
      printf("\n");
    }
  }
  
}
