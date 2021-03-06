int a = 20;  // Create a global variable "a"

void setup() 
{
  size(200, 200);
  background(51);
  stroke(255);
  noLoop();
}

void draw()
{
  // Draw a line using the global variable "a"
  line(a, 0, a, height);
  
  // Create a new variable "a" local to the for() statement 
  for(int a=50; a<80; a += 2) {
    line(a, 0, a, height);
  }
  
  // Create a new variable "a" local to the loop() method
  int a = 100;
  // Draw a line using the new local variable "a"
  line(a, 0, a, height);  
  
  // Make a call to the custom function drawAnotherLine()
  drawAnotherLine();
  
  // Make a call to the custom function setYetAnotherLine()
  drawYetAnotherLine();
}

void drawAnotherLine() 
{
  // Create a new variable "a" local to this method
  int a = 185;
  // Draw a line using the local variable "a"
  line(a, 0, a, height);
}

void drawYetAnotherLine() 
{
  // Because no new local variable "a" is set, 
  // this lines draws using the original global
  // variable "a" which is set to the value 20.
  line(a+2, 0, a+2, height);
}
