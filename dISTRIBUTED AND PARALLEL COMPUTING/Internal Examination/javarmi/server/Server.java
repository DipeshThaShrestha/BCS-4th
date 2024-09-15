mport java.rmi.server.UnicastRemoteObject;

import java.rmi.registry.LocateRegistry;

import java.rmi.registry.Registry;



public class Server{

    public static void main(String[]args){

    try{

        NumberImpl n1 = new NumberImpl(4);



        Number stub1 = (Number) UnicastRemoteObject.exportObject(n1,0);



        Registry registry = LocateRegistry.getRegistry("127.0.0.1",9300);



        registry.bind("number", stub1);



    }

    catch(Exception e){

        System.out.println("Error :"+ e);

    }



    }

}
