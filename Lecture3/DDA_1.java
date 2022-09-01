import java.applet.Applet;
import java.awt.Graphics;
public class DDA_1 extends Applet {
  public void paint(Graphics g)
  {
    double dx,dy,steps,x,y,j;
    double xc,yc;
    double x1=200, y1= 500, x2= 600, y2= 200;
    dx = x2-x1;
    dy = y2-y1;
    if(Math.abs(dx) > Math.abs(dy))
    {
      steps = Math.abs(dx);
    }
    else
      steps = Math.abs(dy);
    xc = dx/steps;
    yc = dy/steps;
    x = x1;
    y = y1;
    //g.fillOval(x, y, width, height);
    g.fillOval((int)x, (int)y, 5, 5);
    for(j=1; j<=steps; j++)
    {
      x = x+xc;
      y= y+yc;
      g.fillOval((int)x, (int)y, 5, 5);
      System.out.println((int)y);
    }
  }
}