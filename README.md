
# LONET Unreal Plugin
Full Documentation: loledvirtual.com/documentation

In this guide we'll set up the Unreal plugin for LONET.

Before getting started, you should install the LONET server software and connect your encoder, and read the documentation for both of them.

## Installation

The latest version of the LONET Unreal plugin can be found here.
It can be installed like any Unreal plugin. Make a plugins folder in the directory of your Unreal project, and copy the plugin folder into that directory.

## Configuration

Drag the LONET_Server object from the "Place Actors" panel into your scene.

Select the object and configure the SocketIOClient component. If the server is running on the same computer as Unreal, you can use localhost instead of an IP. Otherwise, use the IP displayed at the top of the LONET server coftware.
Use port **3000.**

![alt text](../../img/lonetsocketio.png 'LONET')

Next, select the LONET_Client component and look at the details inspector. This contains a number of maps you'll need to assign to direct the data to the right place. 
Starting with the camera map, this is where you tell the component which cameras to assign to which letter.
Cameras must be a Cine Camera objects.

![alt text](../../img/cameras.png 'LONET')

The next four maps allow you to choose which encoder numbers are assigned to focus, iris, and zoom of the cameras.

![alt text](../../img/encodermap.png 'LONET')

## Connection

Once properly configured, Unreal will connect upon Playing and the cameras settings will automatically update. It will disconnect once the play session is stopped.

The raw encoder value (not calculated from lens mapping) is also made available in the RawEncoder value of the LONET Client object. You can build your own logic using this value that allows you to use encoders for things besides just lenses!

## Specs

The current measured latency is between 1 and 2 frames at 24FPS. This is latency measured from the moment the physical lens moves, to the time the Unreal camera settings are finshished updating.
