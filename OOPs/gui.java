import java.awt.*;
// import java.awt.event.ItemEvent;
public class gui
{
   public gui()
    {
        Frame j = new Frame("CheckBox");

        Checkbox checkbox1= new Checkbox("Cricket");
        checkbox1.setBounds(100, 100, 50 , 50);
        Checkbox checkbox2= new Checkbox("Football",true);
        checkbox2.setBounds(100,100,50,50);

        j.add(checkbox1);
        j.add(checkbox2);

        j.setSize(400,400);
        j.setLayout(null);
        j.setVisible(true);

    }

    public static void main(String[] args) 
    {
      new gui();   
    }
}