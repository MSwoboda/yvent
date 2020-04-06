# Y-Vent
 
***Disclaimer:** Y-Vent is not a medical device. Y-Vent must not replace FDA/CE-mark ventilation support. Y-Vent is an experimental device which should only be considered in emergency scenarios as an alternative to death due to equipment shortage.*

**Note:** This is a work in progress. We will release first CAD files and manufacturing instructions after we are satisifed with device performance in tests.  

## Summary

Y-Vent is a pressure-triggered, 3D printable, emergency ventilator. The device has no moving parts and consits of 2 pieces of plastic. It is designed around an aerodynamic behavior known as the Coandă effect (It is a bistable fluidic amplifier). The device produces cyclical pressure changes, which can support patient breathing, while allowing for patient actuation and eliminating the possibility of dissynchrony .

![YVENT](https://github.com/MSwoboda/yvent/blob/master/images/noBG.png?raw=true "Y-Vent Inside")

### Features
- Adjustable PIP pressure of 0-50 [cmH2O] 
- PEEP (0-20[cmH2O]) (w/ PEEP valve)
- Operating supply 20-140 [cmH2O] pressure source (air regulator or blower)  
- can be actuated with patient breathing (no risk of asynchrony)
- Regulated inhale/exhale phase (I/E time, I/E ratio can be adjusted by modifying circuit compliance, resistance or by adding a controlled air leak)

### Risks

The device is a simple pneumatic oscillator triggered by pressure. It pumps air in to a set threshold, reverses flow, pumps air out to a set threshold and resets. It cannot deliver a set volume of air, trigger alarms, display measurements, clear mucus, or perform many other critical functions of modern-day ventilators.


### Failure Modes

Y-Vent is reliable if:
1) Dimensional accuracy of the inlet and channel wedge is maintained
2) Seal of all chambers of the device is maintained
3) Air flow through the device is greater than leaks in patient circuit

Y-Vent can fail in the following way:
- Violation of point 1) will change the pressure thresholds and pneumatic behavior of the circuit.
- Violation of points 2) and 3) will result in no actuation 
- Violation of point 1) may result in high frequency oscillation

## Theory of Operation

When pressure is applied to the input terminal of the Y-Vent, the air flow stream created by the narrowing in the geometry creates a vortex (Coanda effect) which attaches the stream to the patient output channel. When the flow stream encounters resistance on the output terminal (increased pressure in patient's lungs), the first vortex collapses and the air flow stream redirects to the second output channel (again creating the Coanda effect vortex). In this fludic configuration, air flows from the patient output channel to the output terminal in addition to from the input terminal to the second terminal. This allows for exhale of gas. Once pressure in the patient's lungs reaches the threshold pressure, the second vortex collapses and restarts the cycle. Our design uses a different approach to create the Coanda vortex effect but functionally they are the same. 


## Performance

### Testing Setup
![COVER](https://github.com/MSwoboda/yvent/blob/master/images/setup.png?raw=true "Y-Vent Inside")

### Markforged 3D Printed Version [Onyx No Fiber Filament]





### Prusa MK3 [Hatchbox PLA Gray]




## Components and Modules

### Main Body
![BODY](https://github.com/MSwoboda/yvent/blob/master/images/mainbody.png?raw=true "Y-Vent Inside")
The main functional component of Y-Vent. Consists of main input port for 0.3-2 psi regulated pressure, standard 22mm patient output port, and threaded vent port. The threaded port mates with the PEEP adapter to provide a stanard PEEP recepticle. The threaded port can also be used with a one way HEPA filter to reduce aeorosolization of viral and bacterial particles. 

### Cover Plate
![COVER](https://github.com/MSwoboda/yvent/blob/master/images/cover.png?raw=true "Y-Vent Inside")
Cover plate is used to seal all channels and provide basic use information of the device. Special care needs to be taken to glue the cover plate to the main body. This is the most common point of failure during assembly.

### PEEP Adapter
![PEEP ADAPTER](https://github.com/MSwoboda/yvent/blob/master/images/peep.png?raw=true "Y-Vent Inside")

PEEP adapter theads into the main body vent and provides one 22mm and one 33mm port for stanard PEEP valves. The connector can also connect to a HEPA flter for added functionality.

## Manufacturing & Assembly



## Validation


## Literature

[1] [The Fluid Amplifier and its Application in Medical](https://github.com/MSwoboda/yvent/blob/master/literature/The_Fluid_Amplifier_and_its_Application_in_Medical.pdf)

[2] [Taxonomic Trees of Fluidic Oscillators 
](https://www.epj-conferences.org/articles/epjconf/pdf/2017/12/epjconf_efm2017_02128.pdf)

[3] [Experimental Comparison between the Flow Field of Two Common Fluidic Oscillator Designs](https://www.researchgate.net/publication/271645509_Experimental_Comparison_between_the_Flow_Field_of_Two_Common_Fluidic_Oscillator_Designs)






