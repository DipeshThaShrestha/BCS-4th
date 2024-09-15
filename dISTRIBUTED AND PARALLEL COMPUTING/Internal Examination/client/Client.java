import java.rmi.*;
import java.io.*;

public class Client {

    public static void main(String args[]) throws RemoteException {
        new Client(args[0]);
    }

    public Client(String host) {

        try {
            MyRemoteObjectInterface remobj = (MyRemoteObjectInterface) Naming.lookup("rmi://" + host + "/RemotePower");
            System.out.println("Enter X and Y in x^y:");
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            long x = Long.parseLong(br.readLine());
            long y = Long.parseLong(br.readLine());
            System.out.println(Long.toString(x) + "^" + Long.toString(y) + " = ");
            System.out.print(Long.toString(remobj.getPower(x, y)));
        } catch (Exception ex) {
            System.out.println(ex);
        }

    }

}