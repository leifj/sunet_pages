define({"1338":{i:0.000448332265173275,u:"../Content/Utilities/cmu/cmu_generatekeypair.htm",a:"This function generates an asymmetric key pair on the token or HSM. \n An optional input filename can be used to specify a file from which mandatory \n and optional attributes are to be read.  For DSA key generation, the domain parameters (Prime, Subprime, and Base) are required, and must be provided ...",t:"cmu generatekeypair"},"1339":{i:0.000448332265173275,u:"../Content/Utilities/cmu/cmu_getattribute.htm",a:"This function outputs any viewable attributes for an object. An optional \n output filename can be used to direct the output to a file. Syntax cmu getAttribute \u003cparameters\u003e Required Parameters Parameter Description -handle=\u003chandle#\u003e The \n handle to the object. The parameter \"-handle\" \n is followed by ...",t:"cmu getattribute"},"1340":{i:0.000448332265173275,u:"../Content/Utilities/cmu/cmu_getpkc.htm",a:"Retrieve a Public Key Confirmation from the HSM. Syntax cmu getpkc Optional Parameters Parameter Description -handle=\u003chandle#\u003e The \n handle to the corresponding private key for the PKC. The parameter \"-handle\" \n is followed by an equal sign \"=\", followed by the handle of \n the object (no spaces). ...",t:"cmu getpkc"},"1341":{i:0.000448332265173275,u:"../Content/Utilities/cmu/cmu_import.htm",a:"This function imports X.509 certificates from a file to the token or \n HSM. The file may include a single DER encoded binary certificate or a \n CMSS PKCS #7 certificate or certificate set. Either type of certificate \n can be binary or PEM (base 64) encoded. An optional label can be defined \n as a ...",t:"cmu import"},"1342":{i:0.000448332265173275,u:"../Content/Utilities/cmu/cmu_importkey.htm",a:"This function unwraps an RSA, DSA , or ECDSA private key onto the selected token or \n HSM. The key file may be in any of the following formats: PKCS #12(PFX) RSA in a DER-encoded format (.pfx file) PKCS #8(Unencrypted PrivatekeyInfo) in RSA or DSA in base 64 PEM, or binary DER format PKCS #1 (RSA in ...",t:"cmu importkey"},"1343":{i:0.000448332265173275,u:"../Content/Utilities/cmu/cmu_list.htm",a:"This function lists all objects (keys, certificates and other general \n data objects) on the HSM that match an optional set of search criteria \n and that are accessible given the authentication state of the HSM. Search \n criteria can include many of the object attributes that are available \n for ...",t:"cmu list"},"1344":{i:0.000448332265173275,u:"../Content/Utilities/cmu/cmu_requestcertificate.htm",a:"This function creates a PKCS #10 certificate request for an RSA/DSA/ECDSA key \n pair on the token or HSM. It must be provided with the handle either to\n the public key or to the corresponding private key (all of the public \n key components are contained within the private key). The private key \n ...",t:"cmu requestcertificate"},"1345":{i:0.000448332265173275,u:"../Content/Utilities/cmu/cmu_selfsigncertificate.htm",a:"This function creates a self-signed X.509 certificate for an RSA, DSA, or ECDSA key \n pair on the token or HSM. It must be provided with the handles to both \n the public key and the corresponding private key (all of the public key \n components are contained within the private key). The private key ...",t:"cmu selfsigncertificate"},"1346":{i:0.000448332265173275,u:"../Content/Utilities/cmu/cmu_setattribute.htm",a:"This function sets any modifiable attributes for an object. An optional \n input filename can be used to specify a file from which the new attribute \n values are to be read.    Syntax cmu setAttribute \u003cparameters\u003e Required Parameters Parameter Description -handle=\u003chandle#\u003e This is a mandatory ...",t:"cmu setattribute"},"1347":{i:0.000448332265173275,u:"../Content/Utilities/cmu/cmu_verifypkc.htm",a:"Verify a Public Key Confirmation from the HSM.    Syntax cmu verifypkc  \u003cparameters\u003e Required Parameters Parameter Description -inputFile    This \n parameter defines the name of the file that contains the PKC. -pkctype  This parameter defines the PKC type (1 - TC-TrustCenter, 2 - Chrysalis-ITS).    ...",t:"cmu verifypkc"},"1348":{i:0.000476126371578519,u:"../Content/Utilities/ckdemo/ckdemo.htm",a:"This chapter describes how to access and use the ckdemo demonstration utility. The ckdemo utility is a simple console-based tool that provides a menu of functions that perform operations based on the PKCS#11 API. The ckdemo utility is included with the SafeNet HSM client and can be used with any ...",t:"CKdemo"},"1349":{i:0.000446405059106407,u:"../Content/Utilities/ckdemo/accessing_ckdemo.htm",a:"The ckdemo utility is included with the SafeNet HSM client. How you access it depends on whether you are using Windows or Linux/UNIX. To access ckdemo from a Linux client Go to the SafeNet HSM client binary directory. cd /usr/safenet/lunaclient/bin Launch the ckdemo utility ./ckdemo The ckdemo main ...",t:"Accessing the ckdemo Utility"},"1350":{i:0.000825854632424036,u:"../Content/Utilities/ckdemo/ckdemo_menu.htm",a:"When you launch the ckdemo utility, the ckdemo menu  is displayed. The ckdemo menu provides access to numerous functions  in several categories, as illustrated below: The ckdemo menu TOKEN:\n    ( 1) Open Session  ( 2) Close Session  ( 3) Login\n    ( 4) Logout        ( 5) Change PIN     ( 6) Init ...",t:"Using the ckdemo Menu"},"1351":{i:0.000500404069848614,u:"../Content/Utilities/ckdemo/audit_log_functions.htm",a:"The AUDIT/LOG Menu Functions The AUDIT/LOG menu provides the following functions: (130) Get Config   (131) Set Config   (132) Verify Logs   (133) Get Time   (134) Set Time   (135) Import Secret   (136) Export Secret   (137) Init Audit   (138) Get Status   (139) Log External  ",t:"The AUDIT/LOG Menu Functions"},"1352":{i:0.000500404069848614,u:"../Content/Utilities/ckdemo/ca_functions.htm",a:"The CA menu provides the following functions: (70) Set Domain  (Not for SafeNet Network HSM)  This \n option prompts for a text string and sets the token cloning domain name \n to that value. To clone a key between two SafeNet CA3 tokens, both tokens \n must share the same red PED Key. (71) Clone Key  ...",t:"The CA Menu Functions"},"1353":{i:0.000500404069848614,u:"../Content/Utilities/ckdemo/cluster_execution_functions.htm",a:"The CLUSTER EXECUTION Menu Functions The CLUSTER EXECUTION menu provides the following functions: (111) Get Cluster State  ",t:"The CLUSTER EXECUTION Menu Functions"},"1354":{i:0.00126735967348373,u:"../Content/Utilities/ckdemo/high_availability_recovery_functions.htm",a:"The HIGH AVAILABILITY RECOVERY menu provides the following functions: (50) HA Init  (Not for SafeNet Network HSM) Requires that an RSA keypair have been previously \n created, and the private key cloned to User space of the affected tokens. \n This option requires the handle to the session (of the ...",t:"The HIGH AVAILABILITY RECOVERY Menu Functions"},"1355":{i:0.000500404069848614,u:"../Content/Utilities/ckdemo/key_functions.htm",a:"The KEY menu provides the following functions: 60) Wrap Key  This option allows you to encrypt a key. You must provide the encryption \n mechanism type, the handle of the wrapping key (used to encrypt the key), \n and the handle of the key to be wrapped (the one that is going to be encrypted). \n ...",t:"The KEY Menu Functions"},"1356":{i:0.000500404069848614,u:"../Content/Utilities/ckdemo/object_management_functions.htm",a:"The OBJECT MANAGEMENT menu provides the following functions: (20) Create Object  This option allows you to create objects on the token. You can use this \n option to create data or certificate objects on the token. You are presented \n with a default template for your new object that you can change or ...",t:"The OBJECT MANAGEMENT Menu Functions"},"1357":{i:0.000500404069848614,u:"../Content/Utilities/ckdemo/offboard_key_storage_functions.htm",a:"The OFFBOARD KEY STORAGE menu provides the following functions: (101) Extract Masked Object  Extracts a key off the SafeNet Network HSM in a masked format, into a file “masked.key”. \n You can rename the resulting file if you are testing with multiple extractions. (102) Insert Masked Object  Inserts ...",t:"The OFFBOARD KEY STORAGE Menu Functions"},"1358":{i:0.000500404069848614,u:"../Content/Utilities/ckdemo/others_functions.htm",a:"The OTHERS menu provides the following functions: 90) Self Test Not currently supported. 94) Open Access  Creates a token access ID that is independent of any sessions so that \n the login state can be maintained even when your application exits. Used \n to allow the same application to return ...",t:"The OTHERS Menu Functions"},"1359":{i:0.000500404069848614,u:"../Content/Utilities/ckdemo/ped_info_functions.htm",a:"The PED INFO menu provides the following functions: 120) Set PED Info  Specify the PED (local or remote) that is associated with the HSM in a specific slot. 121) Get PED Info Display information describing the PED that is associated with the HSM in a specific slot. 122) Init RPV  Create a Remote PED ...",t:"The PED INFO menu functions"},"1360":{i:0.000500404069848614,u:"../Content/Utilities/ckdemo/script_execution_functions.htm",a:"The SCRIPT EXECUTION Menu Functions The SCRIPT EXECUTION menu provides the following functions: (108) Execute Script   (109) Execute Asynchronous Script     (110) Execute Single Part Script  ",t:"The SCRIPT EXECUTION Menu Functions"},"1361":{i:0.000500404069848614,u:"../Content/Utilities/ckdemo/security_functions.htm",a:"The SECURITY menu provides the following functions: (40) Encrypt File  This option allows you to encrypt a file. You are asked which encryption \n mechanism you wish to use, then the filename of the file to be encrypted, \n and finally the key handle of the key to be used in the encryption operation. ...",t:"The SECURITY Menu Functions"},"1362":{i:0.000500404069848614,u:"../Content/Utilities/ckdemo/srk_functions.htm",a:"The SRK menu provides the following functions: (200) SRK Get State  Shows the current state of the Master Tamper Key. (201) SRK Restore  Gets the external split (SRK) of the Secure Recovery Vector from a connected SafeNet PED, combines it with the internally-stored split, to regenerate the SRV, and ...",t:"The SRK Menu Functions"},"1363":{i:0.000500404069848614,u:"../Content/Utilities/ckdemo/token_functions.htm",a:"The TOKEN menu provides the following functions: ( 1) Open Session  Before you can manipulate objects or perform cryptographic operations \n on a token, you must have an open session on that token. This command \n prompts you for the number of the slot on which to open the new session. \n By default, ...",t:"The TOKEN Menu Functions"},"1364":{i:0.000476126371578519,u:"../Content/Utilities/cklog/cklog.htm",a:"CKlog This chapter describes how to use the cklog utility. It contains the following sections: Lunadiag Utility",t:"CKlog"},"1365":{i:0.00041942417417026,u:"../Content/Utilities/cklog/cklog_utility.htm",a:"SafeNet Software Development Kit can record all \n interactions between an application and our PKCS#11-compliant library, allowing \n a developer to debug an application by viewing what the library receives. The tool is the Cryptoki Logging Facility or cklog.  In \n function, cklog is a library that ...",t:"cklog Utility"},"1366":{i:0.000476126371578519,u:"../Content/Utilities/lunadiag/lunadiag.htm",a:"Lunadiag This chapter describes how to use the lunadiag utility. It contains the following sections: Lunadiag Utility",t:"Lunadiag"},"1367":{i:0.00122885072225469,u:"../Content/Utilities/lunadiag/lunadiag_utility.htm",a:"Lunadiag is a diagnostic tool for SafeNet card products. In general, \n you may never need to use it, other than to confirm a successful SafeNet installation. If you experience problems with a SafeNet product and need \n to contact Customer Support, you may be asked to perform additional tests \n with ...",t:"Lunadiag Utility"},"1368":{i:0.000573048098991325,u:"../Content/Utilities/multitoken/multitoken.htm",a:"Multitoken This chapter describes how to access and use Multitoken, a simple demonstration tool that allows you to perform \n basic cryptographic functions on a SafeNet HSM. It contains the following topics: Accessing Multitoken Using Multitoken",t:"Multitoken"},"1369":{i:0.000662973239032385,u:"../Content/Utilities/multitoken/multitoken_accessing.htm",a:"The multitoken utility is a command line utility included with the SafeNet Client software.  To access the multitoken utility Open a console window. Go to the SafeNet Client installation folder/directory: Windows C:\\Program Files\\SafeNet\\LunaClient Linux/Unix /usr/safenet/lunaclient/bin Launch the ...",t:"Accessing Multitoken"},"1370":{i:0.000662973239032385,u:"../Content/Utilities/multitoken/multitoken_using.htm",a:"The multitoken utility allows you to specify \n an operation, and one or more “slots” or HSM Partitions on which to perform \n that operation. The multitoken utility runs the operations and returns a summary, \n or progress report, of the results. To achieve maximum performance with SafeNet Network HSM ...",t:"Using Multitoken"},"1371":{i:0.000889977176333602,u:"../Content/Utilities/ped_client_server/ped_client_server.htm",a:"Pedserver and Pedclient This chapter describes how to use the pedserver and pedcient utilities to manage your remote PED devices. It contains the following topics: Overview  The pedserver Command \" The pedClient Command\" on page 1",t:"Pedserver and Pedclient"},"1372":{i:0.000797670428208004,u:"../Content/Utilities/ped_client_server/pedclient_and_pedserver.htm",a:"You can use the pedserver and pedclient utilities to manage your remote PED devices. The pedserver Utility The pedserver utility has one function. It resides on a computer with an attached SafeNet PED [Remote], and it serves PED operations to an instance of pedClient that operates on behalf of an ...",t:"Overview"},"1373":{i:0.000758439606735006,u:"../Content/Utilities/ped_client_server/pedclient_commands.htm",a:" The pedclient Command General Syntax This is the syntax of the pedClient command, which includes starting and stopping of the service, and an assortment of configuration options. Specify \"pedClient\" at the command line, plus one of the modes, plus any option applicable to that mode.  ...",t:" The pedclient Command"},"1374":{i:0.00113668586077275,u:"../Content/Utilities/ped_client_server/pedserver_commands.htm",a:" The pedserver Command Syntax This is the syntax of the pedServer command, which includes starting and stopping of the service, and an assortment of configuration options. Specify \"pedserver\" at the command line, plus one of the modes, plus any option applicable to that mode.  pedServer.exe \t–mode ...",t:" The pedserver Command"},"1375":{i:0.000476126371578519,u:"../Content/Utilities/rbs/rbs.htm",a:"Remote Backup Service (RBS) This chapter describes how to use the RBS utility to remotely back up your HSMs.  It contains the following topics: RBS  Overview rbs rbs config rbs daemon rbs genkey rbs nopassword",t:"Remote Backup Service (RBS)"},"1376":{i:0.000486876386510629,u:"../Content/Utilities/rbs/rbs_overview.htm",a:"RBS implements the Remote Backup Service. RBS is run on a workstation with a SafeNet Remote Backup HSM connected.  RBS requires pedClient to be running both on the RBS computer and on the host of the SafeNet HSM primary (the HSM being backed-up from, or being restored-to). PedClient enables the ...",t:"RBS  Overview"},"1377":{i:0.000486876386510629,u:"../Content/Utilities/rbs/rbs_commands.htm",a:"Access the RBS commands. Syntax rbs [-daemon] [-genkey] [-nopassword] [-config] [-help] Parameter Shortcut Description -config -c Runs RBS to select devices to support for Remote Backup. See  rbs config . -daemon -d Runs RBS in daemon (background) mode. See  rbs daemon . -genkey -g Runs RBS to ...",t:"rbs"},"1378":{i:0.0005903390876994,u:"../Content/Utilities/rbs/rbs_config_command.htm",a:"rbs config Runs rbs to select devices to support for Remote Backup. Syntax rbs --config    Options None. \"config\" is an option of the rbs command. Example [admin@myluna bin] # ./rbs --config         [admin@myluna bin]#",t:"rbs config"},"1379":{i:0.0005903390876994,u:"../Content/Utilities/rbs/rbs_daemon_command.htm",a:"Runs RBSin daemon (background) mode. RBS is required for Remote Backup. Syntax rbs --daemon   Options None. \"daemon\" is an option of the rbs command. Default for rbs is non-daemon mode. Example [admin@myluna bin] # ../rbs/bin/rbs --daemon    Enter password : ********    [admin@myluna bin]#",t:"rbs daemon"},"1380":{i:0.0005903390876994,u:"../Content/Utilities/rbs/rbs_genkey_command.htm",a:"rbs genkey Runs RBS to generate private key/certificate for Remote Backup. Syntax rbs --genkey    Options None. \"genkey\" is an option of the rbs command. . Example [admin@myluna bin] # ./rbs --genkey    Enter password : ********    Verify password: ********       [admin@myluna bin]#",t:"rbs genkey"},"1381":{i:0.0005903390876994,u:"../Content/Utilities/rbs/rbs_nopassword_command.htm",a:"rbs nopassword Require no password for encoded keys. Default is password required. Syntax rbs --nopassword    Options None. \"nopassword\" is an option of the rbs command. . Example [admin@myluna bin] # ./rbs --nopassword           [admin@myluna bin]#",t:"rbs nopassword"},"1382":{i:0.000476126371578519,u:"../Content/Utilities/salogin/salogin.htm",a:"SAlogin This chapter describes how to use the salogin utility to allow applications that do not provide a native login interface to an HSM to login to a SafeNet Network HSM. It contains the following topics: Using the salogin Utility",t:"SAlogin"},"1383":{i:0.000824137448212477,u:"../Content/Utilities/salogin/integrating_the_hsm_with_your_applications.htm",a:"Cryptographic applications that are not specifically adapted to use \n an HSM Server can nevertheless be run using SafeNet Enterprise HSMs, with the aid \n of the salogin \n utility. This section provides the settings required for some widely-used \n applications. An example of a situation where you ...",t:"Using the salogin Utility"},"1384":{i:0.000476126371578519,u:"../Content/Utilities/scp_pscp/scp_pscp.htm",a:"SCP and PSCP This chapter describes how to use the scp (Linux/UNIX) or pscp (Windows) utilities to transfer files between a SafeNet HSM client computer and a SafeNet Network HSM appliance. It contains the following sections: Using the scp and pscp Utilities",t:"SCP and PSCP"},"1385":{i:0.00140597681985063,u:"../Content/Utilities/scp_pscp/using_scp_pscp.htm",a:"Using the scp and pscp Utilities Use the scp (Linux/Unix) or pscp (Windows) command to securely move updates and certificates and other \n files from a source computer onto the SafeNet appliance, or to move appliance \n certificates or log files out to a client computer. All packages from SafeNet are ...",t:"Using the SCP utility "},"1386":{i:0.000476126371578519,u:"../Content/Utilities/ureset/ureset.htm",a:"Ureset Utility This chapter describes how to use the ureset utility to reset a SafeNet USB HSM. It contains the following sections: ureset",t:"Ureset Utility"},"1387":{i:0.000824137448212477,u:"../Content/Utilities/ureset/ureset_utility.htm",a:" You can use the ureset command to reset a SafeNet USB HSM that has become unresponsive, without having to reboot the host computer. Syntax ureset [\u003cdevice\u003e] Parameter Description \u003cdevice\u003e Specifies the handle of the device that you want to reset. This parameter is not required if you have only one ...",t:"ureset"},"1388":{i:0.000476126371578519,u:"../Content/Utilities/vreset/vreset.htm",a:"Vreset Utility This chapter describes how to use the vreset utility to reset a SafeNet PCIe HSM. It contains the following sections: vreset",t:"Vreset Utility"},"1389":{i:0.000824137448212477,u:"../Content/Utilities/vreset/vreset_utility.htm",a:"You can use the vreset command to reset a SafeNet PCIe HSM that has become unresponsive, without having to reboot the host computer. Syntax vreset [\u003cdevice\u003e] Parameter Description \u003cdevice\u003e Specifies the handle of the device that you want to reset. This parameter is not required if you have only one ...",t:"vreset"},"1390":{i:0.000645197104199454,u:"../Content/Utilities/vtl/vtl.htm",a:"This chapter describes how to use the VTL utility  to manage the relationship \n between your Client computer and one or more SafeNet appliances. VTL is a legacy utility that is included for backwards compatibility reasons only. We strongly recommend that you discontinue use of VTL and use lunacm or ...",t:"VTL"},"1391":{i:0.000453700855439568,u:"../Content/Utilities/vtl/vtl_commands.htm",a:"VTL stands for \"Virtual Token Library\", and is a command-line utility that is \n loaded onto each of your Client computers when you install the SafeNet Software. Open a command prompt window or console, cd to the directory \n where you installed your SafeNet software, and run the vtl command \n (with ...",t:"VTL Overview"},"1392":{i:0.000483366332402479,u:"../Content/Utilities/vtl/vtl_addserver_clientcommand.htm",a:" Name  vtl addServer \n  Syntax vtl addServer -n \u003cserver hostname\u003e -c \u003cservers cert \n filename\u003e [-htl] Description Adds the specified server to the client\u0027s list of trusted SafeNet Servers. \n You may wish to check the fingerprint of the server certificate with the \n vtl fingerprint command before ...",t:"vtl addServer "},"1393":{i:0.00116867964246814,u:"../Content/Utilities/vtl/vtl_backup_command.htm",a:"This command will be deprecated in a future release. It is strongly recommended that you use the lunacm utility to backup your SafeNet Network HSM partitions. See  partition archive  in the Lunacm Command Reference Guide. Name vtl backup    - backup SafeNet Network HSM partition to slot Syntax vtl ...",t:"vtl backup"},"1394":{i:0.00107497931673045,u:"../Content/Utilities/vtl/vtl_backup_append_command.htm",a:"Name vtl backup   append Syntax vtl backup append -source \u003cslot# or label\u003e -p \u003csource password\u003e -target \u003cslot# or label\u003e -partition \u003cbackupHSM partitionname\u003e -r \u003cbackupHSM SO password\u003e -u \u003cbackup partition user password\u003e Description This command is used remotely to back up SafeNet Network HSM ...",t:"vtl backup append"},"1395":{i:0.00107497931673045,u:"../Content/Utilities/vtl/vtl_backup_delete_command.htm",a:" Name vtl backup   delete   Syntax vtl backup delete  -target \u003cslot# or label\u003e -partition \u003cbackupHSM partitionname\u003e Description This command is used remotely to delete backed-up SafeNet Network HSM partition contents from a specified slot or labeled partition on a backup HSM. See also: vtl backup ...",t:"vtl backup delete "},"1396":{i:0.00107497931673045,u:"../Content/Utilities/vtl/vtl_backup_restore_command.htm",a:" Name vtl backup   restore Syntax vtl backup restore -source \u003cslot# or label\u003e -partition \u003cbackupHSM partitionname\u003e -r \u003cbackupHSM SO password\u003e -u \u003cbackup partition user password\u003e -target \u003cslot# or label\u003e -p \u003csource password\u003e Description This command is used remotely to restore  SafeNet Network HSM ...",t:"vtl backup restore "},"1397":{i:0.00130341708675234,u:"../Content/Utilities/vtl/vtl_backup_token_commands.htm",a:"Name vtl backup   token Subcommands and Usage Subcommand   Description   factoryreset  Factory reset for backup token. See  vtl backup token factoryreset  . init  Initialize backup token. See  vtl backup token init  .  resize  Resize backup token container. See  vtl backup token resize  .  show ...",t:"vtl backup token"},"1398":{i:0.000604078838805112,u:"../Content/Utilities/vtl/vtl_backup_token_factoryreset_command.htm",a:" Name vtl backup   token factoryreset - factory reset a backup HSM.  Syntax vtl backup token factoryreset  -target \u003cslot# or label\u003e  Description This command factory-resets a backup HSM connected to the SafeNet Network HSM appliance. Options Option Description -target  \u003ctoken\u003e   (mandatory) label or ...",t:"vtl backup token factoryreset "},"1399":{i:0.000604078838805112,u:"../Content/Utilities/vtl/vtl_backup_token_init_command.htm",a:" Name vtl backup   token init - initialize a backup HSM.  Syntax vtl backup token init  -target \u003cslot# or label\u003e [ -label \u003clabel\u003e ] Description This command  initializes a backup HSM connected to the SafeNet Network HSM appliance. Options Option Description -target  \u003ctoken\u003e   (mandatory) label or ...",t:"vtl backup token init "},"1400":{i:0.000604078838805112,u:"../Content/Utilities/vtl/vtl_backup_token_resize_command.htm",a:" Name vtl backup   token resize - resize backup token container.  Syntax vtl backup token resize  -target \u003cslot# or label\u003e -container \u003ccontainer\u003e [ -size \u003csize\u003e ] Description This command  resizes a backup HSM partition (connected to the SafeNet Network HSM appliance). Options Option Description ...",t:"vtl backup token resize "},"1401":{i:0.000604078838805112,u:"../Content/Utilities/vtl/vtl_backup_token_show_command.htm",a:" Name vtl backup   token show - show backup HSM slots or slot info.  Syntax vtl backup token show  -target \u003cslot# or label\u003e  Description This command shows a summary of slots associated with a backup HSM connected to the SafeNet Network HSM appliance, or shows slot info for a named slot. Options ...",t:"vtl backup token show "},"1402":{i:0.000604078838805112,u:"../Content/Utilities/vtl/vtl_backup_token_show_licenses_command.htm",a:" Name vtl backup   token show licenses - show licenses for a backup HSM .  Syntax vtl backup token show licences -target \u003cslot# or label\u003e  Description This command shows a summary of licenses associated with a backup HSM connected to the SafeNet Network HSM appliance. Options Option Description ...",t:"vtl backup token show licenses "},"1403":{i:0.000604078838805112,u:"../Content/Utilities/vtl/vtl_backup_token_update_command.htm",a:" Name vtl backup   token update - update firmware or capability of a backup HSM.  Syntax vtl backup token update firmware -target \u003cslot# or label\u003e  vtl backup token update capability -target \u003cslot# or label\u003e  Description This command updates the firmware or the capabilities of a backup HSM. The ...",t:"vtl backup token update "},"1404":{i:0.000453700855439568,u:"../Content/Utilities/vtl/vtl_cklogsupport.htm",a:"Name  vtl cklogsupport Syntax vtl cklogsupport {enable | disable} Description Enable or disable CKLOG support. CKLOG is a facility which can record all interactions between an application and our PKCS#11-compliant library.  It allows a developer to debug an application by viewing what the library ...",t:"vtl cklogsupport"},"1405":{i:0.000641176011901739,u:"../Content/Utilities/vtl/vtl_createcert_clientcommand.htm",a:" Name vtl createCert  Syntax vtl createCert -n \u003ccommon name/server hostname\u003e [-c \n \u003ccountry code\u003e] [-s \u003cstate\u003e] [-l \u003clocality\u003e] [-o \u003corganization \n name\u003e] [-u \u003corganization unit name\u003e] [-e \u003ce-mail address\u003e] \n [-P \u003cprivate key out filename\u003e][-C \u003ccertificate out filename\u003e] [-d \u003ccertificate validity ...",t:"vtl createCert "},"1406":{i:0.000483366332402479,u:"../Content/Utilities/vtl/vtl_deleteserver_clientcommand.htm",a:" Name  vtl deleteServer \n  Syntax vtl deleteServer -n \u003cserverhostname\u003e Description Removes the given host from the list of trusted SafeNet Servers. View a \n list of all trusted servers with the command vtl listServers. Options -n \u003cserver hostname\u003e  [mandatory] \n The hostname (or IP address) of the ...",t:"vtl deleteServer "},"1407":{i:0.000483366332402479,u:"../Content/Utilities/vtl/vtl_examinecert_clientcommand.htm",a:" Name  vtl examineCert - Certificate details for this client\n  Syntax vtl examineCert [-f \u003cfilespec-of-serverCert.pem\u003e] [-h] Description Displays the details of the specified certificate. If the command is \n issued with no additional parameters, it returns the client certificate. \n  If the \n -f ...",t:"vtl examineCert "},"1408":{i:0.000483366332402479,u:"../Content/Utilities/vtl/vtl_fingerprint_clientcommand.htm",a:" Name  vtl fingerprint \n  Syntax vtl fingerprint [-f \u003cfilespec-of-serverCert.pem\u003e] [-h] Description Displays the fingerprint of the specified certificate. If the command \n is issued with no additional parameters, it returns the client fingerprint. \n  If the \n -f option is used, then a filespec is ...",t:"vtl fingerprint "},"1409":{i:0.000483366332402479,u:"../Content/Utilities/vtl/vtl_haadmin_clientcommand.htm",a:"The HA vtl subcommands are no longer supported, and are disabled. Use the lunacm hagroup commands to create and administer an HA \n group of SafeNet application partitions for this Client. See  hagroup . myname@mycomputer:~\u003evtl haAdmin Usage: vtl haAdmin (parameters): Subcommands Subcommand ...",t:"vtl haAdmin"},"1410":{i:0.00041942417417026,u:"../Content/Utilities/vtl/vtl_haadmin_addmember_clientcommand.htm",a:" This command is disabled. See lunacm command  hagroup addmember .  Name  vtl haAdmin addMember   - Add a member to an HA group Syntax vtl haAdmin addMember -group \u003cgroupNum\u003e -serialNum \n \u003cSN\u003e -password \u003cpassword\u003e Description Add a member to a HA group that already exists on this client. If network ...",t:"vtl haAdmin addMember "},"1411":{i:0.00041942417417026,u:"../Content/Utilities/vtl/vtl_haadmin_autorecovery_clientcommand.htm",a:" This command is disabled. See lunacm command   hagroup retry .  Name  vtl haAdmin \n autoRecovery      - Set the autorecovery interval and retries. Syntax vtl haAdmin autorecovery [ -retry \u003cretry count\u003e | -interval \u003cseconds\u003e ] Description Set the HA autoRecovery retry count value - a positive value ...",t:"vtl haAdmin autoRecovery "},});