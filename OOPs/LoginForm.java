import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class LoginForm extends JFrame implements ActionListener
{
    JPanel panel;
    JLabel user_label, password_label, message;
    JTextField userName_text;
    JTextField password_text;
    JButton submit, cancel;

    LoginForm()
    {
        user_label = new JLabel();
        user_label.setText("User name: ");
        userName_text = new JTextField();

        password_label= new JLabel();
        password_label.setText("Password: ");
        password_text =  new JPasswordField();

        submit = new JButton("SUBMIT");
        panel=  new JPanel( new GridLayout(3,1));
        panel.add(user_label);
        panel.add(userName_text);
        panel.add(password_label);
        panel.add(password_text);

        message = new JLabel();
        panel.add(message);
        panel.add(submit);

        EXIT_ON_CLOSE
    }
    
}

public static void main(String args[])
{

}

@Override
public void actionPerformed(ActionEvent e) 
{
  String userName = userName_text.getText();
  String password = password_text.getText();

}

