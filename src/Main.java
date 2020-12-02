
public class Main {

	public static void main(String[] args) throws InterruptedException {

		JavaLED javaLED = new JavaLED();
		javaLED.initLED(0);

		JavaButton javaButton = new JavaButton(javaLED);
		javaButton.initButton(7);

		
		Thread threadButton = new Thread(javaButton);
		
		threadButton.start();
	}
}
