// Creating a text File using FileWriter 
import java.io.FileWriter; 
import java.io.IOException; 
import java.net.*;

class CreateFile 
{ 
	public static void main(String[] args) throws IOException 
	{  
		FileWriter fw=new FileWriter("output.txt"); 
		
		DatagramSocket ds = new DatagramSocket(8000);	
		byte[] receive = new byte[99999];
		while (true)
		{
			DatagramPacket DpReceive = new DatagramPacket(receive, receive.length);
			ds.receive(DpReceive);
			String str = data(receive).toString();	
			System.out.println("Client:-" + data(receive));

			for (int i = 0; i < str.length(); i++) 
            	fw.write(str.charAt(i)); 
            fw.write("\n");

			if (data(receive).toString().equals("exit"))
			{
				System.out.println("EXITING");
				break;
			}
			receive = new byte[99999];
		}
		fw.close(); 
	} 

	public static StringBuilder data(byte[] a)
	{
		if (a == null)
			return null;
		StringBuilder ret = new StringBuilder();
		int i = 0;
		while (a[i] != 0)
		{
			ret.append((char) a[i]);
			i++;
		}
		return ret;
	}
}

