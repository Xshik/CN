#include <stdio.h>

void main()

{

int frame [20], count = 0, i, n; 
printf("Enter the size of frame:"); 
scanf("%d", &n);

printf("Enter the value in 0 and 1:" )
for (i = 0; i < n; i++)

{

scanf("%d", &frame[i]);

}

printf("---After bit suffing--");
for ( i = 0 ; i < n; i++)

{

printf("%d", frame[i]);

if (frame[i] == 1)

{

count++;

if (count == 5)

{

printf("0");

count = 0;

}

}

else 
count=0;

}
}
