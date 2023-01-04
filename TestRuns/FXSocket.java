//package org.socket;

import java.net.http.WebSocket;
import java.util.concurrent.CompletionStage;

class FXSocket implements WebSocket.Listener{
	//In the onOpen function, we add our WebSocket listener class to the WebSocket
	//we then send a message to the server with our userKey    
	public void onOpen(WebSocket webSocket) {
	    	System.out.println("onOpen using subprotocol" + webSocket.getSubprotocol());
	    	WebSocket.Listener.super.onOpen(webSocket);
	    	webSocket.sendText("{"userKey":"wslOBdD4QbEHbzDhyGuA"}", "symbol":"EURUSD", true);
	    }
	   //In the onText function, we get our Forex data as requested above, we will cover the processing of this data later in the 
	   //tutorial. The WebSocket interface requires a return function of class CompletionStage so we use the WebSocket.Listener.
	   //super.onTest function to generate this and return it.
	   public CompletionStage<?> onText(WebSocket webSocket, CharSequence data, boolean last) {
		    System.out.println("onText received " + data);
		    return WebSocket.Listener.super.onText(webSocket, data, last);
		}
	   //In the onError function, we can handle errors, 
	   //we are also required to pass the call back to the underlying WebSocket.
	public void onError(WebSocket webSocket, Throwable error) {
		    System.out.println("Bad day! " + webSocket.toString());
		    WebSocket.Listener.super.onError(webSocket, error);
		}
}
