//Define all pin numbers as constants
const int button1Pin = 2;  
const int led1Pin =  3; 
const int button2Pin = 4;
const int led2Pin = 5;
const int button3Pin = 6;
const int led3Pin = 7;
const int buttonStartPin = 8;
  
int button1State = 0;  
int button2State = 0;
int button3State = 0;
int buttonStartState = 0;

int userInput = 0;

void setup() 
{
  pinMode(led1Pin, OUTPUT);
  pinMode(button1Pin, INPUT);
  
  pinMode(led2Pin, OUTPUT);
  pinMode(button2Pin,INPUT);
  
  pinMode(led3Pin, OUTPUT);
  pinMode(button3Pin, INPUT);
  
  pinMode(buttonStartPin, INPUT);
  
  pinMode(13, OUTPUT);


  //Starting annimation
      digitalWrite(led1Pin, HIGH);
      tone(13, 261);
      delay(300);
      noTone(13);
      delay(500);
      digitalWrite(led1Pin, LOW);
      tone(13, 349);
      delay(300);
      noTone(13);
      digitalWrite(led2Pin, HIGH);
      delay(500);
      digitalWrite(led2Pin, LOW);
      tone(13, 392);
      delay(300);
      noTone(13);
      digitalWrite(led3Pin, HIGH);
      delay(500);
      digitalWrite(led3Pin, LOW);
}

void loop() 
{
  //Reads states of each button
button1State = digitalRead(button1Pin);
button2State = digitalRead(button2Pin);
button3State = digitalRead(button3Pin);
buttonStartState = digitalRead(buttonStartPin);
  //First button if statement
  if (button1State == HIGH) 
  {
        digitalWrite(led1Pin, HIGH);
      tone(13, 261);
      delay(100);
      noTone(13);
  }
  else 
        digitalWrite(led1Pin, LOW);
  
  //Second button if statement
  if (button2State == HIGH) 
  {
        digitalWrite(led2Pin, HIGH);
      tone(13, 349);
      delay(100);
      noTone(13);
  }
  else 
        digitalWrite(led2Pin, LOW);
  
  //Third button if statement
  if (button3State == HIGH) 
  {
        digitalWrite(led3Pin, HIGH);
      tone(13, 392);
      delay(100);
      noTone(13);
  }
  else 
        digitalWrite(led3Pin, LOW);
  
  
  
  
  
  if (buttonStartState == HIGH) 
  {
        gameStart();
  }
 
  
       
}

void gameStart()
{
  //Makes random numbers actaully random
  randomSeed(analogRead(A0));
  
  //Sets random numebers for each variable from 1-3
  int ranVal1 = random(1,4);
  int ranVal2 = random(1,4);
  int ranVal3 = random(1,4);
  
  //Reassigns random numbers to the corresponding pin numbers
  //First Value
    if(ranVal1 == 1)
    {
  ranVal1 = 3;
  }
  else if(ranVal1 == 2)
  {
  ranVal1 = 5;
  }
  else
  {
  ranVal1 = 7;
    }
  
  //Second value
  if(ranVal2 == 1)
    {
  ranVal2 = 3;
  }
  else if(ranVal2 == 2)
  {
  ranVal2 = 5;
  }
  else
  {
  ranVal2 = 7;
    }
  
  //Third value
  if(ranVal3 == 1)
    {
  ranVal3 = 3;
  }
  else if(ranVal3 == 2)
  {
  ranVal3 = 5;
  }
  else
  {
  ranVal3 = 7;
    }
  
  //Now we light up each random value in order with a 1 second delay
  //Light up each random value in order with 1 second delay
          //First LED
       
    digitalWrite(ranVal1, HIGH);
    tone(13, 392);
    delay(100);
    noTone(13);
    delay(1000);
    digitalWrite(ranVal1, LOW);
          
          //Second LED
    digitalWrite(ranVal2, HIGH);
    tone(13, 392);
    delay(100);
    noTone(13);
    delay(1000);
    digitalWrite(ranVal2, LOW);
          
          //Third LED
  digitalWrite(ranVal3, HIGH);
    tone(13, 392);
    delay(100);
    noTone(13);
    delay(1000);
    digitalWrite(ranVal3, LOW);
}













