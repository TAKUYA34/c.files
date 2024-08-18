// ファイルのオープンとクローズ
#include <stdio.h>

#if (0)

int main(void)
{
  FILE* fp;

  fp = fopen("abc.txt", "r");

  if (fp == NULL)
  {
    printf("\aファイルのオープンに失敗しました。\n");
  }
  else
  {
    printf("\aファイルをオープンしました。\n");
    fclose(fp);
  }
  return 0;
}
#endif

#if (1)

#define MAX 100

int main(void)
{
  FILE* fp;

  if ((fp = fopen("abc.txt", "r")) == NULL)
  {
    printf("\aファイルのオープンに失敗しました。\n");
  }
  else
  {
    int numOP = 0;
    char name[MAX];
    double height, wight;
    double hsum = 0.0;
    double wsum = 0.0;

    while (fscanf(fp, "%s%lf%lf", name, &height, &wight) == 3)
    {
      printf("%-10s %5.1f %5.1f\n", name, height, wight);
      numOP++;
      hsum += height;
      wsum += wight;
    }
  printf("----------------------\n");
  printf("平均       %5.1f %5.1f\n", hsum / numOP, wsum / numOP);
  fclose(fp);
  }
  return 0;
}
#endif
