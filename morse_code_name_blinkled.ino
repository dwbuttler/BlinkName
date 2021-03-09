void setup() {
	pinMode(D6, OUTPUT);
}

void loop() {
	// Spelling 'David' using morse code.
	// 'D' -> -..
	longBlink();
	shortBlink();
	shortBlink();
	
	// 'A' -> .-
	shortBlink();
	longBlink();
	
	// 'V' -> ...-
	shortBlink();
	shortBlink();
	shortBlink();
	longBlink();
	
	// 'I' -> ..
	shortBlink();
	shortBlink();
	
	// 'D' -> -..
	longBlink();
	shortBlink();
	shortBlink();
	
	// Make sure it is noticable when the loop has finished one cycle.
	delay(3000);
}

void longBlink() {
	digitalWrite(D6, HIGH);

	delay(750);

	digitalWrite(D6, LOW);

	delay(500);
}

void shortBlink() {
    digitalWrite(D6, HIGH);

	delay(250);

	digitalWrite(D6, LOW);

	delay(500);
}