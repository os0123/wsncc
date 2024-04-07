 PRACTICAL NO -1
Study of Cloud Computing &
Architecture(Theory)

The term cloud refers to a network or the internet. It is a technology that uses remote
servers on the internet to store, manage, and access data online rather than local drives.
The data can be anything such as files, images, documents, audio, video, and more.
The characteristics of cloud computing are given below:
1) Agility-The cloud works in a distributed computing environment. It shares
resources among users and works very fast.
2) High availability and reliability-The availability of servers is high and more reliable
because the chances of infrastructure failure are minimum.
3) High Scalability-Cloud offers "on-demand" provisioning of resources on a large scale,
without having engineers for peak loads.
4) Multi-Sharing-With the help of cloud computing, multiple users and applications can
work more efficiently with cost reductions by sharing common infrastructure.
5) Device and Location Independence-Cloud computing enables the users to access
systems using a web browser regardless of their location or what device they use e.g. PC,
mobile phone, etc. As infrastructure is off-site (typically provided by a third-party) and
accessed via the Internet, users can connect from anywhere.
ARCHITECTURE:
Cloud computing architecture is a combination of service-oriented architecture and eventdriven architecture.
1. Client Infrastructure- It is a Front end component. It provides GUI (Graphical User
Interface) to interact with the cloud.
2. Application-The application may be any software or platform that a client wants to
access.
3. Service-A Cloud Services manages that which type of service you access according
to the client’s requirement.
Cloud computing offers the following three type of services:
i. Software as a Service (SaaS) cloud computing. It
provides a huge amount of storage capacity in the cloud to store and manage data.
6. Infrastructure-It provides services on the host level, application level, and network
level. Cloud infrastructure includes hardware and software components such as
servers, storage, network devices, virtualization software, and other storage resources
that are needed to support the cloud computing model.
7. Management-Management is used to manage components such as application, service,
runtime cloud, storage, infrastructure, and other security issues in the backend and
establish coordination between them.
8. Security-Security is an in-built back end component of cloud computing. It implements a
security mechanism in the back end.
9. Internet-The Internet is medium through which front end and back end can interact and
communicate with each other
ii. Platform as a Service (PaaS)
iii. iii. Infrastructure as a Service (IaaS)
4. Runtime Cloud-Runtime Cloud provides the execution and runtime environment to
the virtual machines.
5. Storage-Storage is one of the most important components


PRACTICAL NO -8

PRACTICAL 8:
• Company Background:
ShopSmart is an online retail company that specializes in selling a
wide range of consumer products, from electronics to fashion
apparel. With a rapidly growing customer base and fluctuating traffic
patterns, ShopSmart sought a scalable and reliable cloud computing
solution to support their e-commerce platform.
• Challenges:
Scalability: ShopSmart needed a flexible and scalable infrastructure
to handle spikes in website traffic during peak shopping seasons,
such as holidays and sales events.
Cost Management: With varying traffic patterns, ShopSmart aimed to
optimize their infrastructure costs by scaling resources up or down
based on demand, without over-provisioning.
High Availability: Ensuring high availability and uptime for their ecommerce platform was critical for ShopSmart to minimize downtime
and maintain customer satisfaction.
• Solution:
After evaluating various cloud computing options, ShopSmart
decided to leverage Amazon EC2 as their primary infrastructure
platform due to itsscalability, reliability, and cost-effectiveness.
• Implementation:
Scalable Infrastructure: ShopSmart deployed their e-commerce
application on Amazon EC2 instances, utilizing Auto Scaling to
automatically adjust the number of instances based on demand. This
allowed them to handle sudden traffic spikes and maintain consistent
performance without manual intervention.
Cost Optimization: To optimize costs, ShopSmart utilized Amazon EC2
Reserved Instances for predictable workloads and Spot Instances for
non-critical tasks with flexible pricing. They also leveraged Amazon
EC2 Fleet to manage a combination of On-Demand, Reserved, and
Spot Instancesto achieve costsavings while ensuring performance.
• Results:
Scalability: By leveraging Amazon EC2's Auto Scaling capabilities,
ShopSmart achieved seamlessscalability to accommodate
fluctuations in website traffic, ensuring optimal performance during
peak periods and reducing costs during off-peak times.
Cost Management: Through strategic use of Amazon EC2 pricing
models and instance types, ShopSmart optimized their infrastructure
costs while maintaining reliability and performance, resulting in
significant costsavings.
By adopting Amazon EC2, ShopSmart successfully addressed their
scalability, cost management, and high availability requirements,
allowing them to focus on growing their business and delivering
exceptional customer experiences. With Amazon EC2's flexibility,
reliability, and cost-effectiveness, ShopSmartremains well-equipped
to adapt to evolving market demands and continue their success in
the competitive e-commerce landscape.

FOSS

FOSS Cloud Implementation
FOSS-Cloud (FOSS-Cloud software and hardware) is an integrated and redundant
server infrastructure to provide virtualization- and cloud-services, Windows or
Linux based SaaS-, Terminal Server-, Virtual Desktop Infrastructure (VDI) or
virtual server environments.
FOSS-Cloud covers all aspects of an virtualized IT environment. FOSS-Cloud is a
pure Open Source solution, is licensed under EUPL and is available on the
sourceforge.net. FOSS-Cloud is the most advanced Open Source Cloud.
FOSS-Cloud is a cost-effective alternative to Citrix and VMware.
We can Build our own private- or public-Cloud!
Functionality
 VDI (Virtual Desktop Infrastructure)
 VSI (Virtual Server Infrastructure)
o Infrastructure as a Service (IaaS)
o Plattform as a Service (PaaS)
o Software as a Service (SaaS)
 Storage Cloud
Features
 Full integration into existing Windows and Linux environments
 Cloud for server- and desktop virtualization
 Powerfull virtualization for Windows and Linux 32/64bit
 Published Desktop
 Persistent virtual machines including session transfer to other devices
 Dynamic desktop with Golden Image to serve user groups
 Application streaming
 Published application support with RDS
 Video streaming (M-Jpeg)
 High resolution display
 Pools of network- and hardware-ressources or virtual machines
 VDI access through Windows and Linux, PXE boot and handhelds
 Bi-directional audio and video
 Smartcard authentication (including pass through)
 USB redirection
MSc Part II Semester III Cloud Computing Practical
Prof .Maya Nair
SIES ,Sion
 Web-based management console
 Multi-tenancy
Minimal Requirements
Your server should fulfill the following minimal requirements on each node:
 Dedicated hardware
 64-Bit Intel with VT-Technology
 4 Gigabyte memory
 320 Gigabyte disk space
 Network interface
The Demo System is realy just a playing environment and not for professional use.
It is very easy to install. The Demo System is made to get a feeling of the
possibilities of the FOSS-Cloud.
Limitation of Demo System
There is no access to the VMs from outside of FOSS-Cloud. That means, for
