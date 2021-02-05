# pulse_pi
** Raspberry Pi code to read the pulse info from the Arduino and publish it via DDS

![](https://github.com/rtijohnb/pulse_pi/blob/main/RtiAsOne.png)

Overview:
=========

In these instructions, we'll layout how to load RTI's Connext DDS onto a Raspbery Pi (3B+ or better recommended) and how to load and build this medical pulse monitoring application. You will also need to run a local "pulse_pi" routing service to connext this application to the RTI Web Integration Service (WIS) running in the amazon cloud (http://50.18.214.8:8090/). Refer to the related companion repo for routing service https://github.com/rtijohnb/pulse_aws_routing. 

To give you context, the picture below shows the entire system.

![](https://github.com/rtijohnb/pulse_pi/blob/main/MedicalDemoArch.png)

Note: you can run the "pulse_pi" router at any point on your local DDS-Databus (i.e., on your Pi or laptop if both are connected to the same network.)  Optionally, you might want to run a local WIS on your laptop. (DDS-Databus) - see companion repo: https://github.com/rtijohnb/pulse_wis.

To setup this example:
======================
This procedure involves downloading the RTI's Connext DDS raspbian target to your host machine and copying them to the pi. This is because there is no host package for the Raspberry to perform direct installation. Your choices for Raspbian are rti_connext_dds-5.3.1-pro-target-armv6vfphLinux3.xgcc4.7.2.rtipkg or rti_connext_dds-6.0.1-pro-target-armv6vfphLinux3.xgcc4.7.2.rtipkg.  Medical Demo uses Connext 6.0.1.

Note: Both of these 5.3.1 and 6.0.1 work fine for a Raspberry 3B+ (ARM7) using gcc versions 8.3 on Connext Pro 6.0.1 and gcc version 6.3 on Connext Pro 5.3.1
       This assumes you already have a 6.0.1 host installed on your PC (you'll need the $NDDSHOME/include directory for compilation on the Raspberry)


Install connext_dds-6.0.1-pro-target-armv6vfphLinux3.xgcc4.7.2.rtipkg on the Raspberry
   - set your host NDDSHOME environment variable to your host rti_connext_dds-6.0.1/
   - This is needed as the target rtipkg contains only the libraries and resources directory - you will get the /include from your host installation
   - Download connext_dds-6.0.1-pro-target-armv6vfphLinux3.xgcc4.7.2.rtipkg to your host machine (any directory - i.e. Downloads dir is fine)
   - Unzip the rtipkg. To do this, add .zip extension and unzip
         - rename the above to connext_dds-6.0.1-pro-target-armv6vfphLinux3.xgcc4.7.2.rtipkg.zip
         - Unzip it, and you will see a zip file contained within
         - Unzip the second file and you should see key directories of lib and resource under 
./Downloads/rti_connext_dds_6.0.1-pro-target-arm6vfphLinux3.xgcc4.7.2/rti_connext_dds-6.0.1/
   - Copy required directories to the Raspberry: /include /lib and /resources
       Note: For mac use scp -r command to copy each directory from host to Raspberry target
       - You will need to copy these directories from your host e.g: (in a host command shell use the following scp commands)
 scp -r ./Downloads/rti_connext_dds_6.0.1-pro-target-arm6vfphLinux3.xgcc4.7.2/rti_connext_dds-6.0.1/lib pi@[desthost]: ~/rti_connext_dds-6.0.1/
 scp -r ./Downloads/rti_connext_dds_6.0.1-pro-target-arm6vfphLinux3.xgcc4.7.2/rti_connext_dds-6.0.1/resource pi@[desthost]: ~/rti_connext_dds-6.0.1/
 scp -r $NDDSHOME/include pi@[desthost]/rti_connext_dds-6.0.1/   
* Resultant Raspberry target directory structure will look like: 
```
   ~/rti_connext-6.0.1/
    |
    + --- include/
    |
    +-- lib/
    |
    +-- resource/
    |
    +--bin/ 
```
          
Note if you wish to run Routing Service on the Raspberry, you should copy from your host via:
scp -r ./Downloads/rti_connext_dds_6.0.1-pro-target-arm6vfphLinux3.xgcc4.7.2/rti_connext_dds-6.0.1/resource/app/bin/arm6vfphLinux3.xgcc4.7.2/ pi@[desthost]:~/rti_connext-6.0.1/

on the pi, set the env via source command
source ~/rti_connext_dds-6.0.1/resource/scripts/rtisetenv_armv6vfphLinux3.xgcc4.7.2.bash
     (this script will set both $NDDSHOME as well as the Library Load path)

Cross compiling:
===============
   - Need DDS 6.0.1 with the package armv6vfphLinux3.xgcc4.7.2
   - Need to install ARM compiler for cross compilation if not building on the raspberry pi.  Use the command:
  	"sudo apt-get install gcc-arm-linux-gnueabihf g++-arm-linux-gnueabihf"
   - Makesure the environment variable NDDSHOME is set to point to your DDS 6.0.1 installation direction.
   - Copy the resulting executable to the Raspberry Pi
   - On the Raspberry Pi create the directory structure as noted above.  The include directory in not needed on the target when cross compiling.
       	- Create the directory rti_connext_dds-6.0.1.
	- Copy the needed libraries from your build host to the Raspberry Pi.
		- copy from $NDDSHOME/lib/armv6vfphLinux3.xgcc4.7.2 on your development host to the $NDDSHOME/lib/armv6vfphLinux3.xgcc4.7.2 on your Raspberry pi.
	- make sure to set the environment using the script as noted above: source ~/rti_connext_dds-6.0.1/resource/scripts/rtisetenv_armv6vfphLinux3.xgcc4.7.2.bash



To Load and Build the pulse_pi application:
===========================================
First - On the Pi, from where you want your Medical Demo project to reside, clone of both the pulse_pi repo from https://github.com/rtijohnb/pulse_pi as well as the System Designer repo from https://github.com/rtijohnb/pulse_sysdesigner (you will want the system xml file).
```    
    - git clone https://github.com/rtijohnb/pulse_pi
    - git clone https://github.com/rtijohnb/pulse_sysdesigner
```

From your command shell, type:
Set NDDSHOME environment variable
> make -f makefile_MedicalDemo_armv6vfphLinux3.xgcc4.7.2
This command will build a release executable.
 
To build a debug version instead:
> make -f makefile_MedicalDemo_armv6vfphLinux3.xgcc4.7.2 DEBUG=1



To Run the pulse_pi application:
===============================
PULSE_DEMO_HOME: must be set to the name of the directory where the pulse repositories have been cloned in.
e.g. for linux: export PULSE_DEMO_HOME=/home/kenm/repos/Pulse
e.g. for Windows: setx PULSE_DEMO_HOME C:\users\kenm\repos\Pulse /m

Scripts are as follows:
"linuxRunPi" - one-line script that can be used to start the pulse_pi demo on a linux host.
"RunWindowsPi.bat" - one-line script that can be used to start the pulse_pi demo on a windows host.

The demo uses the QOS file MedicalDemo.xml.  It is assumed this file will exist in the directory $PULSE_DEMO_HOME/pulse_sysdesigner.


