int red = A1; 
int yellow = A3; 
int green = A5; 



void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  Particle.function("toggle", toggleLed);
}


int toggleLed(String colour)
{
    if(colour=="red")
    {
        if (digitalRead(red) == LOW)
        {
            digitalWrite(red, HIGH);
        }
        else
        {
            digitalWrite(red, LOW);
        }
        
        return 1;
    }
    else if(colour=="yellow")
    {
        if (digitalRead(yellow) == LOW)
        {
            digitalWrite(yellow, HIGH);
        }
        else
        {
            digitalWrite(yellow, LOW);
        }
        
        return 2;
    }
    else if(colour=="green")
    {
        if (digitalRead(green) == LOW)
        {
            digitalWrite(green, HIGH);
        }
        else
        {
            digitalWrite(green, LOW);
        }
        
        return 3;
    }
    return 0;
}



void loop() {

}

