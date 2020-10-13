###############################################################################
# (c) 2005-2015 Copyright, Real-Time Innovations.  All rights reserved.       #
# No duplications, whole or partial, manual or electronic, may be made        #
# without express written permission.  Any such copies, or revisions thereof, #
# must display this notice unaltered.                                         #
# This code contains trade secrets of Real-Time Innovations, Inc.             #
###############################################################################


"""Samples's writer."""

from sys import path as sysPath
from os import path as osPath
from time import sleep
import serial
filepath = osPath.dirname(osPath.realpath(__file__))
sysPath.append(filepath + "/../../../")
import rticonnextdds_connector as rti

connector = rti.Connector("PulseParticipantLibrary1::PulseParticipant1",
                          filepath + "/RapidEval.xml")
outputDDS = connector.getOutput("PulsePublisher1::PatientPulseTopicWriter")

#Setup Serial connection
ser = serial.Serial('/dev/ttyACM0', 9600, timeout=1)
ser.flush()
while True:
    if ser.in_waiting > 0:
        line = ser.readline().decode('utf-8').rstrip()
        print(line)

# Initialize some pulse values
outputDDS.instance.setNumber("timestamp", 30)
for i in range(1,100):
    outputDDS.instance.setNumber("readings[i]", i)


for i in range(1, 500):
    """We clear the instance associated to this output
    otherwise the sample will have the values set in the
    previous iteration"""
#    outputDDS.clear_members()

    # change the x and 7 coordinates
    outputDDS.instance.setNumber("x", i+4)
    outputDDS.instance.setNumber("y", i+6)

    # Now we write the sample
    outputDDS.write()
    sleep(1)
