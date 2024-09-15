import java.io.BufferedReader;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.ServerSocket;
import java.net.Socket;

public class Server {
public static void main(String[] args) throws IOException { String clientSentence;
String capitalizedSentence;
ServerSocket welcomeSocket = new ServerSocket(8000); System.out.println("Server is
listening at port: " + 8000); while (true) {
Socket connectionSocket = welcomeSocket.accept();
BufferedReader fromClient = new BufferedReader(new InputStreamReader(connecti
onSocket.getInputStream()));
clientSentence = fromClient.readLine(); capitalizedSentence =
clientSentence.toUpperCase() + "\n";
DataOutputStream toClient = new DataOutputStream(connectionSocket.getOutput
Stream());
toClient.writeBytes(capitalizedSentence);
}
}

}