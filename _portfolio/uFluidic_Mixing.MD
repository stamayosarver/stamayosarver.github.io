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

## Introduction to Microfluidic Devices

Microfluidic devices are a groundbreaking invention that has shifted the field of chemistry, biology, and diagnostics. These simple devices integrate one or several laboratory functions on a single chip smaller than the size of an iPod. A microfluidic device uses microchannels ranging from tens to hundreds of micrometers. These microchannels enable the precise control and manipulation of fluids at a microscale. The critical functionality of microfluidic devices is the ability to create homogeneous mixing of fluids. A homogeneous, laminar flow mixing process is essential for specific chemical reactions, biological assays, drug delivery systems, and biomedical diagnostic devices.

## The Challenge of Microfluidic Device Fabrication

However, these microfluidic devices have been very hard to manufacture until recent discoveries and industry developments. See an excerpt of an article below:

> “Fabrication of microfluidic devices by photolithography generally requires specialized training and access to a cleanroom. As an alternative, 3D printing enables cost-effective fabrication of microdevices with complex features that would be suitable for many biomedical applications.” — “Rapid prototyping of cell culture microdevices using parylene-coated 3D prints” in Lab on a Chip

Thankfully, with the careful expertise of Dr. David Florian of the Vanderbilt University Biomaterials Department, access to these culture-suitable 3D printing technology was made possible for me, a rising First-Year with little to no access to the more complex machinery and tools.

## Application Requiring Homogeneous Mixing

An important application where laminar mixing is pivotal is preparing reaction mixtures for PCR (Polymerase Chain Reaction) amplification. PCR is used to make many copies of small segments of DNA or RNA. Precise and uniform mixing of the reaction components (DNA template, primers, nucleotides, and high-temp resistant polymerase enzymes) is necessary for the amplification process.

## Challenges of Mixing in Microfluidics

In microfluidic devices, achieving effective mixing poses significant challenges due to maintaining the laminar flow that dominates at this scale. Unlike turbulent (or chaotic) flow, where the chaotic instabilities create the mixing, laminar flow uses diffusion between orderly layers of fluid to mix. As a result, in microfluidics, the goal of creating geometric shape-specific channels is the key to efficient and effective mixing.

## Mixing Strategies in Microfluidics

There are primarily two types of mixing in microfluidics — Active and Passive mixing. As this device entails only passive mixing, only passive mixing techniques will be described. Passive mixing techniques are all about utilizing geometric features within the microchannels. There are many different types of geometric patterns, all tested for efficacy. The best categories can be described using the table below:
![Table 2 from Microfluidic Mixing: A Review](/assets/img/Table - PMC.pdf)

Please see the image below for reference to my first geometric mixing strategy:

![Geometric Mixing Strategy Reference](/assets/img/1-s2.0-S026387621830042X-gr7.jpg)

The exact dimensions used in the study can be seen below:

![Dimensions for Microfluidic Device](/assets/img/Dimensions_for_MicrofluidicDevice.jpg)


The efficiency of these designs depends on the dimensions and shapes of the channels. For instance, in a zigzag microchannel, the width (w) and the step size (s) are crucial parameters. A narrower width and smaller step size increase the interface between the fluids, enhancing diffusion and thus mixing efficiency.
