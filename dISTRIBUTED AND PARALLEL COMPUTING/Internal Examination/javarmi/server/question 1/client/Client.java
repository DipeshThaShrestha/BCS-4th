Client.java

import java.io.*;
import java.net.*;

public class Client {
public static void main(String[] args) throws Exception { try {
String sentence;
String modifiedSentence;
BufferedReader inFromUser = new BufferedReader(new InputStreamReader(System.
in));
Socket clientSocket = new Socket("127.0.0.1", 8000);
DataOutputStream outToServer = new DataOutputStream(clientSocket.getOutputSt
ream());
sentence = inFromUser.readLine(); outToServer.writeBytes(sentence + "\n");
InputStreamReader ins = new InputStreamReader(clientSocket.getInputStream());
BufferedReader inFromServer = new BufferedReader(ins);
modifiedSentence = inFromServer.readLine();
System.out.println("The data received from the server is " + modifiedSentence);
outToServer.flush();
outToServer.close(); clientSocket.close();
} catch (Exception e) { System.out.println(e);
}
}
}