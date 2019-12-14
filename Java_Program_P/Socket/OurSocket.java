import java.net.*;
import java.io.*;

public class OurSocket
{
	Socket socket;
	BufferedReader theReader;
	PrintWriter theWriter;

	public OurSocket(String host, int port) throws UnknownHostException, IOException
	{
		this(new Socket(host, port));
	}

	public OurSocket(Socket s) throws UnknownHostException, IOException
	{
		socket = s;
		theReader = new BufferedReader(new InputStreamReader(socket.getInputStream()));
		theWriter = new PrintWriter(socket.getOutputStream(), true);
	}

	public Socket getSocket()
	{
		return socket;
	}

	public void close() throws IOException
	{
		socket.close();
	}

	public String readLine() throws IOException
	{
		return theReader.readLine();
	}

	public void println(String s) throws IOException
	{
		theWriter.println(s);
	}
}