define({"206":{i:0.000729689658939837,u:"../Content/administration/PED_Auth/ped_utils/pedserver_mode.htm",a:"pedserver mode Specifies the mode that PEDserver will be executed in. Syntax pedserver mode config connect disconnect show start stop",t:"pedserver mode"},"207":{i:0.00109666819685593,u:"../Content/administration/PED_Auth/ped_utils/pedserver_mode_config.htm",a:"Shows and modifies internal PEDserver configuration file settings. Syntax pedserver mode config -name \u003cregistered appliance name\u003e -show -set [-port \u003cserver port\u003e] [-set][-configfile \u003cfilename\u003e] [-admin \u003cadmin port number\u003e] [-eserverport \u003c0 or 1\u003e] [-eadmin \u003c0 or 1\u003e] [-idletimeout \u003cint\u003e] ...",t:"pedserver mode config"},"208":{i:0.000474090771450963,u:"../Content/administration/PED_Auth/ped_utils/pedserver_mode_connect.htm",a:" Connects to the appliance by retrieving information (IP address, port, PEDserver certificate) from the PEDserver configuration file. If the running mode is legacy, an error is returned. pedserver mode connect is not a valid command for legacy connections. The connect command will try connecting to ...",t:"pedserver mode connect"},"209":{i:0.000474090771450963,u:"../Content/administration/PED_Auth/ped_utils/pedserver_mode_disconnect.htm",a:"Disconnects PEDserver from the appliance. If the running mode is legacy, an error is returned. pedserver mode disconnect is not a valid command for legacy connections. Termination of the connection may take a few minutes. Syntax pedserver mode disconnect -name \u003cregistered appliance name\u003e ...",t:"pedserver mode disconnect"},"210":{i:0.000474090771450963,u:"../Content/administration/PED_Auth/ped_utils/pedserver_mode_show.htm",a:"Queries if PEDserver is currently running, and gets details about PEDserver. Syntax pedserver mode show [-name \u003cregistered appliance name\u003e] [-configfile \u003cfilename\u003e] [-logfilename \u003cfilename\u003e] [-loginfo \u003c0 or 1\u003e] [-logwarning \u003c0 or 1\u003e] [-logerror \u003c0 or 1\u003e] [-logtrace \u003c0 or 1\u003e] [-maxlogfilesize \u003csize\u003e] ...",t:"pedserver mode show"},"211":{i:0.000474090771450963,u:"../Content/administration/PED_Auth/ped_utils/pedserver_mode_start.htm",a:"Starts up PEDserver. Syntax pedserver mode start [-name \u003cregistered appliance name\u003e] [-ip \u003cserver_IP\u003e] [-port \u003cserver port\u003e] [-configfile \u003cfilename\u003e] [-admin \u003cadmin port number\u003e] [-eserverport \u003c0 or 1\u003e] [-eadmin \u003c0 or 1\u003e] [-idletimeout \u003cint\u003e] [-socketreadtimeout \u003cint\u003e] [-socketwritetimeout \u003cint\u003e] ...",t:"pedserver mode start"},"212":{i:0.000474090771450963,u:"../Content/administration/PED_Auth/ped_utils/pedserver_mode_stop.htm",a:"Stops PEDserver. Syntax pedserver mode stop [-name \u003cregistered appliance name\u003e] [-configfile \u003cfilename\u003e] [-socketwritetimeout \u003cint\u003e] [-internalshutdowntimeout \u003cint\u003e] [-bgprocessstartuptimeout \u003cint\u003e] [-bgprocessshutdowntimeout \u003cint\u003e] [-logfilename \u003cfilename\u003e] [-loginfo \u003c0 or 1\u003e] [-logwarning \u003c0 or ...",t:"pedserver mode stop"},"213":{i:0.000729689658939837,u:"../Content/administration/PED_Auth/ped_utils/pedserver_regen.htm",a:" Regenerates the client certificate. This command is available in server-initiated (peer-to-peer) mode only.  Existing links (PEDserver, NTLS or STC) will not be affected until they are terminated. Afterwards, the user is required to re-register the client certificate to NTLS and PEDserver. The ...",t:"pedserver regen"},"214":{i:0.000619000777227043,u:"../Content/administration/performance/performance_sa.htm",a:"An HSM administrator might find it helpful to know how busy the HSM is and at what percentage of its capacity it has been running.  The HSM Information Monitor is a use counter that provides an indication of momentary and cumulative resource usage on the HSM, in the form of a percentage. The HSM ...",t:"Performance Monitoring"},"215":{i:0.000383521485619445,u:"../Content/administration/security_context/security_effects_of_administrative_actions.htm",a:"Actions that you take, in the course of administering your SafeNet Luna HSM, can have effects, including destruction, on the roles, the spaces, and the contents of your HSM and its application partition(s). It is important to be aware of such consequences before taking action. Overt Security Actions ...",t:"Security Effects of Administrative Actions"},"216":{i:0.00442492122536181,u:"../Content/administration/secure_transport_mode/secure_transport_mode.htm",a:"SafeNet HSM 7 units are shipped from the factory in Secure Transport Mode (STM). The purpose of STM is to provide a logical check on the HSM firmware and critical security parameters (such as configuration, keys, policies, roles, etc.) so that the authorized recipient can determine if these have ...",t:"Secure Transport Mode"},"217":{i:0.00202789785663509,u:"../Content/administration/stc/stc.htm",a:"This chapter describes Secure Trusted Channel (STC). It contains the following sections: STC Overview Enabling or Disabling STC on the HSM Enabling or Disabling STC on a Partition Establishing and Configuring the STC Admin Channel on a SafeNet Luna Network HSM Appliance Using a Hard Token to Store ...",t:"Secure Trusted Channel (STC)"},"218":{i:0.000689640802467943,u:"../Content/administration/stc/overview.htm",a:"STC protects your HSM/client communications using endpoint and message authentication, verification, and encryption. With STC, HSM/client message integrity is ensured, even when those messages are sent over public or otherwise unsecured networks. You can use STC links to confidently deploy ...",t:"STC Overview"},"219":{i:0.000885187839899869,u:"../Content/administration/stc/enabling_hsm.htm",a:"The STC functionality is enabled or disabled by setting HSM policy 39: Allow Secure Trusted Channel (see  HSM Capabilities and Policies ). The following instructions are for the HSM SO.  Enabling HSM policy 39: Allow Secure Trusted Channel allows the appliance to use STC or NTLS links between the ...",t:"Enabling or Disabling STC on the HSM"},"220":{i:0.000807014611109401,u:"../Content/administration/stc/enabling_partition.htm",a:"If STC is enabled on the HSM, you can enable STC on the specific partitions on which you want to use STC instead of NTLS. This allows you to use both NTLS and STC links on different partitions on the same HSM. The following instructions are for the Partition SO.  Enabling STC on a Partition Before ...",t:"Enabling or Disabling STC on a Partition"},"221":{i:0.00132109324158556,u:"../Content/administration/stc/sa_local_stc.htm",a:"STC allows you to protect all communications to the HSM, including those that originate on the SafeNet Luna Network HSM appliance, by enabling the STC admin channel. The STC admin channel is local to the appliance, and is used to transmit data between the local services and applications running on ...",t:"Establishing and Configuring the STC Admin Channel on a SafeNet Luna Network HSM Appliance"},"222":{i:0.00702877583931959,u:"../Content/administration/stc/token.htm",a:"By default, STC uses a software token to store the client identity.  When using a software token, the client’s private key is intentionally portable.  That is, it can be moved or copied to another host and used – so any client that possesses this identity pair is considered the authentic client. ...",t:"Using a Hard Token to Store the STC Client Identity"},"223":{i:0.00181259075342462,u:"../Content/administration/stc/stc_settings.htm",a:"STC provides several configurable options that define the network settings for an STC link, and the security settings for the messages transmitted over the link. Although default values are provided that provide the optimal balance between security and performance, you can override the defaults, if ...",t:"Configuring the Network and Security Settings for an STC Link"},"224":{i:0.000543090041845432,u:"../Content/administration/stc/identities.htm",a:"Each SafeNet Luna HSM client and partition, (including the HSM SO partition and the SafeNet Luna Network HSM operating system, for the admin channel link) that serves as an STC endpoint has a unique identity, defined by a 2048-bit  RSA asymmetric public/private key pair. The STC identity key pair is ...",t:"Managing STC Tokens and Identities"},"225":{i:0.000847578136379408,u:"../Content/administration/stc/backup_restore_stc.htm",a:"The HSM partitions contain the registered client identities used to validate STC clients. Since these are not crypto objects, they are not backed up as part of a normal partition backup. When you perform a destructive operation that results in the HSM being zeroized, such as a login failure, ...",t:"Restoring STC After HSM Zeroization"},"226":{i:0.001074647718507,u:"../Content/administration/stc/troubleshooting.htm",a:"Restoring STC After HSM Zeroization The STC client identities are not backed up with the HSM configuration and you must re-register them manually after HSM zeroization. See  Restoring STC After HSM Zeroization  for an outline of this process.  Restoring STC After Regenerating the HSM Server ...",t:"Troubleshooting"},"227":{i:0.00351439067616032,u:"../Content/administration/slot/slot_numbering.htm",a:"Administrative partitions and application partitions are identified as PKCS#11 cryptographic slots in SafeNet utilities, such as LunaCM and multitoken, and for applications that use the SafeNet library.  Order of Occurrence for Different SafeNet Luna HSMs A host computer with SafeNet Luna HSM Client ...",t:"Slot Numbering and Behavior"},"228":{i:0.00065588631528815,u:"../Content/administration/snmp/snmp.htm",a:"This chapter describes Simple Network Management Protocol (SNMP v3) support for remote monitoring of conditions on a local HSM that might require administrative attention. It contains the following sections: Overview and Installation The SafeNet Chrysalis-UTSP MIB The SafeNet Luna HSM MIB The ...",t:"SNMP Monitoring"},"229":{i:0.000463633277126148,u:"../Content/administration/snmp/overview_install.htm",a:"This section provides an overview of the SNMP implementation and describes how to install the SNMP subagent. MIB Gemalto provides the following MIBs (management information base) in the SafeNet Luna HSM Client installation package: Copy all MIBs in \u003cLuna_HSM_Client_install_dir\u003e/snmp to the MIB ...",t:"Overview and Installation"},"230":{i:0.000463633277126148,u:"../Content/administration/snmp/snmp_safenet-chrysalis-UTSP-mib.htm",a:"The Chrysalis MIB is the SafeNet MIB for all SafeNet Luna HSM products - the Chrysalis \n name is retained for historical continuity. To illustrate accessing data, the command \"snmpwalk -v 3 -u admin -l authPriv \n -a SHA1 -A 12345678 -x AES -X 87654321 myLuna19 private\" produced \n this output: ...",t:"The SafeNet Chrysalis-UTSP MIB"},"231":{i:0.000857724990354956,u:"../Content/administration/snmp/snmp_safenet-hsm-mib.htm",a:"The SAFENET-HSM-MIB defines HSM status information and HSM Partition information that can be viewed via SNMP.   To access tables, use a command like: snmptable  -a SHA  -A snmppass  -u snmpuser -x AES -X snmppass -l authPriv -v 3 192.20.11.59   SAFENET-HSM-MIB::hsmTable   The information is defined ...",t:"The SafeNet Luna HSM MIB"},"232":{i:0.000463633277126148,u:"../Content/administration/snmp/snmp_safenet-appliance-mib.htm",a:"The SAFENET-APPLIANCE-MIB defines appliance status information  that can be viewed via SNMP. Currently, that consists of the appliance software version number.  The appliance Table    This table provides a list of all the non-HSM host-specific information on the appliance. For information about the ...",t:"The SafeNet Appliance MIB"},"233":{i:0.000463633277126148,u:"../Content/administration/snmp/snmp_operation_and_limitations.htm",a:"This page applies only to SafeNet Luna Network HSM which, as a closed system, has its own agent. This contrasts with other SafeNet Luna HSMs that are installed inside a host computer, or USB-connected to a host, and therefore require you to provide an SNMP agent and configure for use with our ...",t:"SNMP Operation and Limitations with SafeNet Luna Network HSM"},"234":{i:0.000463633277126148,u:"../Content/administration/snmp/faq.htm",a:"This section provides additional information by answering questions that are frequently asked by our customers. We want to use SNMP to remotely monitor and manage our installation – why do you not support such standard SNMP traps as CPU and Memory exhaustion? Those sorts of traps were specifically ...",t:"Frequently Asked Questions"},"235":{i:0.00421848205110274,u:"../Content/administration/tamper/tamper.htm",a:"SafeNet Luna Network HSMs detect hardware anomalies (such as card over-temperature) and physical events (such as card removal or chassis intrusion), and register them as tamper events. A tamper event is considered a security breach, and effectively locks the HSM.  If Policy 48: Do Controlled Tamper ...",t:"Tamper Events"},"236":{i:0.000383521485619445,u:"../Content/administration/error_codes_troubleshooting/error_codes_troubleshooting.htm",a:"Troubleshooting This chapter lists the HSM error codes and offers troubleshooting tips for some common issues. It contains the following sections: General Troubleshooting Tips System Operational and Error Messages Keycard and Token Return Codes Library Codes Vendor-Defined Return Codes",t:"Troubleshooting"},"237":{i:0.000435914232265688,u:"../Content/administration/error_codes_troubleshooting/instant_troubleshooting.htm",a:"Here are just a few quick things to check if you are experiencing problems: Ensure that the date and time are set correctly.  Check that NTLS is bound to the correct Ethernet \nport. It must be bound to a port if it is to work, and that \nport must be the one that is connected for NTLS.  Ensure that ...",t:"General Troubleshooting Tips"},"238":{i:0.000435914232265688,u:"../Content/administration/error_codes_troubleshooting/system_messages.htm",a:"Extra slots that say \"token not present\"?  This happens for two reasons: PKCS#11 originated in a world of software cryptography, which only later acknowledged the existence of Hardware Security Modules, so initially it did not have the concept of physically removable crypto slots.  PKCS#11 requires ...",t:"System Operational and Error Messages"},"239":{i:0.000435914232265688,u:"../Content/administration/error_codes_troubleshooting/token-keycard_return-codes.htm",a:"The following table summarizes HSM error codes (last updated for firmware 7.0.1): * This error (CKR_TEMPLATE_INCONSISTENT) might be encountered when using CKDemo in a new client with firmware older than version 6.22.0. Try CKDemo option 98, sub-option 16. If it is set to \"enhanced roles\", try ...",t:"Keycard and Token Return Codes"},"240":{i:0.000944938363926067,u:"../Content/administration/error_codes_troubleshooting/library_codes.htm",a:"Library Codes",t:"Library Codes"},"241":{i:0.000435914232265688,u:"../Content/administration/error_codes_troubleshooting/vendor_return_codes.htm",a:"Vendor-Defined Return Codes",t:"Vendor-Defined Return Codes"},"242":{i:0.000383521485619445,u:"../Content/administration/upgrade/upgrade.htm",a:"Gemalto releases periodic updates to the SafeNet Luna Network HSM appliance software and the HSM  firmware, as well as updated versions of the SafeNet Luna HSM Client software. If you have recently purchased a new SafeNet Luna Network HSM and your organization requires FIPS certification, you can ...",t:"Updates and Upgrades"},"243":{i:0.000411464548778631,u:"../Content/administration/upgrade/paths.htm",a:"The following table provides tested paths for updating to the current software/firmware versions. FIPS-Certification Firmware Candidates Gemalto has three (3) versions of the SafeNet Luna Network HSM firmware currently undergoing FIPS certification review. The following firmware versions are all ...",t:"Valid Update Paths"},"244":{i:0.000411464548778631,u:"../Content/administration/upgrade/version_dependencies.htm",a:"Some of the SafeNet Luna Network HSM functionality described in the documentation has been introduced in updates since the initial product release. For your own reasons, you may wish to apply some aspects of a product update and not others. For example: you may choose to update  appliance or  client ...",t:"Version Dependencies by Feature"},"245":{i:0.000411464548778631,u:"../Content/administration/upgrade/HSM_client.htm",a:"To update the SafeNet Luna HSM Client software, first uninstall any previous version of the Client. Then, run the new installer the same way you performed the original installation (refer to  SafeNet Luna HSM Client Software Installation ). On Windows systems, the client uninstaller removes ...",t:"Updating the SafeNet Luna HSM Client"},"246":{i:0.000528047084607248,u:"../Content/administration/upgrade/appliance_sw.htm",a:"The SafeNet Luna Network HSM appliance software consists of the LunaSH command-line shell and its underlying software components. Use the following procedure to install the SafeNet Luna Network HSM 7.2 appliance software update.  The update package includes an image of the latest HSM firmware, which ...",t:"Updating the SafeNet Luna Network HSM Appliance Software"},"247":{i:0.000635886405402499,u:"../Content/administration/upgrade/network_hsm_fw.htm",a:"When you install a software appliance update, the latest firmware version is saved on the appliance as an optional update, replacing any firmware version previously held in reserve. If you wish to use a different HSM firmware version, you can download it from the Gemalto Support Portal.  To update ...",t:"Updating the SafeNet Luna HSM Firmware"},"248":{i:0.000999203291299479,u:"../Content/administration/upgrade/pcie_backup_fw.htm",a:"To update the firmware on a SafeNet Luna Backup HSM, use LunaCM on a client computer that is connected to the SafeNet Luna Backup HSM. You require: SafeNet Luna Backup HSM firmware update file (\u003cfilename\u003e.fuf) the firmware update authentication code file(s) (\u003cfilename\u003e.txt) Use an uninterruptible ...",t:"Updating the SafeNet Luna Backup HSM Firmware"},"249":{i:0.000635886405402499,u:"../Content/administration/upgrade/fw_rollback.htm",a:"When updating the HSM firmware, the SafeNet Luna Network HSM saves the previously-installed firmware version on the HSM. If required, you can roll back to this previously-installed version. Rollback allows you to try firmware without permanently committing to the new version.  Rollback does not ...",t:"Rolling Back the SafeNet Luna HSM Firmware"},"250":{i:0.000618315542643841,u:"../Content/administration/upgrade/capabilities_sa.htm",a:"Gemalto provides Capability and Partition license upgrades for SafeNet Luna Network HSM through the Gemalto Licensing Portal (GLP). This section contains instructions for applying upgrades through this system. You must log in to the SafeNet Luna Network HSM as HSM SO to apply upgrades.  Introduction ...",t:"Upgrading HSM Capabilities and Partitions"},"251":{i:0.000429112302587111,u:"../Content/administration/upgrade/GLP/intro.htm",a:"The SafeNet Luna Network HSM is a feature-packed product that offers most customers all the out-of-the-box capabilities they need. Gemalto offers upgrades on some models for those customers that need additional capacity. This guide describes the upgrades, how to order them and the steps to apply ...",t:"Introduction"},"252":{i:0.000429112302587111,u:"../Content/administration/upgrade/GLP/options.htm",a:"Factory Upgrades This option has you ordering SafeNet Luna Network HSM(s) and upgrade(s) at the same time. Gemalto installs the upgrade(s) on the HSM(s) at time of manufacture so that when you receive the product, the upgrade entitlement is activated on your behalf. After placing your order, you ...",t:"Upgrade Options"},"253":{i:0.000429112302587111,u:"../Content/administration/upgrade/GLP/RMA.htm",a:"In the exceptional event that you must return an HSM to Gemalto, the unit you receive in exchange or receive back will represent the configuration before the failure, meaning the base part number plus any upgrades appearing in ECP as activated for the HSM appliance. Gemalto’s customer care team will ...",t:"Return Material Authorization"},"254":{i:0.000429112302587111,u:"../Content/administration/upgrade/GLP/revoke_license.htm",a:"Gemalto offers you the freedom to purchase and apply upgrades to any HSM appliance you possess. If you have already applied an upgrade to an HSM appliance and want to remove it and apply it to a different HSM appliance, we refer to this process as revoking a license. Revoking a license permits you ...",t:"Revoking a License"},"255":{i:0.000429112302587111,u:"../Content/administration/upgrade/GLP/information.htm",a:"Seeing What I Purchased and Activated From within the ECP portal, you can get information about what you ordered, what you activated and the HSMs that have upgrades. Follow these steps to do so. Use your login credentials to access ECP (see  Login to ECP with Email Address and Password ). Login ...",t:"Getting Information"},"256":{i:0.000550695188450891,u:"../Content/administration/upgrade/GLP/purchase_upgrades.htm",a:"To place an order for an upgrade, you need the relevant Gemalto part number. Be aware that there are two part numbers: one for factory-installed upgrades and one for field upgrades (that is, customer installed). Gemalto offers partition upgrades in “five-packs” up to a total aggregate of 100 ...",t:"Purchasing Upgrades"},"257":{i:0.000733069517246561,u:"../Content/administration/upgrade/GLP/manage_entitlements.htm",a:"Access ECP with Entitlement Identifier On the ECP portal Welcome screen (  https://safenetbelcamp.prod.sentinelcloud.com/ecp/ ), enter the entitlement identifier provided to you in an email from Gemalto’s order entry system in the Enter Entitlement ID window box and click the Activate button. Note ...",t:"Managing Upgrade Entitlements with ECP"},"258":{i:0.000733069517246561,u:"../Content/administration/upgrade/GLP/manage_upgrades.htm",a:"This section provides further details and examples for the steps you perform to and as administrator of your SafeNet Luna Network HSM. For brevity, this section uses the term \"HSM appliance\" in place of the full product name. Transfer License String to HSM Appliance Use secure copy (scp) or any ...",t:"Managing Upgrades on HSM Appliance"},"259":{i:0.00105222736533505,u:"../Content/administration/upgrade/GLP/Troubleshooting.htm",a:"This section provides some guidance for situations you might encounter. Applying Upgrade on HSM Appliance The LunaSH command sysconf license apply installs an upgrade on your HSM appliance. The following table describes potential messages you could see when you run this command. Getting the HSM ...",t:"Troubleshooting"},"260":{i:0.000383521485619445,u:"../Content/administration/users/users.htm",a:"This section describes tasks related to identities in the HSM or HSM partitions, including changing and resetting passwords, events or actions that cause HSM contents to be lost, and so on. It contains the following sections: About Changing HSM and Partition Passwords Failed Logins Resetting ...",t:"User and Password Administration"},"261":{i:0.000616225054488003,u:"../Content/administration/users/changing_hsm_passwords.htm",a:"From time to time, you might have reason to change the various passwords \non the appliance and HSM. This might be because a password has possibly been compromised, lost, or forgotten, \nor it might be because you have security procedures that mandate password-change \nintervals. The two options are: ...",t:"About Changing HSM and Partition Passwords"},"262":{i:0.00559181502340593,u:"../Content/administration/users/failed_logins_hsm.htm",a:"If you fail three consecutive login attempts as HSM Security Officer (or SO), the  HSM contents \nare rendered unrecoverable. This is a security feature meant to thwart repeated, unauthorized attempts to access your cryptographic \nmaterial. The number is not \nadjustable.  The system must actually ...",t:"Failed Logins"},"263":{i:0.000616225054488003,u:"../Content/administration/users/resetting_passwords.htm",a:"Resetting is normally done by a higher authority when an authentication secret is lost/forgotten, or compromised, and is discussed separately from merely changing authentication when the user is in legitimate possession of the current authentication. HSM There is no provision to reset the HSM SO ...",t:"Resetting Passwords"},"264":{i:0.000398462296491896,u:"../Content/sa_appliance_admin/FrontMatter.htm",a:"Revision History Trademarks, Copyrights, and Third-Party Software Copyright 2001-2019 Gemalto. All rights reserved. Gemalto and the Gemalto logo are trademarks and service marks of Gemalto and/or its subsidiaries and are registered in certain countries. All other trademarks and service marks, ...",t:"Document Information"},"265":{i:0.000391722424877263,u:"../Content/sa_appliance_admin/Preface/Preface.htm",a:"The maintenance and administrative tasks in this document are primarily for the SafeNet Luna Network HSM appliance, outside of the HSM.  HSM administrative tasks are described in the SafeNet Luna HSM Administration Guide.Some activities might encompass both portions of the SafeNet Luna HSM server. ...",t:"About the Appliance Administration Guide"},"266":{i:0.000398462296491896,u:"../Content/sa_appliance_admin/Preface/CRN.htm",a:"The customer release notes (CRN) provide important information about this release that is not included in the customer documentation. Read the CRN to fully understand the capabilities, limitations, and known issues for this release. You can view or download the latest version of the CRN from the ...",t:"Customer Release Notes"},"267":{i:0.000398462296491896,u:"../Content/sa_appliance_admin/Preface/Audience.htm",a:"This document is intended for personnel responsible for maintaining your organization\u0027s security infrastructure. This includes SafeNet Luna Network HSM users and security officers, key manager administrators, and network administrators. All products manufactured and distributed by Gemalto are ...",t:"Audience"},"268":{i:0.000398462296491896,u:"../Content/sa_appliance_admin/Preface/Conventions.htm",a:"This document uses standard conventions for describing the user interface and for alerting you to important information.  Notes Notes are used to alert you to important or helpful information. They use the following format: Take note. Contains important or helpful information. Cautions Cautions are ...",t:"Document Conventions"},"269":{i:0.000398462296491896,u:"../Content/sa_appliance_admin/Preface/Support.htm",a:"If you encounter a problem while installing, registering, or operating this product, please refer to the documentation before contacting support. If you cannot resolve the issue, contact your supplier or  Gemalto Customer Support . Gemalto Customer Support operates 24 hours a day, 7 days a week. ...",t:"Support Contacts"},"270":{i:0.000398462296491896,u:"../Content/sa_appliance_admin/hardware/appliance_hardware.htm",a:"This chapter describes the administrative and maintenance tasks you can perform directly on the SafeNet Luna Network HSM hardware. It contains the following sections: Physical Features Front-panel LCD Display System Behavior with Hardware Tamper Events Power-on, Power-off, or Reboot the Appliance ...",t:"Appliance Hardware Functions"},"271":{i:0.000408347919581038,u:"../Content/sa_appliance_admin/hardware/physical_features.htm",a:"Physical Features The SafeNet Luna Network HSM is 1U high and fits into standard 19-inch equipment racks.  Front Panel The front panel is illustrated below, with the secure locking bezel removed: Rear Panel The rear panel is illustrated below:",t:"Physical Features"},"272":{i:0.0175342996484111,u:"../Content/sa_appliance_admin/hardware/front-panel_display.htm",a:"The LCD on front panel of the SafeNet Luna Network HSM provides basic configuration and status information for the appliance. The LCD is split horizontally into three individual sections as follows: The LCD display Appliance State and Status Codes The bottom section of the LCD displays the current ...",t:"Front-panel LCD Display"},"273":{i:0.000408347919581038,u:"../Content/sa_appliance_admin/hardware/tamper_behavior.htm",a:"The SafeNet appliance uses the Master Tamper Key (a key on the HSM that encrypts everything on the HSM) to deal with both hardware (physical) tamper events and Secure Transport Mode.  Tampering with the Appliance Hardware tamper events are detectable events that imply intrusion into the appliance ...",t:"System Behavior with Hardware Tamper Events"},"274":{i:0.000810784328081092,u:"../Content/sa_appliance_admin/hardware/power_on_off_reboot.htm",a:"This section describes how to power-on, power-off, or reboot the appliance. It contains the following sections: Power On Power Off Reboot Hard Reboot Automatic Restart Following a Power Interruption Power On On the back panel, ensure that the power supplies are connected and working - the green LED ...",t:"Power-on, Power-off, or Reboot the Appliance"},"275":{i:0.000639746886409059,u:"../Content/sa_appliance_admin/hardware/fan_maintenance.htm",a:"The two power supplies in the SafeNet Luna Network HSM appliance are hot-swap capable, meaning that one is sufficient to power the appliance while the other is removed and replaced, with no service interruption. The indicator light (LED) on each power supply shows different behavior, depending upon ...",t:"Power Supply and Fan Maintenance"},});