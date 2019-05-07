//Refer to https://docs.particle.io/datasheets/discontinued/raspberrypi-datasheet/ for locations of these pins
//Should be GPIO 23, 24, and 25
int greenLED = D10;
int redLED = D11;
int blueLED = D12;

void setup()
{

//Initialize GPIO pins in OUTPUT mode
   pinMode(greenLED, OUTPUT);
   pinMode(redLED, OUTPUT);
   pinMode(blueLED, OUTPUT);

//Name the functions
   Particle.function("greenled",greenLEDToggle);
   Particle.function("blueled",blueLEDToggle);
   Particle.function("redled",redLEDToggle);

//Make sure the LEDs are off to begin with
   digitalWrite(greenLED, LOW);
   digitalWrite(blueLED, LOW);
   digitalWrite(redLED, LOW);

}

void loop() {}

int greenLEDToggle(String command) {
    if (command=="on") {
        digitalWrite(greenLED,HIGH);
        return 1;
    }
    else if (command=="off") {
        digitalWrite(greenLED,LOW);
        return 0;
    }
    else {
        return -1;
    }
}


int blueLEDToggle(String command) {
    if (command=="on") {
        digitalWrite(blueLED,HIGH);
        return 1;
    }
    else if (command=="off") {
        digitalWrite(blueLED,LOW);
        return 0;
    }
    else {
        return -1;
    }
}

int redLEDToggle(String command) {
    if (command=="on") {
        digitalWrite(redLED,HIGH);
        return 1;
    }
    else if (command=="off") {
        digitalWrite(redLED,LOW);
        return 0;
    }
    else {
        return -1;
    }
}

