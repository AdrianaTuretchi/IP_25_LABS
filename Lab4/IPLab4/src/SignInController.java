public abstract class SignInController {
    abstract public String attemptSignIn(String username, String password) throws SignInException;
}
