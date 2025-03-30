#include <iostream>
#include <string>

using namespace std;

int main() {
    string search;
    
    cout << "Search: ";
    cin >> search;

    if (search == "COMPUTER") {
        cout << "An electronic device that can receive, store, process, and output data.";
    }
     else if (search == "ALGORITHM") {
        cout << "A set of rules for solving problems, especially in computing.";
    } 
    else if (search == "ARTIFICIAL INTELLIGENCE") {
        cout << "The simulation of human intelligence by machines.";
    } 
    else if (search == "BIG DATA") {
        cout << "Extremely large data sets analyzed for patterns and trends.";
    }
     else if (search == "BLOCKCHAIN") {
        cout << "A decentralized digital ledger for secure transactions.";
    } 
    else if (search == "CLOUD COMPUTING") {
        cout << "The delivery of computing services over the internet.";
    }
     else if (search == "CYBERSECURITY") {
        cout << "The protection of computer systems from cyber threats.";
    }
     else if (search == "DATABASE") {
        cout << "An organized collection of data stored electronically.";
    }
     else if (search == "ENCRYPTION") {
        cout << "The process of converting data into security code.";
    } 
    else if (search == "FIREWALL") {
        cout << "A security system that prevents unauthorized access to a network.";
    } 
    else if (search == "FIRMWARE") {
        cout << "Software embedded into hardware for specific functions.";
    } 
    else if (search == "HARDWARE") {
        cout << "The physical components of a computer system.";
    }
     else if (search == "JAVASCRIPT") {
        cout << "A programming language used for web development.";
    } 
    else if (search == "MACHINE LEARNING") {
        cout << "A subset of AI where computers learn from data.";
    }
     else if (search == "MALWARE") {
        cout << "Malicious software designed to harm or exploit systems.";
    }
     else if (search == "MICROPROCESSOR") {
        cout << "The central processing unit of a computer.";
    } 
    else if (search == "NEURAL NETWORK") {
        cout << "AI models inspired by the human brain.";
    } 
    else if (search == "OPEN SOURCE") {
        cout << "Software with publicly accessible source code.";
    }
     else if (search == "ROUTER") {
        cout << "A device that connects different networks.";
    } 
    else if (search == "SOFTWARE") {
        cout << "Programs and operating systems that run on computers.";
    }
     else if (search == "SPAM") {
        cout << "Unwanted or junk email messages.";
    } 
    else if (search == "SOLID STATE DRIVE") {
        cout << "Widely known as SSD, a faster storage without moving parts.";
    } 
    else if (search == "VIRTUAL REALITY") {
        cout << "A simulated digital environment experienced with special equipment.";
    }
     else if (search == "AUGMENTED REALITY") {
        cout << "Enhancing real-world environment with digital overlays.";
    } 
    else if (search == "5G") {
        cout << "The fifth generation of mobile network technology.";
    } 
    else if (search == "CLOUD STORAGE") {
        cout << "Online storage of data accessible from anywhere.";
    } 
    else if (search == "BIOMETRICS") {
        cout << "Technology that authenticates identity using physical traits.";
    } 
    else if (search == "BIT") {
        cout << "The smallest unit of data in computing, representing 0 or 1.";
    } 
    else if (search == "BYTE") {
        cout << "A unit of digital data, typically consisting of 8 bits.";
    } 
    else if (search == "CACHE") {
        cout << "A temporary storage area for fast access to frequently used data.";
    } 
    else {
        cout << "Word not found in the dictionary";
    }
    
    return 0;
}