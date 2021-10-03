import java.applet.Applet;
import java.awt.*;
import java.io.*;
import java.net.*;
import javax.swing.*;
import java.awt.event.*;
import java.awt.TextField;
import java.lang.*;
public class Client extends Applet implements ActionListener{
    Socket localSocket;
    PrintWriter out;
    BufferedReader in;
    String s;
    private Button b;
    private TextField t1,t2;
    public void init(){
        setLayout(new FlowLayout());
        t1 = new TextField(20);
        t1.setText("Please Enter the value here");
        add(t1);
        t2 = new TextField(20);
        add(t2);
        b = new Button("Connect");
        b.addActionListener(this);
        add(b);
    }
    public void actionPerformed(ActionEvent e)
    {
        if(e.getSource() == b)
        //Create a socket
        try
        {
            localSocket = new Socket(this.getCodeBase().getHost(), 5000);
            //Setup data stream in and out of socket and from KeyBoard
            in = new BufferedReader(new InputStreamReader(localSocket.getInputStream()));
            out= new PrintWriter(localSocket.getOutputStream());
            //While we have a connection
            // get textfield value
            // String s = t1.getText();
            //Read Texfield value
            out.println(t1.getText());
            //flush the buffer if not full!
            out.flush();
            // read incoming string from socket
            //System.out.println(in.readLine());
            String line = in.readLine();
            t2.setText(line);
        }
        catch(UnknownHostException unc)
        {
            System.out.println("Connection why not connected");
        }
        catch(IOException ioe)
        {
            System.out.println(ioe.getMessage());
        }
    }
    public static void main( String[] args )
    {
        Client    applet = new Client();
        JFrame  frame = new JFrame();
        frame.setTitle( "Socket Test" );
        frame.getContentPane().add( applet , BorderLayout.CENTER );
        applet.init();
        applet.start();
        frame.setSize( 460 , 360 );
        Dimension   d = Toolkit.getDefaultToolkit().getScreenSize();
        frame.setLocation( ( d.width - frame.getSize().width ) / 2 ,
        ( d.height - frame.getSize().height ) / 2 );
        frame.setVisible( true );
    }
}
