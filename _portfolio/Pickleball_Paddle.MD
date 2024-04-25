---
title: "Pickleball Paddle"
excerpt: "Rapid Prototyping. Optimized"
header:
  image: assets/img/GenDesign_Truck_picture.png
  teaser: assets/img/GenDesign_Truck_picture.png

gallery:
  - image_path: assets/img/Render1.png
   
---

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6ed1a85c4a517f74ba?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Why a Pickleball paddle

A pickleball paddle has many very similar features to hand tools and industrial manufacturing tools: a grip, handle, and end for a specific purpose. This can be akin to making a hand tool or tool for something specific. Intentionally, making a Pickleball paddle quickly would be a testament to my learnings as a 3D designer and to my Fusion 360 skills. 

The pickleball paddle starts with a design: modeling off of actual pickleball paddles: as pictured below.


> Moulded, 3D-printed components make it possible to implement geometries that are only possible with 3D printing in combination with the larger choice of available materials in injection moulding, as all iglidur materials can be selected.

———— igus “3D printing with several filaments


##  **Advantages, Challenges, and current Market**

Multimaterial printing enables a great degree of freedom in customization and complexity compared to other manufacturing processes. This is especially true for industries that require a high degree of customization, such as healthcare and aerospace, as well as spaces for tailored products, like the automotive industry and the ‘modding’ community. The additional complexity and degree of freedom come with a cost – a significant increase in production costs, assuming other manufacturing techniques can achieve the desired geometries. However, regardless of the complexity of the design, and in contrary to the high production costs — multi-material printing mostly maximizes materials usage. The way a printer works maximized materials usage by printing materials only where they are needed without the necessity of techniques to encapsulate, like conventional rivets, welding, screws, and other methods. Simply put, multi-material printing can maximize materials and drive down material costs. However, the maximization of materials is only enabled with a deep understanding of materials and 3D printing, without knowing what temperature and spacing are needed between materials to get good adhesion. Furthermore, without knowledge of the conditions for each material, the printing itself can create a mess and potentially a hazard. The combination of materials, if there is an understanding of how to combine them, opens up new avenues in the rapid prototyping and testing process — as multi-material printing can be used to speed up product development through the creation of multi-material prototypes quickly and effectively. However, a deep understanding of material science and the limits of the printing process can create a barrier that prevents multi-material printing in rapid prototyping. Finally, multi-material printing offers something most manufacturing technologies do not provide — functional on-spot prints. This assumes that the 3D printer is functioning. 3d printers are still developing in technology, so maintaining the printer remains a full-time job for many 3D printing enthusiasts (like myself with my dumb Cr-10S pro v2). To summarize, multi-material printing enables a high degree of freedom, material efficiency, innovative design testing, and ready-to-use products off the print bed; however, this process is costly, and an understanding of the material science, multi-material printing, and how to properly maintain the 3D printer limits the versatility of multi-material printing in the market. 

The advantages and challenges of multi-material printing are summarized in the table below…

| Advantages                            | Challenges|
|:----------------------------------|:---------|
| Customizability and complexity         | High costs       |
| Material Efficiency            |Material science problms|
| Innovative design testing            | Multi-material design complexities      |
| Functionality on spot         |  Process and maintenance |


By jumping through the hurdle that is a material science, multi-material design, and multi-material process knowledge gap I can be one step closer to potentially employing multi-material printing in my future endeavors. 

> “Tell me and I forget, teach me and I may remember, involve me and I learn” ————Benjamin Franklin.

## My project

The creation of ready-to-use multi-material pliers in Dr. David Florian’s Additive and Polymer-manufacturing Technologies class (CHBE 4200) involved being put into the unknown and learning multi-material printing, 3D designing with Fusion 360, and material science. The multi-material-pliers design is pictured at the top and included below. 


![Real life](/assets/img/mmpliers.jpg)

![Render1](/assets/img/Render1.png)

![Render3](/assets/img/Render3.png)

Below are two 3D models—model 1 is the design for the class multi-material printer to print, and model 2 is an alternative model for integrating two 3D prints using a standard FDM 3D printer. 

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6ea1a2850a617ed4a8?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e4c579479f1c5f0df?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>


Here is a short video showing the plier’s surprising grip strength and functionality. 

[![Testing the device](/assets/img/mmpliers.jpg)](https://photos.app.goo.gl/RwmULUuQmrHCZvi1A)


Design choices 

Although there is a wide range of nice multi-material extrusion combinations, I chose 95A TPU for my springlike part and standard PLA for the rest of the design. See the table below for the potential combinations. 

| Material 1                            | Material 2  
|:----------------------------------|:---------|
| PLA - Polylactic Acid       | TPU - Thermoplastic Polyurethane       |
| ABS - Acrylonitrile Butadiene Styrene  |Nylon - Polyamide| 
| PETG - Polyethylene Terephthalate Glycol(infused) | "Flex-PLA" - Polylactic acid with flexibility modifications  |
| PC - Polycarbonate       | TPE - Thermoplastic Elastomer   |
| PP - Polypropylene    | SEBS- Styrene-Ethylene-Butylene-Styrene   |
| ASA - Acrylonitrile Styrene Acrylate     |  TPU  |
| PLA         | PCL - Polycaprolactone  |
| PLA      | Silicone   |

It is important to note that silicone and PP can be difficult to print. PP (polypropylene) has low adhesion to surfaces and will warp, making this filament unsuitable for the weak-hearted. Silicone: I kind of threw it in there because printing with Nylon and Silicone sounds cool, silicone can be printed with direct ink writing techniques but is not ever used in mainstream FDM/FFF 3D printing. It could be cool to have two extruding components for inkjet and filament-type 3D printing to print both materials in one go (look up "Rize One 3D printer")

The assembly was quick and extremely easy, with proper clearance between parts to minimize high friction and accommodate volumetric expansion changes due to the nature of 3D printing. The spring component is a pretty simple linear 2-D extrusion of the 95 TPU so that it can bend inwards (See the video below to see the bending mechanism).

[![Testing the flexi](/assets/img/mmpliers.jpg)](https://photos.app.goo.gl/nqmw1DwtJFgedMY9A)

With every part of the TPU part parameterizable, I found only after 4 test prints a relative 'spring constant' and restorative force to my liking. The nature of the tool encapsulates the spring component entirely, with a 0.2 mm clearance between the TPU and the PLA. As the TPU spring mechanism extends pretty far into the handle, the encapsulation means not even a slight chance for the spring component to come out. However, as the multi-material printer was unavailable when I could print, I could not use model 1. Instead, I designed a casing to reach around the spring component. Making the spring casing come flush to the grip and enabling it to slide into place after, simply sliding the casing over made for a smooth and clean fit. The friction between the case and the slight flexibility of PLA made the case grip a nice fit. The model is fully parameterized, please see below for a list of imporrtant parameters: 

![Parameters](/assets/img/Parameters_of_Pliers.png)




