define({"70":{i:0.000443428223775272,u:"../Content/configuration/preface/Audience.htm",a:"This document is intended for personnel responsible for maintaining your organization\u0027s security infrastructure. This includes SafeNet HSM users and security officers, key manager administrators, and network administrators. All products manufactured and distributed by Gemalto are designed to be ...",t:"Audience"},"71":{i:0.000443428223775272,u:"../Content/configuration/preface/Conventions.htm",a:"This document uses standard conventions for describing the user interface and for alerting you to important information.  Notes Notes are used to alert you to important or helpful information. They use the following format: Take note. Contains important or helpful information. Cautions Cautions are ...",t:"Document conventions"},"72":{i:0.00041942417417026,u:"../Content/configuration/preface/Support.htm",a:"Contact method   Contact Address Gemalto 4690 Millennium Drive Belcamp, Maryland  21017  \nUSA\n Phone Global  +1 410-931-7520  Australia  1800.020.183   China  (86) 10 8851 9191  France  0825 341000  Germany  01803 7246269 India  000.800.100.4290  Netherlands 0800.022.2996  New Zealand  0800.440.359  ...",t:"Support Contacts"},"73":{i:0.000443428223775272,u:"../Content/configuration/hsm_config/planning_your_configuration.htm",a:"[Step 1]   Planning Your Configuration Before initializing your HSM, we suggest taking a moment to consider the following available features and options. Some would be inconvenient to change after your HSM is in service: Appliance Roles Crypto Officer \u0026 Crypto User Domain Planning SafeNet PED ...",t:"[Step 1]  Planning Your Configuration"},"74":{i:0.000546254840444686,u:"../Content/configuration/planning/named_appliance_admin_users_and_assigned_roles.htm",a:"SafeNet Network HSM offers administrative roles external to the contained HSM, to oversee the management of the appliance that hosts the HSM, including network setup, system monitoring, and other tasks. Appliance Role Summary For the SafeNet Network HSM networked-appliance HSM, the roles fall under ...",t:"Appliance Roles"},"75":{i:0.000574198605531939,u:"../Content/configuration/planning/hsm_roles.htm",a:"SafeNet HSM products offer multiple identities, some mandatory, some optional, that you can invoke in different ways to map to roles and functions in your organization. The following topics offer some elements that you might wish to consider before committing to an HSM configuration.  Roles that ...",t:"HSM Roles and Secrets"},"76":{i:0.00103433081854079,u:"../Content/configuration/hsm_config/crypto-officer_crypto-user.htm",a:"An available security layer is required in some security and authentication schemes, as follows: For those who need the additional distinction, the Partition Owner role \n (black PED Key) can optionally be subdivided into two further roles:  - Crypto \n Officer  - Crypto User In the past, and ...",t:"Crypto Officer \u0026 Crypto User"},"77":{i:0.00147490142861476,u:"../Content/configuration/initial_setup/domains_planning.htm",a:"The cloning domain is a special-purpose secret that is attached to a partition on an HSM. It determines to which, and from which, other partitions (on the same HSM or on other HSMs)  the current partition can clone objects. Partitions that send or receive partition objects by means of the cloning ...",t:"Domain Planning"},"78":{i:0.000546254840444686,u:"../Content/configuration/initial_setup/ped_planning.htm",a:"Planning for configuration of a PED-authenticated SafeNet HSM involves a number of layered, interlocking considerations that should be carefully thought through, in advance.  Determine whether the HSM authentication secrets should fall under your organization\u0027s rules for password change cycles. For ...",t:"PED-authenticated HSM Planning"},"79":{i:0.000546254840444686,u:"../Content/configuration/initial_setup/password_planning.htm",a:"Planning for configuration of a password-authenticated SafeNet HSM is straightforward. LHSM-12627    Determine whether the HSM authentication secrets should fall under your organization\u0027s rules for password change cycles.   Decide whether application partitions should be owned and administered by ...",t:"Password-authenticated HSM Planning"},"80":{i:0.00041942417417026,u:"../Content/configuration/planning/effect_of_ppso_on_lunasa.htm",a:"The older way - The legacy pattern for SafeNet Network HSM configuration is that it is made known that an application partition is needed and the appliance administrator, who is also the HSM SO does everything and hands the application owner the finished product, an address to connect and a text ...",t:"Effect of PPSO on SafeNet Network HSM"},"81":{i:0.00168524937740292,u:"../Content/configuration/appliance_config/gather_hsm_appliance_network_settings.htm",a:"[Step 2]   Configure Your Network Settings In this chapter you will gather the needed information and then set the values that allow your HSM appliance to work within your network, to connect to external services (like NTP), and prepare it to engage in secure communication links. Gather appliance ...",t:"[Step 2]  Configure Your Network Settings"},"82":{i:0.0024050527586333,u:"../Content/configuration/appliance_config/recommended_network_characteristics.htm",a:"Determine whether your network is configured optimally for use of SafeNet appliances. Bandwidth and Latency Recommendation     Bandwidth Minimum supported: 10 Mb half duplex Recommended: at least 100 Mb full duplex - full Gigabit Ethernet is supported Ensure that your network switch is set to AUTO ...",t:"Recommended Network Characteristics"},"83":{i:0.00246376488485789,u:"../Content/configuration/appliance_config/power-up_the_hsm_appliance.htm",a:"Instructions on this page assume that the HSM appliance has been installed, \n including  power connections [We suggest that each of the two power supplies be connected to an independent electrical source, and that at least one of those sources should be protected by UPS (uninterruptible power ...",t:"Power-up the HSM Appliance"},"84":{i:0.00216578095474223,u:"../Content/configuration/appliance_config/open_a_connection.htm",a:"Perform your initial configuration via direct serial connection to the SafeNet appliance. Once network parameters are established, you can switch to an SSH session over your network. Direct administration connection via serial \n terminal is the  method for initial configuration for the following ...",t:"Open a Connection"},"85":{i:0.00226038802883369,u:"../Content/configuration/appliance_config/first_login_and_changing_passwords.htm",a:"Following the instructions in the previous pages, you have already: gathered the necessary network and security information made a connection (preferably serial) between your administration computer and your HSM appliance. When you have connected to the HSM Server, the onboard secure Command \n Line ...",t:"First Login and Changing Password"},"86":{i:0.001380117283666,u:"../Content/configuration/appliance_config/set_system_date_and_time.htm",a:"Before proceeding with HSM and HSM Partition setup, ensure \n that the HSM Server’s system date, time and timezone are appropriate \n for your network. Setting correct system time is important because the next step is to \n generate your own server certificate. The certificate becomes valid at \n the ...",t:"Set the System Date and Time and SSH Certificate"},"87":{i:0.00215784875568885,u:"../Content/configuration/appliance_config/configure_ip_and_network_parameters.htm",a:"The HSM appliance is pre-configured with network settings left over from our manufacturing process and not recommended for your production network. \n The following procedure assumes that your network uses DNS. If you are \n configuring without a DNS server available, some of the commands on this \n ...",t:"Configure the IP Address and Network Parameters"},"88":{i:0.0013365320378055,u:"../Content/configuration/appliance_config/make_your_network_connection.htm",a:"If you have been connecting via serial terminal, and the direct administration \n connection, to configure the HSM Server, you can now make an ethernet \n connection to your network. To make a network connection to the appliance  Connect the ethernet \n cable to the upper ethernet port on the HSM ...",t:"Make Your Network Connection"},"89":{i:0.00188238448685776,u:"../Content/configuration/appliance_config/generate_new_hsm_server_cert.htm",a:"  Generate a New HSM Server Certificate Although your HSM appliance came with a server certificate, good security \n practice dictates that you should generate a new one. To generate a new server certificate Use sysconf \n regenCert to generate a new Server Certificate: The command  sysconf regenCert ...",t:"Generate a New HSM Server Certificate"},"90":{i:0.000443428223775272,u:"../Content/configuration/hsm_init/overview_init_hsm.htm",a:"[Step 3]  Initialize the HSM  In this chapter you will initialize your HSM. To initialize an HSM is to prepare it for operation under the control of an HSM Security Officer or SO (the entity that administers the HSM).  Password-Authenticated versus PED-Authenticated HSMs The HSM is available in  ...",t:"[Step 3] Initialize the HSM "},"91":{i:0.00118105455955078,u:"../Content/configuration/hsm_init/about_initializing_a_password_authenticated_hsm.htm",a:"In this section, you initialize the HSM portion of the SafeNet appliance, \n and set any policies that you require. In normal operation, you would \n perform these actions just once, when first commissioning your SafeNet appliance. \n  Perform initialization only after you have \n set the system-level ...",t:"About Initializing a Password-Authenticated HSM"},"92":{i:0.00233208682063196,u:"../Content/configuration/hsm_init/initializing_a_luna_hsm_pw-version.htm",a:"Initialize the HSM \n\n \n to set up the necessary identities, ownership and authentication on the HSM. This is required \n before you can create Partitions and use the HSM.    Start the Initialization Process The hsm init \n command takes several options.  See  hsm init  in the Lunash Command Reference. ...",t:"Initializing a Password Authenticated HSM"},"93":{i:0.000927397465331919,u:"../Content/configuration/hsm_init/about_initializing_a_ped-authenticated_hsm.htm",a:"  About Initializing a PED-Authenticated HSM In this section, you initialize the HSM portion of the SafeNet appliance, \n and set any policies that you require. In normal operation, you would \n perform these actions just once, when first commissioning your SafeNet appliance. \n  Perform initialization ...",t:"  About Initializing a PED-Authenticated HSM"},"94":{i:0.00119998499286011,u:"../Content/configuration/hsm_init/recover_srk.htm",a:"This step is required only if your HSM was shipped in Secure Transport Mode.  If not, then proceed to  Initializing the HSM . You can read this page later if you choose to enable SRK and/or to invoke Secure Transport Mode at some future time.  PED-authenticated SafeNet HSMs can be shipped from the ...",t:"Recover the SRK"},"95":{i:0.00243661803839815,u:"../Content/configuration/hsm_init/initializing_a_luna_hsm_ped-version.htm",a:"Your SafeNet HSM arrives in \"Zeroized\" state, and in a default, pre-initialized condition (see below). It might also be in Secure Transport Mode, if you selected that option at purchase time. In this section, you initialize the HSM portion of the SafeNet appliance, \n and set any policies that you ...",t:"Initializing a PED-Authenticated HSM"},"96":{i:0.000937217246465407,u:"../Content/configuration/hsm_init/imprint_a_blue_so_ped_key_-_options_and_choices.htm",a:"   Anywhere there are choices, options abound. Rather than clutter the main initialization instruction page with a variety of possible paths and branches, this section presents some of the other situations that you might encounter while initializing a SafeNet HSM. So, assume that you have issued the ...",t:"Initialization - some additional options and description   "},"97":{i:0.000552140223439066,u:"../Content/configuration/initial_setup/about_hsm_capabilities_and_policies.htm",a:"[Step 4]  Set the HSM  Policies SafeNet  HSMs are built on one of our general-purpose HSM platforms (hardware plus firmware), and then are loaded with what we call \"personality\", to make them into specific types of HSM with specific abilities and constraints, to suit different markets and ...",t:"[Step 4] Set the HSM  Policies"},"98":{i:0.00150689364531635,u:"../Content/configuration/initial_setup/set_hsm_policies_password_authentication.htm",a:"Set any of the alterable policies that are to apply to the HSM. Capability vs Policy Interaction Capabilities identify the purchased features of the product and are set \n at time of manufacture. Policies represent the HSM Admin’s enabling (or restriction) of those features. Type the hsm showPolicies ...",t:"Set HSM Policies (Password Authentication)"},"99":{i:0.00111167008697868,u:"../Content/configuration/initial_setup/set_hsm_policies_ped_authentication.htm",a:"Set any of the alterable policies that are to apply to the HSM. Capability vs Policy Interaction Capabilities identify the purchased features of the product and are set \n at time of manufacture. Policies represent the HSM Admin’s enabling (or restriction) of those features. Type the hsm showPolicies ...",t:"Set HSM Policies - PED (Trusted Path) Authentication"},"100":{i:0.000995948471911898,u:"../Content/configuration/partition_create/partition_create.htm",a:"[Step 5]  Create  Application Partitions This chapter describes how to create application partitions on the HSM. Choose Partition Type The options are: Legacy-style application partitions are owned and administered by the HSM SO, who retains complete control. PPSO-style application partitions each ...",t:"[Step 5] Create  Application Partitions"},"101":{i:0.00041942417417026,u:"../Content/configuration/partition_create/about_configuring_legacy_partitions.htm",a:"Before SafeNet HSM release 6.0, an HSM could have one kind of application partition. It was administratively owned by the HSM SO who created it, and was operationally managed by a unified Partition User entity (black PED Key for PED-authenticated HSMs) or by a Crypto Officer and Crypto User (again, ...",t:"About Configuring Legacy Partitions"},"102":{i:0.0023043669944764,u:"../Content/configuration/partition_create/about_creating_a_legacy_partition_pw.htm",a:"This section is HSM Partition setup for Password Authentication. The \n activities in this section are required in three circumstances. if you just prepared \n an HSM on the SafeNet appliance for the first time and must now create your \n first HSM Partition, or if you have purchased \n a SafeNet ...",t:"Prepare to Create a Legacy Partition (Password Authenticated)"},"103":{i:0.00107234255988699,u:"../Content/configuration/partition_create/create_a_legacy_partition_pw.htm",a:"  Having logged in, you can now use the  ‘partition’ command. When you issue the partition create command, to create an HSM Partition, \n you must supply a label or name for the new Partition. Choose a partition name that is meaningful, in the \n context of your operations.   Partition names must be ...",t:"Create (Initialize) a Password Authenticated Legacy-style Application Partition  "},"104":{i:0.00257302875545095,u:"../Content/configuration/partition_create/prepare_to_create_a_partition_ped.htm",a:"This section is HSM application partition setup for PED  Authenticated HSMs. \n The activities in this section are required in these circumstances. if you just initialized the HSM  for the first time and must now create your \n first application Partition, or if you have purchased \n a SafeNet HSM ...",t:"Prepare to Create a Partition (PED Authenticated)"},"105":{i:0.000692814166570186,u:"../Content/configuration/partition_create/create_a_legacy_partition_ped_old-fw.htm",a:"This section is HSM Application Partition setup for a SafeNet HSM with PED Authentication, where the partition is to remain under the ownership of the HSM Security Officer. \n The activities in this section are required in two circumstances. if you just prepared \n an HSM  for the first time and must ...",t:"Create a PED Authenticated Legacy-style Application Partition (f/w pre-6.22.0)"},"106":{i:0.000692814166570186,u:"../Content/configuration/partition_create/create_a_legacy_partition_ped_6-22-fw.htm",a:"This section assumes that the HSM firmware is version 6.22.0 or newer, and that you are creating a legacy-style application partition that will remain under administrative control of the HSM SO. (For instructions to create PPSO partitions on an HSM with firmware 6.22.0 or newer, or to create true ...",t:"Create a PED Authenticated Legacy-style Application Partition (f/w 6.22.0 or newer)"},"107":{i:0.00041942417417026,u:"../Content/configuration/partition_create/record_partition_client_password_ped.htm",a:"The PED now generates and displays the Client Password (login secret), \n by which Clients will later authenticate themselves to this HSM Partition. Record the Login Secret Value from the PED screen – write \n it down legibly – because it will never be shown again. This is the HSM \n Partition ...",t:"Record the Partition Client Password (PED-Auth HSMs)"},"108":{i:0.00150682700089753,u:"../Content/configuration/partition_create/about_configuring_ppso_partitions.htm",a:"  When you are ready to create and configure an application partition, it is assumed that you have already initialized and configured the HSM that is to contain the application partition. SafeNet HSMs have two types of partition spaces: HSM administrative partition  - where HSM-wide policies are set ...",t:"About Configuring an Application Partition with Its Own SO  "},"109":{i:0.00101302089054484,u:"../Content/configuration/partition_create/hsm-so_action_to_config_appliance_ped-ppso_partition_1a.htm",a:" An application owner/user has requested an application partition on the HSM, in which applications will run cryptographic operations. These instructions are the actions to be taken by the HSM Security Officer or SO. These instructions assume a PED-authenticated SafeNet HSM supporting the creation ...",t:"HSM  SO Configures PED-authenticated SafeNet Network HSM Partition with SO "},"110":{i:0.000739630898144916,u:"../Content/configuration/partition_create/hsm-so_action_to_config_appliance_pw-ppso_partition_1a.htm",a:" An application owner/user has requested an application partition on the HSM, in which applications will run cryptographic operations. These instructions are the actions to be taken by the HSM Security Officer or SO. These instructions assume a Password-authenticated SafeNet HSM supporting the ...",t:"HSM  SO Configures SafeNet Network HSM Password-authenticated Partition with SO "},"111":{i:0.00183669762907869,u:"../Content/configuration/partition_policies/step-5a_partition_policies_legacy.htm",a:"[Step 6]  Set the  Partition Policies for Legacy Partitions At this point, you should have initialized the HSM and created one or more HSM \n Partitions.  Before deploying the partitions, review and set the policies that constrain the use of the HSM Partition \n by clients, as described in the ...",t:"[Step 6] Set the  Partition Policies for Legacy Partitions"},"112":{i:0.00041942417417026,u:"../Content/configuration/appliance_config/one-step_ntls_setup.htm",a:"[Step 7]  Create a trusted link and register Client and Appliance with each other PREVIEW  In this section,  setup  a network trust link (NTL) between a LunaClient and an application partition on a SafeNet Network HSM, then register each with the other, enabling applications on a client computer to ...",t:"[Step 7] Create a trusted link and register Client and Appliance with each other"},"113":{i:0.00041942417417026,u:"../Content/configuration/ppso_partition_config/step-8_ppso_partition_config.htm",a:"[Step 8]  Configure PPSO Application Partitions This chapter describes how the partition owner (partition SO) configures a PPSO partition after receiving it from the HSM SO. The configuration tasks you need to perform depend on whether the partition is password-authenticated or PED-authenticated as ...",t:"[Step 8] Configure PPSO Application Partitions"},"114":{i:0.00175154399383225,u:"../Content/configuration/ppso_partition_config/partition-so_action_to_config_pw-ppso_partition_2.htm",a:"These instructions assume a Password-authenticated SafeNet HSM that has been initialized, and an application partition has been created, capable of having  its own Security Officer.  Step 1: Initialize  the Partition SO role This step is perfomed by the root user on the SafeNet HSM client ...",t:"Initialize the Partition SO and Crypto Officer Roles on a PW-Auth PPSO Partition"},"115":{i:0.00134915727518908,u:"../Content/configuration/ppso_partition_config/partition-crypto-officer_action_to_config_pw-ppso_partition_3.htm",a:" These instructions assume  a Password-authenticated SafeNet HSM has been initialized,  an application partition has been created,   a Crypto Officer has been created for the partition, and  the Crypto Officer password has been conveyed to the person responsible for the Crypto Officer role. See  ...",t:"Initialize the Crypto User Role on a PW-Auth PPSO Partition "},"116":{i:0.00121951813543356,u:"../Content/configuration/ppso_partition_config/partition-so_action_to_config_ped-ppso_partition_2.htm",a:"These instructions assume a PED-authenticated SafeNet HSM that has been initialized, and an application partition has been created, capable of having  its own Security Officer.  You will need: An HSM that has firmware 6.22.0, or later, and the Per-Partition SO capability installed. SafeNet PED and ...",t:"Initialize the Partition SO and Crypto Officer Roles on a PED-Auth PPSO Partition"},"117":{i:0.000950269689161829,u:"../Content/configuration/ppso_partition_config/partition-crypto-officer_action_to_config_ped-ppso_partition_3.htm",a:" These instructions assume  a PED-authenticated SafeNet HSM has been initialized,  an application partition has been created,   a Crypto Officer has been created for the partition, and  the Crypto Officer PED Key has been conveyed to the person responsible for the Crypto Officer role. See  ...",t:"Initialize the Crypto User Role on a PED-Auth PPSO Partition "},"118":{i:0.000873980787321301,u:"../Content/configuration/ppso_partition_config/partition-so-and-co_action_to_activate_ped-ppso_partition_4a.htm",a:"In this section the Partition SO and the Crypto Officer configure the partition to allow Activation (caching of the authentication), and then Activate it. These instructions assume  you are running lunacm on a SafeNet HSM Client host computer containing, or connected to, an HSM with a PPSO ...",t:"Activate a PED-Auth PPSO Partition for the Crypto Officer Role"},"119":{i:0.000873980787321301,u:"../Content/configuration/ppso_partition_config/partition-so-and-cu_action_to_activate_ped-ppso_partition_4b.htm",a:"In this section the Partition SO and the Crypto User configure the partition to allow Activation (caching of the authentication), and then Activate it. These instructions assume  you are running lunacm on a SafeNet HSM Client host computer containing, or connected to, an HSM with a PPSO application ...",t:"Activate a PED-Auth PPSO Partition for the Crypto User Role"},"120":{i:0.00279506299122806,u:"../Content/configuration/partition_policies/step-9_partition_policies_ppso.htm",a:"[Step 9]  Set the  Partition Policies for PPSO Partitions At this point, you should have initialized the partition and created the Crypto Officer role and, optionally, the Crypto User role.  Before deploying the partitions, review and set the policies that constrain the use of the HSM Partition \n by ...",t:"[Step 9] Set the  Partition Policies for PPSO Partitions"},"121":{i:0.000475838716413999,u:"../Content/configuration/optional_config/optional_config.htm",a:"After completing the base configuration, you can also perform any of the following optional configuration tasks: Configure the SafeNet Network HSM appliance to use a Network Time Protocol (NTP) server You can synchronize a SafeNet Network HSM appliance with a network time protocol (NTP) server. NTP ...",t:"Optional Configuration Tasks"},"122":{i:0.000482945077094329,u:"../Content/configuration/radius/radius_config.htm",a:"RADIUS (Remote Authentication Dial-In User Service) is a client/server protocol providing authentication, authorization, and accounting service to configured clients. The client passes user information to configured, designated RADIUS servers, and acts on the returned response. A RADIUS server ...",t:"[Optional] Configure for RADIUS Authentication"},"123":{i:0.000431426198972766,u:"../Content/administration/FrontMatter.htm",a:"Product Version 6.2.2 Document Part Number 007-011136-012 Release Date 01 December 2016 Revision History Revision Date Reason A 01 December 2016 Initial release. Trademarks, Copyrights, and Third-Party Software Copyright 2001-2016Gemalto. All rights reserved. Gemalto and the Gemalto logo are ...",t:"Document Information"},"124":{i:0.000451834666808986,u:"../Content/administration/preface/Preface.htm",a:"This document describes the operational and administrative tasks you can perform to maintain the functionality and efficiency of your HSMs. It contains the following chapters: Audit Logging Backup and Restore HSMs and Partitions Capabilities and Policies Configuration File Summary Domains Error ...",t:"About the Administration Guide"},"125":{i:0.000431426198972766,u:"../Content/administration/preface/CRN.htm",a:"The customer release notes (CRN) provide important information about this release that is not included in the customer documentation. Read the CRN to fully understand the capabilities, limitations, and known issues for this release. You can view or download the latest version of the CRN for this ...",t:"Customer Release Notes"},"126":{i:0.000431426198972766,u:"../Content/administration/preface/Rebranding.htm",a:"In early 2015, Gemalto completed its acquisition of SafeNet, Inc. As part of the process of rationalizing the product portfolios between the two organizations, the Luna name has been removed from the SafeNet HSM product line, with the SafeNet name being retained. As a result, the product names for ...",t:"Gemalto Rebranding"},"127":{i:0.000431426198972766,u:"../Content/administration/preface/Audience.htm",a:"This document is intended for personnel responsible for maintaining your organization\u0027s security infrastructure. This includes SafeNet HSM users and security officers, key manager administrators, and network administrators. All products manufactured and distributed by Gemalto are designed to be ...",t:"Audience"},"128":{i:0.000431426198972766,u:"../Content/administration/preface/Conventions.htm",a:"This document uses standard conventions for describing the user interface and for alerting you to important information.  Notes Notes are used to alert you to important or helpful information. They use the following format: Take note. Contains important or helpful information. Cautions Cautions are ...",t:"Document Conventions"},"129":{i:0.000431426198972766,u:"../Content/administration/preface/Support.htm",a:"Contact method   Contact Address Gemalto 4690 Millennium Drive Belcamp, Maryland  21017  \nUSA\n Phone Global  +1 410-931-7520  Australia  1800.020.183   China  (86) 10 8851 9191  France  0825 341000  Germany  01803 7246269 India  000.800.100.4290  Netherlands 0800.022.2996  New Zealand  0800.440.359  ...",t:"Support Contacts"},"130":{i:0.000431426198972766,u:"../Content/administration/audit/audit.htm",a:"This chapter describes how to use audit logging to provide security audits of HSM activity.  It contains the following sections: Audit Logging Overview Configuring and Using Audit Logging Audit Logging General Advice and Recommendations Audit Log Categories and HSM Events Verifying the Log Entries ...",t:"Audit Logging"},"131":{i:0.000593170659978333,u:"../Content/administration/audit/audit_overview.htm",a:"The HSM can log its events with varying levels of verbosity (like critical events only, failures, failures and successes, key usage, all). By default, only critical events are logged, which imposes virtually no load on the HSM. In addition, you have the option to create the Audit user on the HSM and ...",t:"Audit Logging Overview"},"132":{i:0.000465263838107282,u:"../Content/administration/audit/audit-logging_configuring_and_using.htm",a:"The overall sequence when initializing an HSM that will use Security Audit Logging is as follows: Configure the SafeNet Network HSM appliance or the SafeNet PCIe HSM/SafeNet USB HSM host workstation to use the network time protocol (NTP).   Configure access to at least two geographically separated ...",t:"Configuring and Using Audit Logging"},"133":{i:0.000465263838107282,u:"../Content/administration/audit/audit-logging_general_recommendations.htm",a:"The Secure Audit Logging feature can produce a significant volume of data.  It is expected, however, that Audit Officers will configure it properly for their specific operating environments.  The data produced when the feature has been properly configured might be used for a number of reasons, such ...",t:"Audit Logging General Advice and Recommendations"},"134":{i:0.000465263838107282,u:"../Content/administration/audit/audit-log_categories_and_hsm_events.htm",a:"This section provides a summary of the audit log categories and their associated HSM events.  HSM Access HSM Event    Description    LUNA_LOGIN C_Login.  This event must be allowed to proceed even if the result should be logged but cannot (for example, due to a log full condition). LUNA_LOGOUT ...",t:"Audit Log Categories and HSM Events"},});