---
title: "Developing a Second Brain"
excerpt: "Creating a second brain using a SoC or Rasperry Pi mini PC, MongoDB, Obsidian and building from there"
header:
  image: "assets/img/Revolutionizing_Recycling_Logo.png"
  teaser: "assets/img/Revolutionizing_Recycling_Logo.png"
gallery:
  - url: "assets/img/Revolutionizing_Recycling_Logo.png"
    image_path: "assets/img/Revolutionizing_Recycling_Logo.png"
    alt: "Conceptual designs of a novel recycling machine and theoretical better recycling practices for Vanderbilt campus"
---

#Abstract

I will be developing my own second brain in two ways to prove that anyone can do this, as well as show my step-by-step process of setting it up so you can too 

I will be doing this project two ways to prove it can work: 

1. The low-budget way 
2. The 'has-an-actual-budget' way 

This is just to satisfy my curiosity and I want a Raspberry Pi anyway for future projects (I forsee it running off the low budget way well enough and will likely repurpose the Rasberry Pi for a different project) What blew my mind was that the entirety of Wikipedia can be fit on a 100 Gbs of memory, my hypothesis is to prove a powerful 'second brain' can be run on minimal expenses in today's modern tech world


The following is a rough procedure: 

1. Choose your SoC device:
For the low-budget 
> ### * Consider affordable options like Odroid C4, Libre board, or OrangePi fotr budget friendly as well as a cheap sd card and 3D print the case *
### * For the 'actual-budget' way I will be getting a Rasberry Pi 4 8 GB mini PC, Flirc Rasberry Pi 4 Case, and some >100 GB SSD*


2. Set up the SoC device:

* Install a lightweight Linux distribution suitable for your chosen device
Enable SSH for remote access
Configure Wi-Fi and set up dynamic DNS for remote access without a static IP, or ethernet if SoC has those capabilities

* Install MongoDB:
ex/ 
bash
sudo apt update && sudo apt upgrade -y
sudo apt install mongodb
sudo systemctl start mongodb
sudo systemctl enable mongodb

*Install Redis Stack (includes Redis Search):
ex/ 
bash
docker run -d --name redis-stack -p 6379:6379 redis/redis-stack:latest

3. Set up Obsidian on your local machine:
a. Download and install Obsidian
b. Create a new vault for your secondary brain
c. Install and configure the Obsidian Self-Sync plugin:
d. Install the plugin from the community plugins section
e. Configure it to sync with your MongoDB instance on the SoC device
f. Set up a simple API for MongoDB interaction:
g. Install Node.js and npm on your SoC device
h. Create a basic Express.js application for CRUD operations on MongoDB
i. Implement data ingestion:
j. If you have existing mind maps (e.g., from Mindjet MindManager): Export them to markdown-formatted ordered lists
k. Use a script to import these into your Obsidian vault
l. For web content ingestion:
m. Set up Puppeteer on your SoC device for web scraping
n. Create scripts to process and store scraped data in MongoDB
o. Configure Redis Search:
p. Create an index for your data:
text
FT.CREATE notes ON HASH PREFIX 1 note: SCHEMA title TEXT SORTABLE content TEXT

4. Implement a script to sync data between MongoDB and Redis for efficient searching
Enhance Obsidian setup:
a. Install the "Mind Map" community plugin for visual mind mapping
b. Set up templates for consistent note-taking
c. Implement a tagging system for better organization
d. Create automation scripts:
e. Set up cron jobs on your SoC device for:
f. Regular syncing between Obsidian and MongoDB
e. Updating Redis Search index
g. Web content scraping (if implemented)
h. Implement security measures:
    i. Set up a firewall on your SoC device
    ii. Use HTTPS for any web interfaces
    iii. Implement strong authentication for API access
i. Optional enhancements:
    i. Consider using MongoDB Atlas for vector storage to enable semantic search
    ii. Experiment with local language models like Qwen coder or Deepseek for AI-assisted tasks
j. Documentation:
-Create a detailed guide in your Obsidian vault documenting your setup process
-Include troubleshooting tips and maintenance procedures


By following these steps, you'll have a powerful, private, and flexible secondary brain system. This setup allows you to leverage the strengths of Obsidian for note-taking and mind mapping, while using MongoDB and Redis for efficient data storage and retrieval. The use of an affordable SoC device keeps the costs down while providing a dedicated server for your personal knowledge management system.