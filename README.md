# yVent
 
***Disclaimer:** yVent is not a medical device. yVent must not replace FDA/CE-mark ventilation support. yVent is an experimental device which should only be considered in emergency scenarios as an alternative to death due to equipment shortage.*

**Note:** This is a work in progress. We will release first CAD files and manufacturing instructions after we are satisifed with device performance in tests.  

## Summary

yVent is a pressure-triggered, 3D printable, emergency ventilator. The device has no moving parts and consits of 2 pieces of plastic. It is designed around an aerodynamic behavior known as the Coandă effect (It is a bistable fluidic amplifier). The device produces cyclical pressure changes, which can support patient breathing, while allowing for patient actuation and eliminating the possibility of dissynchrony. The device was designed and developed as a last resort ventilator for major clinical centers in Philadelphia.

![YVENT](https://github.com/MSwoboda/yvent/blob/master/images/noBG.png?raw=true "yVent Inside")

### Features
- Adjustable PIP pressure of 0-50 [cmH2O] 
- PEEP (0-20[cmH2O]) (w/ PEEP valve)
- Operating supply 20-140 [cmH2O] pressure source (air regulator or blower)  
- Can be actuated with patient breathing (no risk of asynchrony)
- Regulated inhale/exhale phase (I/E time, I/E ratio can be adjusted by modifying circuit compliance, resistance or by adding a controlled air leak)

### Risks

The device is a simple pneumatic oscillator triggered by pressure meant to sustain or support breathing. It pumps air in to a set pressure threshold, reverses flow, pumps air out to a set pressure threshold and resets. It cannot deliver a set volume of air (without an additional components), trigger alarms, display measurements, clear mucus, or perform many other critical functions of modern-day ventilators. 

### Failure Modes

yVent is reliable if the following requirements are satisfied:
1) Dimensional accuracy of the inlet and channel wedge is maintained
2) Seal of all chambers of the device is maintained
3) Air flow through the device is greater than leaks in patient circuit

yVent can fail in the following way:
- Violation of requirement 1 will change the pressure thresholds and pneumatic behavior of the circuit.
- Violation of requirement 1 may result in high frequency oscillation
- Violation of requirement 2 & 3 will result in no actuation 

## Theory of Operation

When pressure is applied to the input terminal of the yVent, the air flow stream created by the narrowing in the geometry creates a vortex (Coanda effect) which attaches the stream to the patient output channel. When the flow stream encounters resistance on the output terminal (increased pressure in patient's lungs), the first vortex collapses and the air flow stream redirects to the second output channel (again creating the Coanda effect vortex). In this fludic configuration, air flows from the patient output channel to the output terminal in addition to from the input terminal to the second terminal. This allows for exhale of gas. Once pressure in the patient's lungs reaches the threshold pressure, the second vortex collapses and restarts the cycle. Our design uses a different approach to create the Coanda vortex effect but functionally they are the same. 

## Testing and Validation

### Testing Setup
![COVER](https://github.com/MSwoboda/yvent/blob/master/images/setup.png?raw=true "yVent Inside")

### Results - Markforged 3D Printed Version [Onyx No Fiber Filament | 0.125mm layer]

![YVENT](https://github.com/MSwoboda/yvent/blob/master/images/test/yvent_alpha_onyx_fil_0125mmlayer_3300mm_1590mm.jpg?raw=true "yVent Inside")


### Results - Prusa MK3 [Hatchbox PLA Gray | 0.200mm layer | 0.2 SPEED MK3 Prusa Slicer Profile]

![YVENT](https://github.com/MSwoboda/yvent/blob/master/images/test/yvent_alpha_pla_fil_0200mmlayer_3300mm_1590mm.jpg?raw=true "yVent Inside")


## Components and Modules

### Main Body
![BODY](https://github.com/MSwoboda/yvent/blob/master/images/mainbody.png?raw=true "yVent Inside")
The main functional component of yVent. Consists of main input port for 0.3-2 psi regulated pressure, standard 22mm patient output port, and threaded vent port. The threaded port mates with the PEEP adapter to provide a stanard PEEP recepticle. The threaded port can also be used with a one-way HEPA filter to reduce aeorosolization of viral and bacterial particles. 

### Cover Plate
![COVER](https://github.com/MSwoboda/yvent/blob/master/images/cover.png?raw=true "yVent Inside")
Cover plate is used to seal all channels and provide basic use information of the device. 

**Note:** Special care needs to be taken to glue the cover plate to the main body. This is the most common point of failure during assembly.

### PEEP Adapter
![PEEP ADAPTER](https://github.com/MSwoboda/yvent/blob/master/images/peep.png?raw=true "yVent Inside")

PEEP adapter theads into the main body vent and provides one 22mm and one 33mm port for stanard PEEP valves. The connector can also connect to a HEPA flter.

## Manufacturing & Assembly

### Explanation
yVent has been designed to be enitrely 3D printed. However, CAD and STL file folders include both 3D printable versions and a rough version adapted for CNC milling and injection molding (threads removed, holes sized for tapping, overhangs removed).

The design has been printed and tested using Markforged Onyx One and Prusa i3 Mk3 printers (see testing sections).

### Medical Grade Silicone Adhesive Method

This method creates a robust seal between the main body and cover using a medical grade silicone rubber. This is the preferred method of sealing the part.

#### Tools
- Spatula
- Q-Tip
- Medical-grade Silicone Adhesive 
- Paper towel

#### Instructions

1) Remove supports from 3D printed parts and prepare tools. 


![Step1](https://github.com/MSwoboda/yvent/blob/master/images/assembly/yv_glue_1.jpg?raw=true "yVent Inside")


2) Add blob of adhesive to the smooth side of cover (side without writing). The amout of adhesive should be enough to create a thin (0.2-1mm) layer.


![Step2](https://github.com/MSwoboda/yvent/blob/master/images/assembly/yv_glue_2.jpg?raw=true "yVent Inside")


3) Distribute adhesive evenly with spatula. This should create a uniform layer with no pits. Fill any gaps with more adhesive and smooth out with spatula.


![Step3](https://github.com/MSwoboda/yvent/blob/master/images/assembly/yv_glue_3.jpg?raw=true "yVent Inside")

4) Lock the cover on output port and align with protrusion on the main body.

![Step4](https://github.com/MSwoboda/yvent/blob/master/images/assembly/yv_glue_4.jpg?raw=true "yVent Inside")


5) Clean any adhesive leaking out with a paper towel.


![Step5](https://github.com/MSwoboda/yvent/blob/master/images/assembly/yv_glue_5.jpg?raw=true "yVent Inside")


6) Apply pressure to the part and leave to try until adhesive is set. Time and pressure will depend on adhesive type. Note the setting and curing time.


![Step6](https://github.com/MSwoboda/yvent/blob/master/images/assembly/yv_glue_6.jpg?raw=true "yVent Inside")


### Double Sided Tape

#### Tools
- Scissors
- Scalpel or sharp knife
- Strong Double-Sided Tape
- Hot air gun (optional)

#### Instructions

1) Apply a single strip of double-sided tape to cover the input port and one arm of the yVent. A single strip should cover the input port, narrowing at the input port, and wedge dividing the yVent into two channels.

 ![Step1](https://github.com/MSwoboda/yvent/blob/master/images/assembly/yv_tape_1.jpg?raw=true "yVent Inside")


2) Apply second strip to the remaining part of the cover. The two strips should create a small (less than 0.5 mm overlap) to provide optimal sealing.


 ![Step1](https://github.com/MSwoboda/yvent/blob/master/images/assembly/yv_tape_2.jpg?raw=true "yVent Inside")


3) Cut the tape with a scalpel or scissors to align with the edge of the cover.


 ![Step1](https://github.com/MSwoboda/yvent/blob/master/images/assembly/yv_tape_3.jpg?raw=true "yVent Inside")


4) Lock the cover on the output port and align with protrusion on the main body. Remove any protruding tape with a scalpel. The protruding tape can also be removed with a hot air gun (**Note:** Apply a small amount of heat to only melt the tape and not the plastic of the yVent).


 ![Step1](https://github.com/MSwoboda/yvent/blob/master/images/assembly/yv_tape_4.jpg?raw=true "yVent Inside")


5) Apply pressure to the part.


 ![Step1](https://github.com/MSwoboda/yvent/blob/master/images/assembly/yv_tape_5.jpg?raw=true "yVent Inside")


### Input Port Mount

The yVent has a standard 1/4 NPT thread on the input port, which can fit a wide variety of connectors (like push to connect, barb). Select the connector most appropriate for your environment (testing, clinical). When inserting the connector apply a small amount of glue to the threads to seal it. 

**Note:** Make sure the connector's edge does not protrude over the floor of the yVent channels. 

**Note:** Make sure that any adhesive applied to the threads does not leak into the input chamber, especially the narrowing after the input port.

## Competitive Analysis [opinion by Michał Swoboda]

This project has been created as a direct response to current solutions of 'open-source ventilators' for the COVID-19 pandemic. While the enthusiasm of the engineering community has been commendable, the results of this enthusiasm have been depressing. It is sad to see the brightest minds of the engineering community (MIT) design, develop, and promote a half-baked, student project (eVent . This and many other Arduino-based 'open-source ventilators', while built by smart, hard-working, and well-meaning people, showcase a lack of understanding of medical device design, disregard for risk control, and low-level understanding of the problem. The 'it's better than nothing' attitude fails to notice that integration of a bad technology can have profound negative on the healthcare system. 

## Failure Reporting

We encourage everyone interested in the project to 3D print and try out the yVent on your own. All you need is a 3D printer, lung model (could be a balloon but ventilator test lungs works best), and a 0.3-2psi pressure source. If you'd like to add PEEP, a PEEP valve is necessary. Please post all problems you enocunter in the Github's issues section along with a description of how the device was printed, the test setup, a detailed description of the problem, and possible solutions.

## Literature

[1] [The Fluid Amplifier and its Application in Medical Devices](https://github.com/MSwoboda/yvent/blob/master/literature/The_Fluid_Amplifier_and_its_Application_in_Medical.pdf)

[2] [Taxonomic Trees of Fluidic Oscillators 
](https://www.epj-conferences.org/articles/epjconf/pdf/2017/12/epjconf_efm2017_02128.pdf)

[3] [Experimental Comparison between the Flow Field of Two Common Fluidic Oscillator Designs](https://www.researchgate.net/publication/271645509_Experimental_Comparison_between_the_Flow_Field_of_Two_Common_Fluidic_Oscillator_Designs)






