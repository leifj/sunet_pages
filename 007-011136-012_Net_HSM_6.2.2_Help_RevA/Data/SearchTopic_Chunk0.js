define({"0":{i:0.00041942417417026,u:"../Content/Home_sa.htm",a:"SafeNet Network HSM 6.2.2 PRODUCT DOCUMENTATION What\u0027s New in This Release    HA Auto-Reconnect    HA Failover withstands member deactivation and reconnects on  activation of member partition    Network HSM gets OpenSSL Upgrade Release Notes It is strongly recommended that you read the customer ...",t:"Luna SA Product Documentation"},"1":{i:0.000454339155413914,u:"../Content/overview/FrontMatter.htm",a:"Product Version 6.2.2 Document Part Number 007-011136-012 Release Date 01 December 2016 Revision History Revision Date Reason A 01 December 2016 Initial release. Trademarks, Copyrights, and Third-Party Software Copyright 2001-2016 Gemalto. All rights reserved. Gemalto and the Gemalto logo are ...",t:"Document Information"},"2":{i:0.000451834666808986,u:"../Content/overview/preface/preface.htm",a:"This document provides an overview of SafeNet HSM suite of products. It contains the following chapters: SafeNet HSM Products - Overview   \"What\u0027s New in Current Release\" on page 1 SafeNet HSM Authentication Types Configurations SafeNet HSM Product Security Features General Security Guidance  This ...",t:"About the  Product Overview"},"3":{i:0.000454339155413914,u:"../Content/overview/preface/CRN.htm",a:"The customer release notes (CRN) provide important information about this release that is not included in the customer documentation. Read the CRN to fully understand the capabilities, limitations, and known issues for this release. You can view or download the latest version of the CRN for this ...",t:"Customer release notes"},"4":{i:0.000454339155413914,u:"../Content/overview/preface/Rebranding.htm",a:"In early 2015, Gemalto completed its acquisition of SafeNet, Inc. As part of the process of rationalizing the product portfolios between the two organizations, the Luna name has been removed from the SafeNet HSM product line, with the SafeNet name being retained. As a result, the product names for ...",t:"Gemalto Rebranding"},"5":{i:0.000454339155413914,u:"../Content/overview/preface/Audience.htm",a:"This document is intended for personnel responsible for maintaining your organization\u0027s security infrastructure. This includes SafeNet HSM users and security officers, key manager administrators, and network administrators. All products manufactured and distributed by Gemalto are designed to be ...",t:"Audience"},"6":{i:0.000454339155413914,u:"../Content/overview/preface/Conventions.htm",a:"This document uses standard conventions for describing the user interface and for alerting you to important information.  Notes Notes are used to alert you to important or helpful information. They use the following format: Take note. Contains important or helpful information. Cautions Cautions are ...",t:"Document conventions"},"7":{i:0.000454339155413914,u:"../Content/overview/preface/Support.htm",a:"Contact method   Contact Address Gemalto 4690 Millennium Drive Belcamp, Maryland  21017  \nUSA\n Phone Global  +1 410-931-7520  Australia  1800.020.183   China  (86) 10 8851 9191  France  0825 341000  Germany  01803 7246269 India  000.800.100.4290  Netherlands 0800.022.2996  New Zealand  0800.440.359  ...",t:"Support Contacts"},"8":{i:0.00041942417417026,u:"../Content/overview/product_line/product_line.htm",a:"The SafeNet HSM Product Line This chapter provides an overview of the SafeNet HSM product line. It contains the following sections: SafeNet HSM Products - Overview About SafeNet Network HSM About SafeNet PCIe HSM About SafeNet USB HSM About SafeNet Backup HSM",t:"The SafeNet HSM Product Line"},"9":{i:0.000525642239219112,u:"../Content/overview/product_line/luna_hsm_products.htm",a:"Gemalto SafeNet HSMs are hardware security modules designed to protect critical cryptographic keys and to accelerate sensitive cryptographic operations across a wide range of security applications. All SafeNet HSMs enable separation of roles by distinguishing between the HSM Security officer space ...",t:"SafeNet HSM Products - Overview"},"10":{i:0.000451834666808986,u:"../Content/overview/product_line/whats_new_in_release_6-2-2.htm",a:"The following are features or highlights of SafeNet HSM release 6.2.2. HA Auto-Reconnect The HA feature now includes the ability of the Client to reconnect and resume application operation, without intervention, after completely losing contact with the HA group of HSMs. Context is retained, and ...",t:"What\u0027s New in the Current Release"},"11":{i:0.000493891220154557,u:"../Content/overview/product_line/ownership_of_partitions.htm",a:"Beginning with firmware 6.22.0, SafeNet HSMs support two modes of ownership of an application partition in the HSM.  Who is in Charge? Per-Partition SO (PPSO)  The application partition is entirely owned and controlled by its own Security Officer (SO).  The HSM SO can create or delete application ...",t:"Ownership of Application Partitions"},"12":{i:0.000565194303959755,u:"../Content/overview/product_line/sa_about_luna_sa.htm",a:"The SafeNet SafeNet Network HSM  is an Ethernet-attached HSM (Hardware Security Module) Server \n designed to protect critical cryptographic keys and to accelerate sensitive \n cryptographic operations across a wide range of security applications. \n SafeNet Network HSM includes many features that ...",t:"About SafeNet Network HSM"},"13":{i:0.000565194303959755,u:"../Content/overview/product_line/about_luna_pci_gp.htm",a:"The SafeNet HSM Customer documentation uses \"SafeNet PCIe HSM\" whenever it refers to either of the performance versions - SafeNet PCIe HSM 1700 or SafeNet PCIe HSM 7000, without need to specifically identify one version. Those two versions are so-named because their tested performance at repetitive ...",t:"About SafeNet PCIe HSM"},"14":{i:0.000565194303959755,u:"../Content/overview/product_line/about_luna_g5.htm",a:"Your SafeNet USB HSM Cryptographic Module or HSM is shipped in a pre-initialized state, \n as part of the factory quality assurance process. However, in that state \n the HSM is not associated with Security Officer [SO] or User Authentication \n Data, and is not ready to receive or to create and store ...",t:"About SafeNet USB HSM"},"15":{i:0.000490727257975458,u:"../Content/overview/product_line/about_luna_backup_hsm.htm",a:"The SafeNet Backup HSM is physically similar to the SafeNet USB HSM, but is used exclusively to securely backup sensitive material from SafeNet HSMs, and to restore backed-up material to SafeNet HSMs. Some important characteristics are: The SafeNet Backup HSM can be connected locally, by USB cable, ...",t:"About SafeNet Backup HSM"},"16":{i:0.000454339155413914,u:"../Content/overview/authentication/authentication.htm",a:"This chapter describes the types of authentication available on SafeNet HSMs. Each SafeNet HSM comes in one of two authentication types – Password authenticated  or PED authenticated. The authentication type is configured at the factory and cannot be modified in the field.   See the following ...",t:"SafeNet HSM Authentication Types"},"17":{i:0.00130810468301001,u:"../Content/overview/authentication/about_password_authentication_sa.htm",a:"This section applies to versions of SafeNet HSM that control access via \n typed text-string authentication, or passwords, at all authentication \n levels. For SafeNet HSMs, this is sometimes referred to as \"FIPS 140-2 Level 2\" or simply \"FIPS Level 2\" or \"FIPS 2\" authentication.  If you  received \n a ...",t:"About Password Authentication"},"18":{i:0.00169824660134897,u:"../Content/overview/authentication/about_ped_authentication_sa.htm",a:"                                       This section applies to versions of SafeNet HSM that control access via \n Trusted Path Authentication - that is, HSMs that control access \n by means of the   PED and PED Keys, \n rather than by typed-in text strings. For SafeNet HSMs, this is sometimes referred ...",t:"About PED  Authentication"},"19":{i:0.000624684586750687,u:"../Content/overview/authentication/password-vs-ped_comparison.htm",a:"The following table outlines the key differences between PED and password authentication. Feature Password-authenticated HSM PED-authenticated HSM Ability to restrict access to cryptographic keys   knowledge of Partition Password is sufficient   for backup/restore, knowledge of partition domain ...",t:"Comparing Password and PED Authentication"},"20":{i:0.0013122101547477,u:"../Content/overview/authentication/about_remote_ped.htm",a:"When it is not convenient to be physically near the host computer that contains a SafeNet HSM, in order to connect a SafeNet PED and present required PED Keys, you can operate remotely and securely. The PED-Authenticated SafeNet HSM, and one-or-more orange PED Keys are imprinted with a Remote PED ...",t:"About Remote PED"},"21":{i:0.000454339155413914,u:"../Content/overview/configurations/configurations.htm",a:"This document discusses configurations in two ways: combinations of capabilities and characteristics that are mostly pre-determined by the model you order from the factory combinations of settings and options that you can modify to suit your situation and needs after receiving your HSM The ...",t:"Configurations"},"22":{i:0.000496662904503566,u:"../Content/overview/configurations/factory_configurations.htm",a:"SafeNet HSMs ship from the factory in various configurations that provide different levels of authentication, performance, and key management capabilities, as detailed below. These options are selected at the time of purchase and cannot be modified. A table listing the available or supported SafeNet ...",t:"Factory-Installed HSM Configurations"},"23":{i:0.000496662904503566,u:"../Content/overview/configurations/firmware_and_capability_updates.htm",a:"This section discusses installable modifications that many customers would make before placing their SafeNet HSM into service.  Firmware Updates The HSM firmware determines the operation and features of the HSM. Newer firmware versions are constantly in development, to implement fixes,  to add new ...",t:"Firmware Updates and Capability Upgrades"},"24":{i:0.000496662904503566,u:"../Content/overview/configurations/ha.htm",a:"SafeNet HSM products include availability and scalability capabilities for mission critical applications that require uninterrupted up-time.  These features allow the grouping of multiple devices into a single logical group – known as an HA (High Availability) group.  When an HA group is defined, ...",t:"High Availability (HA) Configurations"},"25":{i:0.000496662904503566,u:"../Content/overview/configurations/backup_restore.htm",a:"While some applications might deal in ephemeral objects (keys, certs, other) that are erased after using, in many SafeNet HSM applications, the keys and objects within the HSM and partition have value and are meant to persist. For such valuable data, any security regime requires that the data be ...",t:"Backup and Restore Configurations"},"26":{i:0.000496662904503566,u:"../Content/overview/configurations/htl.htm",a:"The traditional model had an application server acting as a client engaging an HSM server so that together they could provide secured application and crypto services to end-users. The application server (a computer in a server room, acting as a client to the HSM, and acting as a server to your ...",t:"Host Trust Link (HTL) Configurations"},"27":{i:0.00041942417417026,u:"../Content/overview/electrical.htm",a:"Each of Gemalto\u0027s SafeNet product lines has a descriptive data sheet that discloses the environmental and electrical requirements for the device, power consumption, etc. I addition, the SafeNet line of hardware products is tested to comply with the limits of a variety of international standards for ...",t:"Electrical and Standards"},"28":{i:0.000454339155413914,u:"../Content/overview/security_features/security_features.htm",a:"SafeNet HSM products include a number of features that enhance security and allow you to configure aspects of security to fit your situation.  Some are decided at purchase time (example: does your HSM require Password authentication, or PED authentication). Others are determined during setup and ...",t:"SafeNet HSM Product Security Features"},"29":{i:0.000515972587086893,u:"../Content/overview/security_features/roles_and_users.htm",a:"SafeNet HSM roles and authentications cover basic PKCS #11 roles, as well as some additional authentications to support SafeNet features.  Those roles and authentications have equivalents for Password-authenticated and for PED-authenticated SafeNet HSMs (with exceptions - see table).  Role or ...",t:"Roles and Users"},"30":{i:0.00421327638528019,u:"../Content/overview/security_features/hsm_general_authentication_model.htm",a:" This section discusses how objects are protected on the HSM, how authentication works, and how authentication credentials are protected.  The general authentication model applies to both Password Authenticated and PED Authenticated SafeNet HSMs. SafeNet HSMs do not keep any objects in the clear. ...",t:"HSM General Authentication Model"},"31":{i:0.000515972587086893,u:"../Content/overview/security_features/capabilities_and_policies_as_security_features.htm",a:"SafeNet  HSMs are built on one of our general-purpose HSM platforms (hardware plus firmware), and then are loaded with what we call \"personality\", to make them into specific types of HSM with specific abilities and constraints, to suit different markets and applications. The built-in attributes are ...",t:"About Capabilities and Polices"},"32":{i:0.00255862041130022,u:"../Content/overview/security_features/mofn_about.htm",a:"The MofN feature provides a means by which organizations employing \n cryptographic modules for sensitive operations can enforce multi-person \n control over access to the cryptographic module, or selected aspects of it.  The \n feature is available in all SafeNet HSMs configured to use SafeNet PED, ...",t:"About MofN"},"33":{i:0.000570349588390814,u:"../Content/overview/security_features/purple_keys_tamper_and_secure-transport.htm",a:" The HSM recognizes a number of tamper conditions (including over/under-temperature, physical interference, etc.), and allows you to choose how those are treated. The options range from simple reporting of an event in the HSM log, to temporarily (or even \"permanently\") disabling the HSM. In ...",t:"Tamper, Secure Transport, and Purple PED Keys "},"34":{i:0.000454339155413914,u:"../Content/overview/security_guidance/security_guidance.htm",a:" This chapter provides information about handling/storing/using your SafeNet HSM in secure fashion, and about ensuring that your network connections to the HSM and HSM host are as secure as possible. It contains the following sections: About Connection Security Security and Handling Considerations - ...",t:"General Security Guidance "},"35":{i:0.000913804320401683,u:"../Content/overview/security_guidance/about_connection_security.htm",a:"The following is not critical if your SafeNet systems reside inside secure locations, behind strong firewalls, and are managed only within/between such secured locations (via VPN for example).  However, if your application places the SafeNet appliance or HSM host in the \"DMZ\", please consider the ...",t:"About Connection Security"},"36":{i:0.000548155391392437,u:"../Content/overview/security_guidance/physical_security_guidance_lunasa.htm",a:"This section discusses general security and handling issues related to the SafeNet Network HSM appliance. Physical Security of the Appliance The HSM appliance is a commercial-grade secure appliance. This means that: It is provided with anti-tamper external features that make physical intrusion into ...",t:"Security and Handling Considerations - HSM Appliance"},"37":{i:0.000548155391392437,u:"../Content/overview/security_guidance/physical-security-guidance_lunag5-pci-e.htm",a:"This section chapter discusses general security and handling issues related to the SafeNet HSM and its host computer. Physical Security of the Cryptographic Module The SafeNet cryptographic module  is a multi-chip standalone module as defined by FIPS PUB 140–2 section 4.5.  The module is enclosed in ...",t:"Security and Handling Issues - SafeNet HSM"},"38":{i:0.000454339155413914,u:"../Content/install/FrontMatter.htm",a:"Product Version 6.2.2 Document Part Number 007-011136-012 Release Date 01 December 2016 Revision History Revision Date Reason A 01 December 2016 Initial release. Trademarks, Copyrights, and Third-Party Software Copyright 2001-2016 Gemalto. All rights reserved. Gemalto and the Gemalto logo are ...",t:"Document Information"},"39":{i:0.000451834666808986,u:"../Content/install/Preface/Preface.htm",a:"This document describes how to install the SafeNet HSM hardware and the SafeNet Client software. Refer to the following chapters to install the hardware and software components applicable to you: SafeNet HSM hardware installation SafeNet Network HSM Hardware Installation SafeNet PCIe HSM Hardware ...",t:"About the Installation Guide"},"40":{i:0.000779712427269487,u:"../Content/install/Preface/CRN.htm",a:"The customer release notes (CRN) provide important information about this release that is not included in the customer documentation. It is strongly recommended that you read the CRN to fully understand the capabilities, limitations, and known issues for this release. You can view or download the ...",t:"Customer Release Notes"},"41":{i:0.000454339155413914,u:"../Content/install/Preface/Rebranding.htm",a:"In early 2015, Gemalto completed its acquisition of SafeNet, Inc. As part of the process of rationalizing the product portfolios between the two organizations, the Luna name has been removed from the SafeNet HSM product line, with the SafeNet name being retained. As a result, the product names for ...",t:"Gemalto Rebranding"},"42":{i:0.000454339155413914,u:"../Content/install/Preface/Audience.htm",a:"This document is intended for personnel responsible for maintaining your organization\u0027s security infrastructure. This includes SafeNet HSM users and security officers, key manager administrators, and network administrators. All products manufactured and distributed by Gemalto are designed to be ...",t:"Audience"},"43":{i:0.000454339155413914,u:"../Content/install/Preface/Conventions.htm",a:"This document uses standard conventions for describing the user interface and for alerting you to important information.  Notes Notes are used to alert you to important or helpful information. They use the following format: Take note. Contains important or helpful information. Cautions Cautions are ...",t:"Document Conventions"},"44":{i:0.000454339155413914,u:"../Content/install/Preface/Support.htm",a:"Contact method   Contact Address Gemalto 4690 Millennium Drive Belcamp, Maryland  21017  \nUSA\n Phone Global  +1 410-931-7520  Australia  1800.020.183   China  (86) 10 8851 9191  France  0825 341000  Germany  01803 7246269 India  000.800.100.4290  Netherlands 0800.022.2996  New Zealand  0800.440.359  ...",t:"Support Contacts"},"45":{i:0.000454339155413914,u:"../Content/install/sa_hw_install/sa_hw_install.htm",a:"This chapter describes how to install and connect a SafeNet Network HSM. To ensure a successful installation, perform the following tasks in the order indicated: Ensure that you have all of the required components, as listed in  SafeNet Network HSM Required Items Install and connect the hardware, as ...",t:"SafeNet Network HSM Hardware Installation"},"46":{i:0.000612521000003525,u:"../Content/install/sa_hw_install/received_items_sa.htm",a:"Follow this checklist to verify that you have all of items required for the installation. Qty Item  1  SafeNet Network HSM Appliance   2 Power Supply Cord (one for each power supply; style to suit country for which you ordered)  ( * ) 1 Null-Modem Serial Cable   1 USB 2.0 to RS232 Serial Adapter   1 ...",t:"SafeNet Network HSM Required Items"},"47":{i:0.000612521000003525,u:"../Content/install/sa_hw_install/hardware_installation_lunasa.htm",a:"This section provides basic SafeNet Network HSM hardware installation instructions (mounting in a rack, connecting cables, etc.). The SafeNet Network HSM appliance comes with front brackets and side-rails and sliders for the rear brackets, packed separately in the carton. Installation Notes Any ...",t:"Installing the SafeNet Network HSM Hardware"},"48":{i:0.000454339155413914,u:"../Content/install/pci_hw_install/pci_hw_install.htm",a:"This chapter describes how to install and connect a SafeNet PCIe HSM. To ensure a successful installation, perform the following tasks in the order indicated: Ensure that you have all of the required components, as listed in  SafeNet PCIe HSM Required Items Install and connect the hardware, as ...",t:"SafeNet PCIe HSM Hardware Installation"},"49":{i:0.000612521000003525,u:"../Content/install/pci_hw_install/received_items_pci-e.htm",a:"This section provides a list of the components you should have received with your SafeNet PCIe HSM order. The list of items you should have received depends on whether you ordered a password-authenticated SafeNet PCIe HSM or a PED-authenticated SafeNet PCIe HSM, and whether you order included a ...",t:"SafeNet PCIe HSM Required Items"},"50":{i:0.00106526759623366,u:"../Content/install/pci_hw_install/hardware_install_lunapci-e.htm",a:"This section describes how to perform the following tasks: install the SafeNet PCIe HSM card into the host computer. See  Installing the SafeNet PCIe HSM Card Into the Host Computer . connect a local PED, if necessary. See  Connecting a Local PED connect a remote PED, if necessary. See  Connecting a ...",t:"Installing the SafeNet PCIe HSM Hardware"},"51":{i:0.000454339155413914,u:"../Content/install/g5_hw_install/g5_hw_install.htm",a:"This chapter describes how to install and connect a SafeNet USB HSM. To ensure a successful installation, perform the following tasks in the order indicated: Ensure that you have all of the required components, as listed in  SafeNet USB HSM Required Items Install the included removable battery, as ...",t:"SafeNet USB HSM Hardware Installation"},"52":{i:0.000548155391392437,u:"../Content/install/g5_hw_install/received_items_g5.htm",a:"This section provides a list of the components you should have received with your SafeNet USB HSM order. The list of items you should have received depends on whether you ordered a password-authenticated SafeNet USB HSM or a PED-authenticated SafeNet USB HSM, as described in the following sections: ...",t:"SafeNet USB HSM Required Items"},"53":{i:0.000548155391392437,u:"../Content/install/g5_hw_install/battery_install_g5_or_backup.htm",a:"The battery is shipped with the SafeNet USB HSM device, but is not installed. You must install the battery before beginning to configure and use the SafeNet USB HSM device. To install the battery in the SafeNet USB HSM or SafeNet Backup HSM Remove the front faceplate. The faceplate is held in place ...",t:"Installing the Battery in the SafeNet USB HSM or Backup HSM"},"54":{i:0.000548155391392437,u:"../Content/install/g5_hw_install/hardware_install_g5.htm",a:"This section describes how to mount the SafeNet USB HSM and connect the cables and peripheral devices. To install the SafeNet USB HSM hardware If you are using the SafeNet SafeNet USB HSM rack-mount shelf, mount the shelf in a suitable equipment rack. Use fasteners appropriate to your brand of ...",t:"Installing the SafeNet USB HSM Hardware"},"55":{i:0.000454339155413914,u:"../Content/install/ped_install/ped_install.htm",a:"SafeNet Remote PED Installation and Configuration This chapter describes how to install, connect, and configure a SafeNet Remote PED. It contains the following sections: Installing and Configuring a SafeNet Remote PED",t:"SafeNet Remote PED Installation and Configuration"},"56":{i:0.00201833232579593,u:"../Content/install/ped_install/remote-ped_qsg.htm",a:"The standard SafeNet PED is intended to connect directly to the HSM, and receives its power, as well as instructions and data via that connection. The Remote PED can act as a local PED, when needed, and connects as described above. When used in Remote PED mode, the SafeNet PED 2 connects to a ...",t:"Installing and Configuring a SafeNet Remote PED"},"57":{i:0.00107615648426499,u:"../Content/install/software/software.htm",a:" This chapter describes how to install the SafeNet HSM Client software. After installing the hardware, you need to install the SafeNet Client software, as follows, before you can begin configuring your SafeNet HSM(s): For SafeNet Network HSM, install the SafeNet Client on any computer that must ...",t:"SafeNet HSM Client Software Installation "},"58":{i:0.000928304683080169,u:"../Content/install/software/aix_install.htm",a:"These instructions assume that you have already acquired the SafeNet Client software, either on DVD or in the form of a downloaded .tar archive. Applicability to specific versions of AIX is summarized in the Customer Release Notes for the current release. Before \n installing a SafeNet system, you ...",t:"AIX SafeNet HSM Client Installation"},"59":{i:0.000744797446025833,u:"../Content/install/software/hp-ux_install.htm",a:"These instructions assume that you have already acquired the SafeNet HSM Client software, either on CD/DVD or in the form of a downloaded .tar archive. Applicability to specific versions of HP-UX is summarized in the Customer Release Notes for the current release. See  Customer Release Notes  for ...",t:"HP-UX SafeNet HSM Client Installation"},"60":{i:0.000533767922324427,u:"../Content/install/software/linux_install.htm",a:"  These instructions are tested for the Linux  versions listed in the Customer Release Notes.    These instructions assume that you have already acquired the SafeNet Client software, either on CD/DVD or in the form of a downloaded .tar archive. Applicability to specific versions of Linux is ...",t:"Linux SafeNet HSM Client Installation  "},"61":{i:0.000533767922324427,u:"../Content/install/software/solaris_install.htm",a:"These instructions assume that you have already acquired the SafeNet HSM client software, either on CD/DVD or in the form of a downloaded .tar archive. Applicability to specific versions of Solaris is summarized in the Customer Release Notes for the current release. Before \n installing a SafeNet ...",t:"Solaris SafeNet HSM Client Installation"},"62":{i:0.000621867194337079,u:"../Content/install/software/windows_install.htm",a:"Applicability to specific versions of Windows is summarized in the Customer Release Notes for this release. Before \n installing a SafeNet HSM\n system, you should confirm that the product you have received is in factory \n condition and has not been tampered with in transit.  Refer \n to the Startup ...",t:"Windows  SafeNet HSM Client Installation"},"63":{i:0.000621867194337079,u:"../Content/install/software/windows-2012_install_supplement.htm",a:"If you are installing the SafeNet HSM client on Windows 2012, some additional configuration is required to install the .NET framework that is required for the HTL Client Service. If your Windows Server 2012 instance is not properly configured with .NET Framework,  the following alert message appears ...",t:"Windows 2012 SafeNet HSM Client Supplemental Configuration"},"64":{i:0.000621867194337079,u:"../Content/install/software/scripted_unattended_install.htm",a:"The Windows software installation section describes interactive installation on Windows systems, using the graphical, interactive installer. This section describes how to perform unattended or scripted installations on Windows platforms.  Installing the SafeNet Client For All SafeNet Products From ...",t:"Scripted / Unattended Installation on Windows"},"65":{i:0.000507523446182911,u:"../Content/install/software/32-bit_utilities_in_win64bit_environment.htm",a:"Some customers have 32-bit applications that they use within 64-bit Windows. In order to use a SafeNet HSM in that environment along with 32-bit versions of our standard tools (lunacm, vtl, multitoken, etc.) follow these steps, below.      Perform a standard LunaClient software installation as ...",t:"Using 32-bit Utilities in Windows 64-bit Environment"},"66":{i:0.000443428223775272,u:"../Content/configuration/FrontMatter.htm",a:"Product Version 6.2.2 Document Part Number 007-011136-012 Release Date 01 December 2016 Revision History Revision Date Reason A 01 December 2016 Initial release. Trademarks, Copyrights, and Third-Party Software Copyright 2001-2016 Gemalto. All rights reserved. Gemalto and the Gemalto logo are ...",t:"Document Information"},"67":{i:0.000451834666808986,u:"../Content/configuration/preface/Preface.htm",a:"This document provides  step-by-step instructions for configuring your SafeNet HSM hardware, before you begin  using it with your application(s). The instructions are for a basic configuration. Additional configuration options are described in  Optional Configuration Tasks .  To ensure a ...",t:"About the Configuration Guide"},"68":{i:0.000443428223775272,u:"../Content/configuration/preface/CRN.htm",a:"The customer release notes (CRN) provide important information about this release that is not included in the customer documentation. Read the CRN to fully understand the capabilities, limitations, and known issues for this release. You can view or download the latest version of the CRN for this ...",t:"Customer release notes"},"69":{i:0.000443428223775272,u:"../Content/configuration/preface/Rebranding.htm",a:"In early 2015, Gemalto completed its acquisition of SafeNet, Inc. As part of the process of rationalizing the product portfolios between the two organizations, the Luna name has been removed from the SafeNet HSM product line, with the SafeNet name being retained. As a result, the product names for ...",t:"Gemalto Rebranding"},});