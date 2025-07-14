---
title: "Project SLINKY — Repurposed PC Kubernetes Cluster"
excerpt: "Transforming surplus lab PCs into a hybrid on-prem Kubernetes cluster with Longhorn storage, SLINKY HPC scheduling, and Google Cloud monitoring."
header:
  image: assets/img/SLINKY_Logo.png
  teaser: assets/img/SLINKY_Logo.png
---

> "Why buy new when the scrap pile can scale to the cloud?"

![Kubernetes Logo](/assets/img/Kubernetes%20LOGO.png)
![SLURM Logo](/assets/img/SLURM_LOGO.png)

## Project Overview
Project **SLINKY** ("SLURM-on-k8s") sets out to breathe new life into a stack of retired lab desktops. The goal is to assemble a cost-neutral, on-premise Kubernetes cluster that can:

1. Host traditional containerised workloads.
2. Provide an HPC layer via **SLINKY** (SLURM on Kubernetes).
3. Expose unified block storage through **Longhorn**.
4. Report health and burst tasks to the cloud by registering with **Google Cloud Anthos / GDC**.

All of this is done with **MicroK8s** for a minimal footprint and friction-free node onboarding.

---

## Hardware Re-Use & Node Roles
After scavenging RAM, disks and GPUs from eight donor machines, the parts were consolidated into two flagship nodes and a handful of future compute boxes:

| Role | Hostname | CPU | RAM | Local Storage |
|------|----------|-----|-----|---------------|
| **Control Plane** | `k8scon` | 2 × Intel Xeon E5-2670 | **80 GiB** (4×16 GiB + 4×4 GiB) | 2 TB HDD |
| **High-RAM / Storage** | `storage-0` | 2 × Intel Xeon E5-2680 | **128 GiB** (8×16 GiB) | 4.5 TB HDD + SSD cache |
| Future GPU Node(s) | `gpu-##` | TBD | 32–64 GiB | 1 TB SSD |
| Future Compute Node(s) | `compute-##` | TBD | 16–32 GiB | 500 GB HDD |

### Network Map
```
10.8.129.112  k8scon        # control plane (FluLupalooza sticker)
10.8.128.160  storage-0     # high-RAM / storage node
```  
All nodes share the lab LAN; a 10 GbE switch will later connect storage-heavy machines.

---

## Five-Step Build Plan
1. **Re-organise Hardware**  
   • Pool RAM, GPUs and disks so each node has a clear purpose (GPU, high-RAM, or storage).  
   • Label everything physically and in BIOS.

2. **Install Ubuntu 22.04 LTS & MicroK8s**  
   • Keep a bootable USB image for rapid expansion.  
   • Base install commands:
   ```bash
   sudo snap install microk8s --classic --channel=1.33/stable
   sudo usermod -aG microk8s $USER && newgrp microk8s
   microk8s status --wait-ready
   ```

3. **Deploy Longhorn for Persistent Storage**  
   • Simple UI, replicated volumes, snapshotting.  
   • Taints/tolerations ensure only storage nodes run Longhorn components.

4. **Layer on SLINKY (SLURM on K8s)**  
   • Provides batch/HPC scheduler familiar to researchers.  
   • Workloads land on the best-fit nodes via Kubernetes labels (`gpu=true`, `highram=true`, `storage=true`).

5. **Register with Google Cloud (Anthos / GDC)**  
   • Centralised dashboards, alerts, and the option to burst compute to GKE if demand spikes.  
   • Secure tunnel keeps on-prem cluster private while feeding metrics to the cloud.

---

## Current Progress
- ✅ **Hardware audit & RAM consolidation** complete.  
- ✅ Control plane and storage node installed with Ubuntu 22.04 & SSH enabled.  
- ✅ MicroK8s initialised; nodes joined:
  ```bash
  # on control plane
  microk8s add-node
  # on new node
  microk8s join <CONTROL_PLANE_IP>:25000/<token>
  microk8s kubectl get nodes
  ```
- 🔄 **Longhorn deployment** in progress, once I get the ahead for three nodes I will initiate Longhorn and look into Rancher as a GUI
- ⏳ SLINKY helm charts queued after storage proves stable.

### Helper Snippets
```bash
# Set hostname on fresh node
sudo hostnamectl set-hostname <device-name>

# Update /etc/hosts across cluster
10.8.129.112 k8scon
10.8.128.160 storage-0
# ...add new nodes here
```

---

## Next Steps
1. Finalise Longhorn; benchmark network throughput (>1 GB/s ideal).  
2. Install SLINKY; validate job submission and GPU affinity.  
3. Register cluster with Google Cloud Anthos; configure logging & alerting.  
4. Document physical layout (photos) & rack wiring.  
5. Onboard additional GPU and compute nodes via the USB installer.

---

## Resources & Inspiration
- **Learn Fast Make Things** — "Repurpose Old PCs into a K8s Cluster" (YouTube).  
- **Techno Tim** — Longhorn storage walkthrough (YouTube).  
- **MicroK8s Docs** — <https://microk8s.io>.  
- **Longhorn Docs** — <https://longhorn.io>.  
- **Google Cloud Anthos** — <https://cloud.google.com/anthos>.

---

*Last updated: {{ "now" | date: "%B %-d, %Y" }}*
