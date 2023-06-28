package sample;

public class SayHello {
  static {
    System.loadLibrary("lib2");
    System.loadLibrary("lib1");
    //System.loadLibrary("pathstub");
  }

  public static void main(String[] args) {
/*
    if (new SayHello().addToPath("C:\\Users\\cosmin\\devel\\jni-sample\\native\\build\\Debug")) {
      System.loadLibrary("lib1");
      new SayHello().sayHello();
*/
    new SayHello().sayHello();
    
  }

  private native void sayHello();
  //private native boolean addToPath(String str);
}
