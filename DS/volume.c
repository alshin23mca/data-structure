#include<stdio.h>
float volume(float lenth,float width ,float height )
{
  float vol= lenth*width*height;
  return vol;
}
int main()
{
  float lenth,width,height;
  printf("enter length width and height");
  scanf("%f %f %f",&lenth,&width,&height);
  float v = volume(lenth,width,height);
  printf("%0.2f",v);
  return 0;
} 
