---
title: "Phone Holder for Bike handlebar"
excerpt: "Learning Top-Down Modeling and Quick prototyping."
header:
  image: "/assets/img/Bike_Phone_Assembled_front2.JPEG"
  teaser: "/assets/img/Bike_Phone_Assembled_front2.JPEG"
gallery:
  - image_path: "/assets/img/Bike_Phone_Assembled_front2.JPEG"
---

![AStandingSide](/assets/img/Bike_Phone_Assembled_Front.JPEG)

![Adown](/assets/img/Bike_Phone_Assembled_Laying_down.JPEG)

![Asidedown](/assets/img/Bike_Phone_Assembled_Laying_down_sideview.JPEG)

![Afront](/assets/img/Bike_Phone_Assembled_front2.JPEG)

![Charger](/assets/img/Bike_Phone_Charger_view.JPEG)

![Dfront](/assets/img/Bike_Phone_Dissasembled.jpg)

![Gripoff](/assets/img/Bike_Phone_Grip-off.JPEG)

![Gripon](/assets/img/Bike_Phone_Grip-on.JPEG)

![Handlebar](/assets/img/Bike_Phone_Handlebar.JPEG)

![Handlebar2](/assets/img/Bike_Phone_Handlebar_view.JPEG)

![Dinternal](/assets/img/Bike_Phone_Internal.jpg)

![DJoint](/assets/img/Bike_Phone_Joint1.jpg)

![Dtighteningmech](/assets/img/Bike_Phone_TighteningMech.JPEG)

![Volume](/assets/img/Bike_Phone_Volume_view.JPEG)

![Dunderphone](/assets/img/Bike_Phone_under_phone_view.jpg)





![Afront](/assets/img/Bike_Phone_Assembled_Front.JPEG)

![Afront](/assets/img/Bike_Phone_Assembled_Front.JPEG)


(https://stamayosarver.github.io/assets/turntable_attempt.html)

<iframe src="/assets/turntable_attempt.html" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true" frameborder="0"></iframe>




# CAD Model

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e954320b5999ab871?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true" frameborder="0"></iframe>

# Testing the Device Video

[![Testing the device video](/assets/img/Image_for_umixing.png)](https://photos.app.goo.gl/9h1jWNM5ahvRbLjU8)

## Introduction to Rapid Prototyping

Rapid Prototyping is the process of quickly making a baseline prototype, proof of concept, or minimum viable product; however, 3D printing a whole prototype or product is not a quick process at all and can take days or weeks even to assemble. So what makes "Rapid Prototyping" so rapid?

### What makes Rapid Prototyping so 'Rapid'?

Rapid prototyping is so rapid not because of the speed of fabricating prototypes with manufacturing techniques but because of the speed of creating full assemblies and finished products digitally. The "Rapid" part of Rapid Prototyping does not happen in the physical manufacturing of the prototype but rather in the creation of easy-to-modify designs in 3D modeling software. I have spent countless hours in primarily one 3D modeling software --- Fusion 360. Fusion 360 enables parameterization and components to make easily changeable designs and drafts. Once a design is chosen and tested, Fusion 360 offers a generative design modeling platform to make a final product that is lightweight, stronger, and cost-effective much quicker than traditional methods. 

## An introduction to Top-Down Modeling

One such technique to create parts really quickly is a methodology called Top Down Modeling (TDM), TDM is an insanely great method to create a Minimal Viable Product (MVP) or proof of concept quickly and cost-effectively. Top Down Modeling is the use of a primary (top) sketch and then the addition of more sketches and components after that primary sketch to get one coherent parameterized design. This enables a functional assembly and the ability to change each specific part within the assembly. 

See the image below to reference this process.

![TopModeling](/assets/img/Top_down_modeling_pic2.png) 
———— from YouTube; source: ENGINEERING SPIRIT


> "Top-Down Advantages  
References are always correct and can be easily linked. Changing one component will automatically change the others.
You can work from someone else’s designs without issues
Time saver – no need to re-draw sketches for reference
All within one file, easier to edit and make changes" ————  "Top-Down vs Bottom-up Modeling Assemblies" from Product Design Online

## Microfluidic Device Fabrication at Vanderbilt University

However, these microfluidic devices have been very hard to manufacture until recent discoveries and industry developments. See an excerpt of an article below:

> “Fabrication of microfluidic devices by photolithography generally requires specialized training and access to a cleanroom. As an alternative, 3D printing enables cost-effective fabrication of microdevices with complex features that would be suitable for many biomedical applications.” ————  “Rapid prototyping of cell culture microdevices using parylene-coated 3D prints” in Lab on a Chip

Thankfully, with the careful expertise of Dr. David Florian of the Vanderbilt University Biomaterials Department, a co-author to the groundbreaking work using parylene-coated 3D prints, access to this culture-suitable 3D printing technology was made possible for me, a rising First-Year with little to no access to the more complex machinery and tools nor expertise to make a resin print to such detail.

## Application Requiring Homogeneous Mixing

An important application where laminar mixing is pivotal is preparing reaction mixtures for PCR (Polymerase Chain Reaction) amplification and more specifically, a reverse transcriptase PCR (RT-PCR). The curret work around RT-PCR being carried out is quite exciting and opens up revenues for the following common analytes that can be found in using a microfluidic device diagnostic tool - please see the image below. 

![Proteins assessed using Microfluidic Devices](/assets/img/Common_Diagnostic_proteins.png)


PCR is used to make many copies of small segments of DNA or RNA. Precise and uniform mixing of the reaction components (DNA template, primers, nucleotides, and high-temp resistant polymerase enzymes) is necessary for the amplification process. I have been fortunate enough to have had experience operating a PCR machine and analyzing results in my AP Bio class in high school and have simulated how the results would be processed using a coding language (R) in a bioinformatics class at Harvard. I am more than excited to know how to make my own microfluidic devices.

## Challenges of Mixing in Microfluidics

In microfluidic devices, achieving effective mixing poses significant challenges due to maintaining the laminar flow that dominates at this scale. Unlike turbulent (or chaotic) flow, where the chaotic instabilities create the mixing, laminar flow uses diffusion between orderly layers of fluid to mix. As a result, in microfluidics, the goal of creating geometric shape-specific channels whilst considering efficiency is the key to efficient and effective mixing. 

## Considerations for efficiency

In Fundamentals and Applications of Microfluidics by Nam Trung Nguyen, there are four categories of properties to consider when designing a microfluidic device... 

1. Kinematic properties such as linear and angular velocity, vorticity, acceleration, and strain rate;
2. Transport properties such as viscosity, thermal conductivity, and diffusivity;
3. Thermodynamic properties such as pressure, temperature, and density;
4. Miscellaneous properties, including surface tension, vapor pressure, and surface accommodation
coefficients.

 > ### * To control these properties, the following must be controlled precisely *

# 1 Dimensions and Shapes

The efficiency of these designs depends on the dimensions, shapes, and space within the channels. For instance, in a zigzag microchannel, the width (w) and the step size (s) are crucial parameters. A narrower width and smaller step size increase the interface between the fluids, enhancing diffusion and, thus, mixing efficiency. However, due to the conditions of the printer and the limitations of the tools available, I had to parameterize and change the scale of the split and recombine pattern utilized in my microfluidic pattern.

# Understanding flow: Reynolds numbers, Viscosity, and Flow rate

Viscosity is often described as the resistance to flow. Breaking apart what viscosity is beyond this baseline is crucial to developing a good microfluidic device. The units of viscosity are pascal-seconds. Pascal's units can be further simplified to a final result of Newton-second/square_meter or N*s/(m^2). A hidden figure can be discerned in viscosity's components: stress. Stress is defined as the amount of force over an area. Therefore, the units Newton/square_meter (N/m^2) can be translated into stress, and viscosity can be simplified as Stress * Time. Breaking this apart, it is apparent that viscosity is the amount of force over an area that needs to be overcome for a given amount of time to keep a fluid moving. If the quality of the print is not great, there will be imperfections and inefficiencies. 

Understanding how viscosity affects the property of adhesion from the fluid to the walls is instrumental in creating a microfluidic device that is effective, timely, and cost-efficient. As such, a crucial factor in creating the microfluidic device is the quality of the material. Validated in 2021 and again in 2023 by *Rapid prototyping of cell culture microdevices using parylene-coated 3D prints* and *Parylene-C Coating Protects Resin 3D Printed Devices From Materials Erosion and Prevents Cytotoxicity Towards Primary Cells* respectively


> "Resin  3D  printing  is  attractive  for  rapid  fabrication  of  microscale  cell  culture devices,  but  common  resin  materials  are  unstable  and  cytotoxic  under  culture  conditions...We found that parylene-C significantly improved both the cytocompatibility with primary murine white blood cells and the material integrity of prints, while maintaining the favorable optical qualities held by clear resins."  ———— Parylene-C Coating Protects Resin 3D Printed Devices From Materials Erosion and Prevents Cytotoxicity Towards Primary Cells 

## Mixing Strategies in Microfluidics

There are primarily two types of mixing in microfluidics — Active and Passive mixing. Active mixing includes various ways to create flow through vibration, heat, or emerging radio MEMS techniques. However, as this device entails only passive mixing, only passive mixing techniques will be described. Passive mixing techniques are all about utilizing geometric features within the microchannels. There are many different types of geometric patterns, all tested for efficacy. The best categories based off data from the last five years is illustrated in the table below:

![Table](/assets/img/PMCTable.png)

In this project, to utilize materials more effectively, we were grouped up in pairs and designed each half of the project separately... The following is a message from the author of the other side of the ufluidic chip: 

> "On the right side of the device, there are two sections arranged in this snake pattern. Each snake pathway is 0.5 mm wide and 0.4 mm tall. This size ensures that the width-to-height ratio stays within the recommended range for successful micro resin printing. It also provides enough space for fluids to flow and for creating various pathways while still being suitable for the resolution of the resin printer. One section has narrower horizontal channels, which layer the fluidic channels and therefore increase the surface area for better mixing. The other section has small ramps called inclined mixers. These mixers help create chaotic movement in the fluid, effectively blending the two liquids together." ———— Luke Kim describing his mixing strategy

## Process for designing a microfluidic device

After reading up on the various ideas to consider while designing my microfluidic device, I decided the best course of action for the actual geometric shapes that confide to these rules is to see what is on the current market and why. Then, I found supporting publications to back my design choices further, and then finally used Computer Aided Design and Drafting (CADD) in Fusion 360 to recreate the designs I found. As I wanted my microfluidic device to be unique, I combined two well-supported mixing techniques to create something that could handle a larger range of Reynold's numbers. I will describe my geometric mixing strategies as A and B for simplification.  Strategy A involves use of a specific cascaded splitting and recombination (C-SAR) technique that was proven in *Mixing enhancement of a novel C-SAR microfluidic mixer* to have a 90% mixing efficiency in a wide range of Reynolds number (34.6-150); Strategy B involves a staggered herringbone mixer (SHM) technique proven in *Optimized Simulation and Validation of Particle Advection in Asymmetric Staggered Herringbone Type Micromixer*, *Quantitative characterization of micromixing simulation*, and *A simplified design of the staggered herringbone micromixer for practical applications* for a 45% mixing efficiency for 5 mixing groups in the SHM layout, this design includes over 65 of these mixing units!


> "We proposed a three-inlet planar mixing geometry, named cascaded splitting and recombination (C-SAR). The C-SAR mixer works in a wide range of Reynolds number (34.6–150) with 90% mixing efficiency; the mixing time is as short as sub-milliseconds and sample consumption is as low as a few microliters per second." ———— Mixing enhancement of a novel C-SAR microfluidic mixer

> "It has also been concluded from the simulations that helical flows are affected by the groove geometries, such as the groove depth, width, and inclination,8,10,11 and that the helical flows can occur even when the Reynolds number is low and the Peclet number is high.9,12, 14" ———— Quantitative characterization of micromixing simulation

> "Our test structure—the staggered herringbone micromixer—was integrated into a microfluidic sample preparation system developed for polymer-based photonic biosensor applications in the P3SENS project [30]." ———— Optimized Simulation and Validation of Particle Advection in Asymmetric Staggered Herringbone Type Micromixers
 
#### Strategy A images

Please see the image below for reference to Geometric Mixing Strategy A:

![Geometric Mixing Strategy Reference](/assets/img/1-s2.0-S026387621830042X-gr7.jpg)

Geometric Mixing Strategy is proven to yield a flow shown in the figure below: 

![Geometric Mixing Strategy Reference](/assets/img/Analysis_of_splitandflow_mixing.jpg)

The exact dimensions used in the study for Strategy A can be seen below:

![Dimensions for Microfluidic Device](/assets/img/Dimensions_for_MicrofluidicDevice.jpg)

#### Strategy B images

Please see the below image for the layout of Geometric Mixing Strategy B that was used in the study.

![B pattern i1](/assets/img/Herringbone_mixer_proof_of_mixing.png)

![B pattern i2](/assets/img/Image_Pattern_B_Overallparameters.png)

![B pattern i3](/assets/img/How_SHM_works.png)

![B pattern i4](/assets/img/Flow_of_SHM.jpg)

My Patterns:

Getting most of my design based off the design from the studies I would like to point out two differences --- for pattern A, there is a hole extrusion for the 100 by 50 micrometers triangle, the hole's vertices has a leangth of l3 in the diagram above. Making n executive decision I decided not to include this feature despite the rick of creating a less efficient micromixing process because of design constraint by the resin 3D printer. Fearing that a additional extrusion would make the print quality worse, I ommited the feature from my design. For pattern B, I did not change the pattern at all. Instead, I took what a complete group of mixing units used in the study was 4 groups of the two asymmetrical grooves using five grooves for each mixer unit --- I then used the left over space with one additional group and the beginning of my C-SAR pattern.



My Dimensions can be seen in the following pictures


The exact dimensions of my device can be seen in the figure below:

![Sam's Dimensions for ufluidic device](/assets/img/Parameters_ofufluidic.png)

![Sam's Dimensions for fluidic device](/assets/img/ParametersofufluidicTriangles.png)

![Sam's Dimensions for fluidic device PB](/assets/img/Dimensions_for_patternB.png)

# Creating the Microfluidic Device
### This process can be divided into 4 parts: 

1. Print and cure mold
2. Parylene device
3. Cast PDMS
4. Plasma bond glass slide

### 1. Printing and curing the mold

After designing the mold in Fusion 360, an SLA printer is used to fabricate the mold using resin. Preform (formlabs) is used to slice the STL file into a g-code, which is then sent to the Form 3 SLA 3D printer. The print is washed with isopropyl alcohol and placed in the Formlabs UV cure for one minute at 60 C to conclude this step. 

### 2. Parylene device

After the cure is done, a PDS 200 parylene deposition machine coats the print with parylene-C. In my case, my microfluidic device was not being used to foster cell cultures; if it were going to be used for cell cultures, this step would include a sterilization process using gamma irradiation. 

### 3. Casting the PDMS

The print is placed in a petri dish, and polydimethyl siloxane (PDMS) is mixed at a ratio of 10:1 from PDMS to curing agent and cured in at 80 degrees Celsius for 3 hours.  

### 4. Plasma bond glass slide

The PDMS cast is then molded to a glass coverslip using plasma cleaner. Then, it is sterilized in an autoclave for the finished product.  




 



