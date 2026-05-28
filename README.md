# Transistor-Logic-Gates
In this project, I will use individual transistors to create 3 fundamental logic gates: the AND, OR, and NOT gates, respectively.

# Introduction
The foundation of this project is the transistor, which amplifies and switches signals. Here I am specifically referring to an NPN Bipolar Junction Transistor. The NPN transistor is constructed with two semiconductor types, a P-type and an N-type, where the majority charge carriers are holes and electrons, respectively. The NPN transistor has 3 pins: the base, emitter, and collector. The principle is that a small current (limited by a resistor) is applied from the base to the emitter, which in turn drives a large current from the collector to the emitter. These transistors can be used to construct logic gates and hence truth tables. 

# NOT Gate
The first gate is the NOT gate (inverter), which outputs a low signal when it takes in a high signal and vice versa. The NOT gate was constructed by placing the output on a separate path with a high resistance. When the base signal is low, the current flows through that path. When the base signal is high, the current takes the path of least resistance and flows through the transistor, leaving the output low. 

![Wiring Diagram](not_gate.png)



# AND Gate
This gate requires two transistors; this gate will only output high if both input signals are high. This was constructed by placing two transistors in series, with each this entailed connecting the emitter of the first transistor to the collector of the second, the second emitter was then connected to ground. This circuit works because there is only one path to flow, hence both input signals need to be high for the circuit to be complete.

# OR Gate
Similar to the AND gate, this gate needs two transistors; this time, placed in parallel to each other. Unlike the AND gate, the OR gate outputs high when at least one of the input signals is high. In this circuitry. This works since the parallel connections provide separate paths for the current to flow.




