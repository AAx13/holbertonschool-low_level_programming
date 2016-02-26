int print_char(char c);

void triangles_in_the_term(int h, int n){
  
  int space;
  int height;
  int star;
  int ncopy;
  
  for(ncopy = 1; ncopy <= n ; ncopy++){
    for(height = 1 ; height <= h ; height++){
      for(space = h - height ; space >= 1 ; space--){
	print_char(' ');
      }
      for(star = 1 ; star <= height * 2 -1 ; star++){
	print_char('*');
    }
      print_char('\n');
    }
  }
  
}
