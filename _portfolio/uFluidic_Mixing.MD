---
title: "Micro Fluidic Mixing Device"
excerpt: "Fluidic device which mixes two fluids at a micro scale using homogenous mixing."
header:
  image: "assets/img/uFluidic Device Render.png"
  teaser: "assets/img/uFluidic Device Render.png"
gallery:
  - image_path: "assets/img/uFluidic Device Render.png"
---

*Note by Author* - Unfortunately, my current computer, a desktop, cannot access the Fusion 360 file with its current version, until getting back to my dorm from New York after Spring Break or fixing of this apparent bug, renderings and the 3D model will, unfortunately, not be accessible.

# CAD Model

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e954320b5999ab871?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true" frameborder="0"></iframe>

# Testing the Device Video

[![Testing the device video](/assets/img/Image_for_umixing.png)](https://photos.app.goo.gl/9h1jWNM5ahvRbLjU8)

## Introduction to Microfluidic Devices

Microfluidic devices are a groundbreaking invention that has shifted the field of chemistry, biology, and diagnostics. These simple devices integrate one or several laboratory functions on a single chip smaller than the size of an iPod. A microfluidic device uses microchannels ranging from tens to hundreds of micrometers. These microchannels enable the precise control and manipulation of fluids at a microscale. The critical functionality of microfluidic devices is the ability to create homogeneous mixing of fluids. A homogeneous, laminar flow mixing process is essential for specific chemical reactions, biological assays, drug delivery systems, and biomedical diagnostic devices. For more details on the particular assays and diagnostics that can be carried out, see below.

>"Moreover, the 2-D format of this generalized digital architecture can be adapted via voltage-control software for highly-parallel operation, with reaction-based microdrop mixing, splitting, routing, etc. being carried out simultaneously at multiple on-chip locations. Such digital microfluidic implementations are now being applied to immunoassays (Alphonsus et al., 2010), DNA ligations (which are very sensitive to reagent economy) (Liu et al., 2008), and DNA pyrosequencing (Fair et al., 2007)." — "Digital microfluidics technologies for biomedical devices" in Microfluidic Devices for Biomedical Applications

![Proteins assessed using Microfluidic Devices](/assets/img/Common_Diagnostic_Proteins.png)

## The Challenge of Microfluidic Device Fabrication

However, these microfluidic devices have been very hard to manufacture until recent discoveries and industry developments. See an excerpt of an article below:

> “Fabrication of microfluidic devices by photolithography generally requires specialized training and access to a cleanroom. As an alternative, 3D printing enables cost-effective fabrication of microdevices with complex features that would be suitable for many biomedical applications.” — “Rapid prototyping of cell culture microdevices using parylene-coated 3D prints” in Lab on a Chip

Thankfully, with the careful expertise of Dr. David Florian of the Vanderbilt University Biomaterials Department, access to these culture-suitable 3D printing technology was made possible for me, a rising First-Year with little to no access to the more complex machinery and tools.

## Application Requiring Homogeneous Mixing

An important application where laminar mixing is pivotal is preparing reaction mixtures for PCR (Polymerase Chain Reaction) amplification and more specifically, a reverse transcriptase PCR (RT-PCR) was carried out within a the microfluidic system (

PCR is used to make many copies of small segments of DNA or RNA. Precise and uniform mixing of the reaction components (DNA template, primers, nucleotides, and high-temp resistant polymerase enzymes) is necessary for the amplification process. I have been fortunate enough to have had experience operating a PCR machine and analyzing results in my AP Bio class in high school and have simulated how the results would be processed using a coding language (R) in a bioinformatics class at Harvard.

## Challenges of Mixing in Microfluidics

In microfluidic devices, achieving effective mixing poses significant challenges due to maintaining the laminar flow that dominates at this scale. Unlike turbulent (or chaotic) flow, where the chaotic instabilities create the mixing, laminar flow uses diffusion between orderly layers of fluid to mix. As a result, in microfluidics, the goal of creating geometric shape-specific channels is the key to efficient and effective mixing. 

## Mixing Strategies in Microfluidics

There are primarily two types of mixing in microfluidics — Active and Passive mixing. Active mixing includes various ways to create flow through vibration, heat, or emerging radio MEMS techniques. However, as this device entails only passive mixing, only passive mixing techniques will be described. Passive mixing techniques are all about utilizing geometric features within the microchannels. There are many different types of geometric patterns, all tested for efficacy. The best categories based off data from the last five years is illustrated in the table below:

In this project, to utilize materials more effectively, we were grouped up in pairs and designed each half of the project separately... The following is a message from the author of the other side of the ufluidic chip: 

> "On the right side of the device, there are two sections arranged in this snake pattern. Each snake pathway is 0.5 mm wide and 0.4 mm tall. This size ensures that the width-to-height ratio stays within the recommended range for successful micro resin printing. It also provides enough space for fluids to flow and for creating various pathways while still being suitable for the resolution of the resin printer. One section has narrower horizontal channels, which layer the fluidic channels and therefore increase the surface area for better mixing. The other section has small ramps called inclined mixers. These mixers help create chaotic movement in the fluid, effectively blending the two liquids together." — Luke Kim describing his mixing strategy

![Table](/assets/img/PMCTable.png)

Please see the image below for reference to my first geometric mixing strategy:

![Geometric Mixing Strategy Reference](/assets/img/1-s2.0-S026387621830042X-gr7.jpg)

The end product would yield a similar flow as the figure below: 

![Geometric Mixing Strategy Reference](/assets/img/Analysis_of_splitandflow_mixing.jpg)

The exact dimensions used in the study can be seen below:

![Dimensions for Microfluidic Device](/assets/img/Dimensions_for_MicrofluidicDevice.jpg)

The exact dimensions of my device can be seen in the figure below:
![Sam's Dimensions for ufluidic device](/assets/img/Sams_Dimensions_for_uFluidics_nonlinerequationsnotincluded.png)

## Considerations for efficiency

In Fundamentals and Applications of Microfluidics by Nam Trung Nguyen, there are four categories of properties to consider when designing a microfluidic device... 

1. Kinematic properties such as linear and angular velocity, vorticity, acceleration, and strain rate;
2. Transport properties such as viscosity, thermal conductivity, and diffusivity;
3. Thermodynamic properties such as pressure, temperature, and density;
4. Miscellaneous properties includeing surface tension, vapor pressure, and surface accommodation
coefficients.

### To control these properties, the following must be controlled precisely,

# 1 Dimensions and Shapes

The efficiency of these designs depends on the dimensions, shapes, and space within the channels. For instance, in a zigzag microchannel, the width (w) and the step size (s) are crucial parameters. A narrower width and smaller step size increase the interface between the fluids, enhancing diffusion and, thus mixing efficiency. However, due to the conditions of the printer and the limitations of the tools available, I had to parameterize and change the scale of the split and recombine pattern utilized in my microfluidic pattern.

# Understanding flow: Reynolds numbers, Viscosity, and Flow rate

Viscosity is often described as the resistance to flow. Breaking apart what viscosity is beyond this baseline is crucial to developing a good microfluidic device. The units of viscosity are pascal-seconds. Pascal's units can be further simplified to a final result of Newton-second/square_meter or N*s/(m^2). A hidden figure can be discerned in viscosity's components: stress. Stress is defined as the amount of force over an area. Therefore, the units Newton/square_meter (N/m^2) can be translated into stress, and viscosity can be simplified as Stress * Time. Breaking this apart, it is apparent that viscosity is the amount of force over an area that needs to be overcome for a given amount of time to keep a fluid moving. If the quality of the print is not great, there will be imperfections and inefficiencies. 

An understanding of how viscosity affects the property of adhesion from the fluid to the walls is instrumental to creating a microfluidic device that is effective, timely, and cost-efficient. As such, a crucial factor in creating the microfluidic device is the quality of the material. 

> "
