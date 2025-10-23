#pragma once

#define THERMAL_MODEL_E3D_REVO_VER 1      // model parameters version

#define THERMAL_MODEL_E3D_REVO_P 40.      // heater power (W)
#define THERMAL_MODEL_E3D_REVO_U -0.0014  // linear temperature coefficient (W/K/power)
#define THERMAL_MODEL_E3D_REVO_V 1.05     // linear temperature intercept (W/power)

#define THERMAL_MODEL_E3D_REVO_C 8.77     // initial guess for heatblock capacitance (J/K)
#define THERMAL_MODEL_E3D_REVO_R 25.3     // initial guess for heatblock resistance (K/W)

#define THERMAL_MODEL_E3D_REVO_fS 0.15    // sim. 1st order IIR filter factor (f=100/27)
#define THERMAL_MODEL_E3D_REVO_LAG 270    // sim. response lag (ms, 0-2160)

#define THERMAL_MODEL_E3D_REVO_W 0.85     // Default warning threshold (K/s)
#define THERMAL_MODEL_E3D_REVO_E 1.23     // Default error threshold (K/s)

// fall-back resistance vector (R0-15)
#define THERMAL_MODEL_E3D_REVO_Rv {THERMAL_MODEL_E3D_REVO_R, 23.9, 22.5, 19.6, 19.0, 18.3, 17.7, 17.1, 16.8, 16.5, 16.3, 16.0, 15.9, 15.7, 15.6, 15.4}

// echo:Thermal Model settings:
// echo:  M310 I0 R24.10
// echo:  M310 I1 R22.81
// echo:  M310 I2 R21.52
// echo:  M310 I3 R18.94
// echo:  M310 I4 R18.24
// echo:  M310 I5 R17.54
// echo:  M310 I6 R16.85
// echo:  M310 I7 R16.15
// echo:  M310 I8 R15.88
// echo:  M310 I9 R15.62
// echo:  M310 I10 R15.35
// echo:  M310 I11 R15.08
// echo:  M310 I12 R14.92
// echo:  M310 I13 R14.76
// echo:  M310 I14 R14.59
// echo:  M310 I15 R14.43
// echo:  M310 P40.00 U-0.0014 V1.05 C7.71 D0.1500 L270 S1 B1 E1.23 W0.85 T-7.00
