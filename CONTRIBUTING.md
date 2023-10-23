# Contributing to EoSDecomp

Currently Ghidra is the primary tool used for decompiling and reverse engineering Touhou 6, however [PINCE](https://github.com/korcankaraokcu/PINCE), [Cheat Engine](https://www.cheatengine.org/), and [x64dbg](https://x64dbg.com/) are all used for dynamic analysis of the binary.
However this will change as we shift from analyzing the binary to actually reconstructing it.
<br></br>
Currently you can access the server by entering the following into Ghidra:
<br></br>
Server: `ghidra.wearr.dev`
<br></br>
Port: `13100`
- [x] Request Anonymous Access

# Code style

Code style has not yet been established, but ideally a prettier config will be constructed and that will be used every time a change is made to the codebase.

# Highly requested features and contributions.

- [ ] CI/CD for a progress indicator.
- [ ] Help with reverse engineering more obscure classes, (UnknownA-F, Ending, MainMenu, etc).
- [ ] Help with repository setup
- [x] Constructing classes for game code, instead of relying on identifying functions loosely.
- [x] Public Ghidra Server  
