
public class JavaLED implements Runnable{

	@Override
	public void run() {
		while(true)
		{
			System.out.println("Thread LED");
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}		
	}
	
	native public void initLED(int pin);
	native public void setLED(int state);

	static
    {
       System.loadLibrary("lednative");
    }
}
