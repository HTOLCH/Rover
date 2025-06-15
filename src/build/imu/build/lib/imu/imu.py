from Phidget22.Phidget import *
from Phidget22.Devices.Accelerometer import *
from Phidget22.Devices.Gyroscope import *
from Phidget22.Devices.Spatial import *
import time

def onAccelerationChange(self, acceleration, timestamp):
	print("Acceleration: \t"+ str(acceleration[0])+ "  |  "+ str(acceleration[1])+ "  |  "+ str(acceleration[2]))
	print("Timestamp: " + str(timestamp))
	print("----------")

def onAngularRateUpdate(self, angularRate, timestamp):
	print("AngularRate: \t"+ str(angularRate[0])+ "  |  "+ str(angularRate[1])+ "  |  "+ str(angularRate[2]))
	print("Timestamp: " + str(timestamp))
	print("----------")

def onAlgorithmData(self, quaternion, timestamp):
	print("Timestamp: " + str(timestamp))

	eulerAngles = self.getEulerAngles()
	print("EulerAngles: ")
	print("\tpitch: " + str(eulerAngles.pitch))
	print("\troll: " + str(eulerAngles.roll))
	print("\theading: " + str(eulerAngles.heading))

	quaternion = self.getQuaternion()
	print("Quaternion: ")
	print("\tx: " + str(quaternion.x))
	print("\ty: " + str(quaternion.y))
	print("\tz: " + str(quaternion.z))
	print("\tw: " + str(quaternion.w))
	print("----------")

def main():
	accelerometer0 = Accelerometer()
	gyroscope0 = Gyroscope()
	spatial0 = Spatial()

	accelerometer0.setOnAccelerationChangeHandler(onAccelerationChange)
	gyroscope0.setOnAngularRateUpdateHandler(onAngularRateUpdate)
	spatial0.setOnAlgorithmDataHandler(onAlgorithmData)

	accelerometer0.openWaitForAttachment(5000)
	gyroscope0.openWaitForAttachment(5000)
	spatial0.openWaitForAttachment(5000)

	spatial0.setHeatingEnabled(True)

	try:
		input("Press Enter to Stop\n")
	except (Exception, KeyboardInterrupt):
		pass

	accelerometer0.close()
	gyroscope0.close()
	spatial0.close()

main()
