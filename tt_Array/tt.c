#include "tt.h"

void tt_init(int tt[10][10])
{
  for(int i=0;i<10;i++)
  {
    for (int j=0;j<10;j++)
    {
      tt[i][j] = (i+1)*(j+1);
    }
  }
}


void tt_print(int tt[10][10])
{
  for(int i=0;i<10;i++)
  {
    for (int j=0;j<10;j++)
    {
      printf("|%4d", tt[i][j]);
    }
    printf("\n");
  }
}

int tt_result(int tt[10][10], int first, int second)
{
  first--;
  second--;
  return tt[first][second];
}
