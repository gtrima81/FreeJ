float x, y;
float s = 40.0;

void setup() 
{
  size(200,200);
  noStroke();
  frameRate(30);
}

void draw() 
{
  background(102);
  
  x = x + 0.8;
  
  if (x > width + s) {
    x = -s;
  } 
  
  translate(x, height/2-s/2);
  fill(255);
  rect(-s/2, -s/2, s, s);
  
  // Transforms accumulate.
  // Notice how this rect moves twice
  // as fast as the other, but it has
  // the same parameter for the x-axis value
  translate(x, s);
  fill(0);
  rect(-s/2, -s/2, s, s);
}
