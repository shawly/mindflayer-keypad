namespace com { namespace viromania { namespace vtt { namespace wss { namespace KeyboardMatrix {

  struct KeyState {
    KeyState(const char *setKey);
    char key[4];
    bool isDown;
  };

  void initMatrix();
  void detectKeys(void (*callback)(KeyState *key));
}}}}}