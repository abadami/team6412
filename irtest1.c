#pragma config(Sensor, S1,     HTIRS2,         sensorNone)
#pragma config(Sensor, S2,     IR,             sensorHiTechnicIRSeeker600)


task main()
{
	while(true) {
		int _dirDC = HTIRS2readDCDir(IR_sens);

		wait10Msec(5);
		nxtDisplayTextLine(1, _dirDC);
		eraseDisplay();
	}
}
