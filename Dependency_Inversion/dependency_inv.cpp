#include<bits/stdc++.h>
using namespace std;

// Class should depend on interfaces rather than concrete classes
class WiredKeyboard {
    // Concrete Class
};

class WiredMouse {
    // Concrete Class
};

class MacBook {
private:
    const WiredKeyboard keyboard;
    const WiredMouse mouse;

public:
    MacBook() : keyboard(), mouse() {
        // Constructor initializes keyboard and mouse
    }
};
// The MacBook class is tightly coupled with WiredKeyboard and WiredMouse
// This violates the Dependency Inversion Principle

// Now, presence of concrete class hampers the addition of another functionality. Suppose, if we need to add bluetooth functionality to MacBook we can’t since it depends on concrete class.

// To avoid this, we take interface class
class Keyboard {
    // Interface Class
public:
    virtual ~Keyboard() = default;
};

class Mouse {
    // Interface Class
public:
    virtual ~Mouse() = default;
};

class MacBook {
private:
    const Keyboard& keyboard;
    const Mouse& mouse;

public:
    MacBook(const Keyboard& keyboard, const Mouse& mouse) 
        : keyboard(keyboard), mouse(mouse) {
        // Constructor Injection
    }
};
// Now, we can create different implementations of Keyboard and Mouse