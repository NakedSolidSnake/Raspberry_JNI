
public class JavaButton implements Runnable{

	private int ledState;
	private JavaLED javaLED;

	public JavaButton(JavaLED javaLED){
		this.ledState = 0;
		this.javaLED = javaLED;
	}


	@Override
	public void run() {
		
		while(true) {
			if(ledState == 1)
				ledState = 0;
			else
				ledState = 1;
			
			readButton();
			javaLED.setLED(ledState);
			
		}		
	}
	
	native public void initButton(int pin);
	native public int readButton();

	static
    {
       System.loadLibrary("buttonnative");
    }
}
