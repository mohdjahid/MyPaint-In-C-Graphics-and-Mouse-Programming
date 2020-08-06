#include <stdio.h>
#include <dos.h>
union REGS in,out;
struct SREGS s;
void callmouse()
{
 in.x.ax=1;
 int86(51,&in,&out);
}

void mouseposi(int &xpos,int &ypos,int &click)
{
 in.x.ax=3;
 int86(51,&in,&out);
 click=out.x.bx;
 xpos=out.x.cx;
 ypos=out.x.dx;
}

void mousehide()
{
 in.x.ax=2;
 int86(51,&in,&out);
}

void setposi(int &xpos,int &ypos)
{
 in.x.ax=4;
 in.x.cx=xpos;
 in.x.dx=ypos;
 int86(51,&in,&out);
}

void limit_mouse_hor(int &xlim,int &ylim)
{
  in.x.ax=7;
  in.x.cx=xlim;
  in.x.dx=ylim;
  int86(51,&in,&out);
}

void limit_mouse_ver(int &xlim,int &ylim)
{
  in.x.ax=8;
  in.x.cx=xlim;
  in.x.dx=ylim;
  int86(51,&in,&out);
}

void cur_shape(int *shape)
{
  in.x.ax=9;
  in.x.cx=1;
  in.x.dx=1;
  in.x.bx=(unsigned)shape;
  segread(&s);
  s.es=s.ds;
  int86x(51,&in,&out,&s);
}