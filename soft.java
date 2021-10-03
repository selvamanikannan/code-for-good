import java.awt.*;
import java.awt.Font;
import java.applet.*;
import java.awt.event.*;
import java.util.*;  
import java.lang.Math; 
import java.text.DecimalFormat;


public class soft extends Applet implements ActionListener
{
TextField t1, t2,t3;
TextArea txt;
Button okButton;
int m=0;
Font f1,f2,f3;    


public void init() {
        f1 = new Font("Arial",Font.BOLD,18);    
        f2 = new Font("Forte",Font.PLAIN,24);    
        f3 = new Font("Elephant",Font.BOLD,13);
        t1 = new TextField(25);
        t2 = new TextField(25);
        txt = new TextArea(25,40);
         // txt = new TextArea(20,30);
        txt.setFont(f3);
        okButton = new Button("Submit");
        add(t1);
        add(t2);
        add(txt);
        add(okButton);
        okButton.addActionListener(this);
        t1.setText("no.of hours per story point"); 
        t2.setText("no.of hours per iteration");  
}

public void actionPerformed(ActionEvent evt) 
{
        String str1,temp;
        int hs=0,hi=0,nopi=0;
        DecimalFormat df2 = new DecimalFormat("#.#");
        ArrayList<Integer> point=new ArrayList<Integer>();
        ArrayList<String> user=new ArrayList<String>();
        if (evt.getSource() == okButton) 
        {       
                
                String data= "iteration\tUserStories\tStoryPoint\n 1\t1.1,1.2\t13\n 2\t1.2,2.1,2.2\t13\n 3\t2.2,3.1\t14\n 4\t3.2,4.1\t13\n 5\t4.1,5.1\t13\n 6\t5.1,5.2\t10\n 6\t6.1\t7\n ";


                    

                txt.setText(data);
                // System.out.println(data);
                // for(Integer obj:point)  
                //         System.out.println(obj);  
                
                // for(String obj:user)  
                //         System.out.println(obj);  
                

        }
}
}

// <HTML>
// <HEAD>
//         <TITLE>Selvamani Kannan</TITLE>
// </HEAD>
// <BODY>
//         <APPLET Code="soft.class" Width=400 Height=600>
//         </APPLET>
// </BODY>    
// </HTML>
