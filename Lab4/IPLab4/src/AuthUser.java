import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.Random;

public class AuthUser {
    public String username;
    public byte[] password;
    public String salt;
    public AuthUser(String username, String password) throws NullPointerException {
        this.username = username;
        StringBuilder saltSB = new StringBuilder();
        String saltElements = "abcdefgh1234567890";
        Random rand = new Random();
        for (int i = 0; i < 64; i++) {
            saltSB.append(saltElements.charAt(rand.nextInt(saltElements.length())));
        }
        this.salt = saltSB.toString();
        MessageDigest md = null;
        try {
            md = MessageDigest.getInstance("SHA-256");
        } catch (Exception e) {
            e.printStackTrace();
        }
        this.password = md.digest((password + salt).getBytes());
    }

}
