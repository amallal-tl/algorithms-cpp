class Singleton {
public:
  // Returns a reference to the singleton instance
  static Singleton& getInstance() {
    // This local static variable is initialized only once, in a thread-safe manner
    static Singleton instance;//Lazy initialization
    return instance;
  }

  // Other methods and members of the singleton class
  // ...

private:
  // Make the constructor private to prevent direct instantiation
  Singleton() {
    // Initialize the singleton instance
    // ...
  }

  // Delete the copy constructor and copy assignment operator to prevent copying
  Singleton(const Singleton&) = delete;
  Singleton& operator=(const Singleton&) = delete;
};
