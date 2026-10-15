#include <stdio.h>
int ga = 100; // variable global

void funcionA() {
 int x = 10; // variable local
 static int y = 5; // variable estática local
 x++;
 y++;
 printf("A: x=%d, y=%d, global=%d\n", x, y, ga); // ::x accede a global
}

void funcionB() {
 static int y = 0;
 ga++; // modifica la variable global
 y++;
 printf("B: x=%d, y=%d\n", ga, y);
}

int main() {
 funcionA();
 funcionA();
 funcionB();
 funcionA();
 funcionB();
 return 0;
}