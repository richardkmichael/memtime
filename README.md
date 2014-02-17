memtime
=======

Measure time and memory consumption.

Sources copied from http://www.update.uu.se/~johanb/memtime/
I included the sources of version 1.0 to 1.3 to this repository.
All credits go to Johan Bengtsson.

It seems that there are copies of the latest sources on:
http://freecode.com/projects/memtime
http://ostatic.com/memtime

On these websites the description of the tool is:
"memtime is a tool for measuring memory and time used when executing a command. It currently works on Linux and Solaris-7 and it is written to be fairly easy to port to new systems."

I updated the 'configure.sub' so that ./configure works on newer linux versions.
Additionally, I created a branch in which the program writes its measurements to a logfile.

