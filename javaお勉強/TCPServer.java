import java.io.*; 
import java.net.*; 
import java.util.Random;

public class TCPServer { 

    public static void main(String argv[]) throws Exception 
    { 
        Random rand = new Random();
        int ans = rand.nextInt(10);
        
        String clientSentence; 
        int capitalizedSentence;

        String same = "You win!";
        String dif = "You lose!";
        
        ServerSocket welcomeSocket = new ServerSocket(6789); 

        while(true) { 

          Socket connectionSocket = welcomeSocket.accept(); 

          BufferedReader inFromClient = 
              new BufferedReader(new
              InputStreamReader(connectionSocket.getInputStream())); 

          DataOutputStream  outToClient = 
            new DataOutputStream(connectionSocket.getOutputStream()); 

          clientSentence = inFromClient.readLine(); 

          capitalizedSentence = Integer.parseInt(clientSentence);

          if(capitalizedSentence == ans){
            outToClient.writeBytes(same); 
          }else{
            outToClient.writeBytes(dif);
          }
        }
    }
}