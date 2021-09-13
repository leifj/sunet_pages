define({"860":{i:0.000440811048907249,u:"../Content/lunash/commands/user/user_role_list.htm",a:"List the available user roles that can be assigned to a user. The \"built-in\" account called \u0027admin\u0027 has the full \"admin\" role, the \"built-in\" account called \u0027operator\u0027 has the \"operator\" role, and \"built-in\" account called \u0027monitor\u0027 has the \"monitor\" role. Those three roles can also be ...",t:"user role list"},"861":{i:0.000391629327821635,u:"../Content/lunash/commands/webserver/webserver.htm",a:"webserver The webserver command set is available in LunaSH (lunash:\u003e) if your SafeNet Luna Network HSM appliance is at version 6.0 or higher, and you have the REST API configuration upgrade installed.  Syntax webserver bind certificate ciphers disable enable show",t:"webserver"},"862":{i:0.000426196328566342,u:"../Content/lunash/commands/webserver/webserver_bind.htm",a:"Bind the REST API service to a network interface and port.  User Privileges Users with the following privileges can perform this command: Admin Syntax webserver bind -netdevice \u003cnetdevice\u003e [-port \u003cport\u003e] [-force] [-restart] Example Attempting to bind the REST API service when the service is not ...",t:"webserver bind"},"863":{i:0.000426196328566342,u:"../Content/lunash/commands/webserver/webserver_certificate.htm",a:"webserver certificate Syntax webserver certificate generate show",t:"webserver certificate"},"864":{i:0.000551849946881038,u:"../Content/lunash/commands/webserver/webserver_certificate_generate.htm",a:"Generates a REST API Server certificate.   User Privileges Users with the following privileges can perform this command: Admin Syntax webserver certificate generate -keytype \u003ckey_type\u003e [-keysize \u003csize\u003e] [-curve \u003ccurve_name\u003e] [-restart] [-force] Example lunash:\u003ewebserver certificate generate -keytype ...",t:"webserver certificate generate"},"865":{i:0.000551849946881038,u:"../Content/lunash/commands/webserver/webserver_certificate_show.htm",a:"Shows the REST API Server certificate.   User Privileges Users with the following privileges can perform this command: Admin Syntax webserver certificate show Example lunash:\u003ewebserver certificate show   REST API Server Certificate:     Data:         Version: 3 (0x2)         Serial Number:           ...",t:"webserver certificate show"},"866":{i:0.000426196328566342,u:"../Content/lunash/commands/webserver/webserver_ciphers.htm",a:"webserver ciphers Set or show the REST API Server ciphers suite. Syntax webserver ciphers set show",t:"webserver ciphers"},"867":{i:0.000551849946881038,u:"../Content/lunash/commands/webserver/webserver_ciphers_set.htm",a:"Sets REST API Server ciphers suite. User Privileges Users with the following privileges can perform this command: Admin Syntax webserver ciphers set -list \u003ccipher_list\u003e [-restart] [-force] Example This example is small for illustrative purposes and does not reflect an adequate cipher suite for ...",t:"webserver ciphers set"},"868":{i:0.000551849946881038,u:"../Content/lunash/commands/webserver/webserver_ciphers_show.htm",a:"Show the REST API Server supported ciphers. User Privileges Users with the following privileges can perform this command: Admin Syntax webserver ciphers show Example lunash:\u003ewebserver ciphers show\n   Ciphers suite supported by REST API Server: ...",t:"webserver ciphers show"},"869":{i:0.000426196328566342,u:"../Content/lunash/commands/webserver/webserver_disable.htm",a:"Disable the REST API service. User Privileges Users with the following privileges can perform this command: Admin Syntax webserver disable [-force] Example lunash:\u003ewebserver disable   WARNING: This operation will stop and disable REST API Service !!!   Type \u0027proceed\u0027 to continue, or \u0027quit\u0027 to quit ...",t:"webserver disable"},"870":{i:0.000426196328566342,u:"../Content/lunash/commands/webserver/webserver_enable.htm",a:"Enable the REST API service. After enabling the service, use service start webserver to start the service. User Privileges Users with the following privileges can perform this command: Admin You must call webserver bind to access the REST API. Syntax webserver enable [-force] Example lunash:\u003e ...",t:"webserver enable"},"871":{i:0.000426196328566342,u:"../Content/lunash/commands/webserver/webserver_show.htm",a:"Display the REST API Server configuration.   User Privileges Users with the following privileges can perform this command: Admin Syntax webserver show Example lunash:\u003ewebserver show   REST API Service: ================== API Version: 5 Configuration: enabled Status: running IP address: 0.0.0.0 Port: ...",t:"webserver show"},"872":{i:0.000410076926815046,u:"../Content/REST_API/REST_API_User_Guide/FrontMatter.htm",a:"Revision History Trademarks, Copyrights, and Third-Party Software Copyright 2001-2019 Gemalto. All rights reserved. Gemalto and the Gemalto logo are trademarks and service marks of Gemalto and/or its subsidiaries and are registered in certain countries. All other trademarks and service marks, ...",t:"Document Information"},"873":{i:0.000416769257945408,u:"../Content/REST_API/REST_API_User_Guide/Preface/Preface.htm",a:"This document describes how to begin using the REST API and introduces a Python client development tool that promotes its automation. It contains the following chapters: Overview Getting Started The REST API Sample Clients Using the REST API This preface also includes the following information about ...",t:"About the REST API User Guide"},"874":{i:0.000410076926815046,u:"../Content/REST_API/REST_API_User_Guide/Preface/CRN.htm",a:"Customer Release Notes The customer release notes (CRN) provides details regarding the capabilities, limitations, and known issues for this release. You can view or download the latest revision from the Gemalto eService Support Portal at  https://serviceportal.gemalto.com .",t:"Customer Release Notes"},"875":{i:0.000410076926815046,u:"../Content/REST_API/REST_API_User_Guide/Preface/Audience.htm",a:"This document is intended for personnel responsible for maintaining your organization\u0027s security infrastructure. This includes Luna HSM users and security officers, key manager administrators, and network administrators. All products manufactured and distributed by Gemalto are designed to be ...",t:"Audience"},"876":{i:0.000410076926815046,u:"../Content/REST_API/REST_API_User_Guide/Preface/Conventions.htm",a:"This document uses standard conventions for describing the user interface and for alerting you to important information.  Notes Notes are used to alert you to important or helpful information. They use the following format: Take note. Contains important or helpful information. Cautions Cautions are ...",t:"Document Conventions"},"877":{i:0.000410076926815046,u:"../Content/REST_API/REST_API_User_Guide/Preface/Support.htm",a:"If you encounter a problem while installing, registering or operating this product, please make sure that you have read the documentation. If you cannot resolve the issue, please contact your supplier or Gemalto support. Gemalto support operates 24 hours a day, 7 days a week. Your level of access to ...",t:"Support Contacts"},"878":{i:0.00273328822685913,u:"../Content/REST_API/REST_API_User_Guide/Overview.htm",a:"In addition to the long-standing Luna shell, administrators now have the ability to use a representational state transfer application programming interface — REST-ful API — to configure and query the appliance. The REST API\u0027s advantage is its lightweight architecture. It is a simple mechanism that ...",t:"Overview"},"879":{i:0.000410076926815046,u:"../Content/REST_API/REST_API_User_Guide/start_Luna_7.htm",a:"To use the REST API you must configure and enable the webserver on any SafeNet Luna Network HSMs you want to communicate with using the REST API, and install the SafeNet Luna client on any client workstation you want to use to communicate with a SafeNet Luna Network HSM using the REST API. To ...",t:"Getting Started"},"880":{i:0.000758645050308931,u:"../Content/REST_API/REST_API_User_Guide/Client/The REST API Client.htm",a:"The REST API package includes a sample Python client and a sample Web client. These sample clients primarily serve as test tools to demonstrate interactions between the REST framework and communicating appliances. They are especially useful for new users . The clients are organized to make running ...",t:"The REST API Sample Clients"},"881":{i:0.000585666367592437,u:"../Content/REST_API/REST_API_User_Guide/Client/Sample Workflow.htm",a:"A high-level workflow example in the REST API client is provided in this section. Some basic operations you can perform with the REST API client include:  Logging in to an HSM or partition directly or remotely, PED authentication and operation, Automation of services running with the REST API, ...",t:"Sample Workflow"},"882":{i:0.000655291739987095,u:"../Content/REST_API/REST_API_User_Guide/Client/Python_Client/Python_Client.htm",a:"The REST API Python client opens alongside a Python command window that tracks the usage of the client, as seen in  User Interface . User Interface Along the top of the client dialog box are tabs containing clusters of  commands the REST API can perform. Underneath each tab are buttons and prompts ...",t:"Using the Python Client"},"883":{i:0.00293497928321847,u:"../Content/REST_API/REST_API_User_Guide/Client/Python_Client/Login.htm",a:"To begin using the REST API, you must first login. The client provides several different login options under the Login tab. The top two options, API Password Login and API Cert Login, login to the API on the appliance you are using. API Password Login uses password-based authentication, while ...",t:"Login"},"884":{i:0.00293497928321847,u:"../Content/REST_API/REST_API_User_Guide/Client/Python_Client/Commands.htm",a:"The Commands tab contains most of the operations you will be performing with the REST API. The Defaults section running along the top contains the HSM and partition serial numbers you entered on the Login tab (see Commands Tab showing an error on Raw IO ). If you wish to use  a different HSM or ...",t:"Commands"},"885":{i:0.00293497928321847,u:"../Content/REST_API/REST_API_User_Guide/Client/Python_Client/Service.htm",a:"Services are applications that work with REST API to communicate  and manipulate information for external elements, like a server connected through a network. The Service tab contains operations you may perform with the services you are using. The Defaults section running along the top contains the ...",t:"Service"},"886":{i:0.00293497928321847,u:"../Content/REST_API/REST_API_User_Guide/Client/Python_Client/Appliance.htm",a:"The Appliance tab contains appliance-level administration commands. If you can only login to your appliance, and not to an HSM or partition, these are the available operations. If you are able to access an HSM or partition, the HSM and partition serial numbers you entered on the Login tab appear in ...",t:"Appliance"},"887":{i:0.00293497928321847,u:"../Content/REST_API/REST_API_User_Guide/Client/Python_Client/Custom IO.htm",a:"The Custom IO tab allows you to input requests manually. Instead of clicking a button to query a resource, you can specify a resource by its verb form and request a custom payload (see  Custom IO Tab ). This tab is useful if you are familiar with the commands and do not want to switch through ...",t:"Custom IO"},"888":{i:0.00293497928321847,u:"../Content/REST_API/REST_API_User_Guide/Client/Python_Client/Options.htm",a:"The Options tab contains selections you can invoke or remove, depending on your REST API use preferences (see  Options Tab ). Options Tab To change an option: Select options you want to invoke; deselect those you do not want.  You can use any combination of selections, including all or none.  ...",t:"Options"},"889":{i:0.00293497928321847,u:"../Content/REST_API/REST_API_User_Guide/Client/Python_Client/Macros.htm",a:"The Macros tab allows you to  automate your REST API use  by using a macro instruction file (see Macros Tab ). This tab is useful if you want to build or run a list of commands in a specific order, or multiple times as a test. You can also use Macros to ensure that a long list of commands is ...",t:"Macros"},"890":{i:0.000585666367592437,u:"../Content/REST_API/REST_API_User_Guide/Client/Web_Client/Web_Client.htm",a:"The web client window opens in a browser of your choice, or the default browser on your machine. To begin using the REST API with the web client, you must login. Home Window Login Login Dialog Logging into the appliance is necessary to use the REST API. The Login button on the home page uses ...",t:"Using the  Web Client"},"891":{i:0.000453685203316069,u:"../Content/REST_API/REST_API_User_Guide/Client/Web_Client/Custom IO.htm",a:"The Custom IO tab allows you to input verb requests manually.  Instead of clicking a button to query a resource, you can specify a resource by its verb form and request a custom payload. This tab is useful if you are familiar with the commands and do not want to switch through various tabs in the ...",t:"Custom IO"},"892":{i:0.00302392321407792,u:"../Content/REST_API/REST_API_User_Guide/Client/Web_Client/HSM.htm",a:"The HSM tab contains commands related to the HSM or partition you want to work with. Depending on how you want to authenticate, and to which element, there are different drop-down menus for each method and machine. The HSM and Partition menu Login buttons are used for password-based or local ...",t:"HSM"},"893":{i:0.000453685203316069,u:"../Content/REST_API/REST_API_User_Guide/Client/Web_Client/Tasks.htm",a:"Tasks  enable monitoring and administering of REST API resources that may require significant time to complete, such as updating HSM firmware. Rather than block and wait for these time-consuming actions to complete, REST API creates tasks to run the resource automatically in the background. Tasked ...",t:"Tasks"},"894":{i:0.00302392321407792,u:"../Content/REST_API/REST_API_User_Guide/Client/Web_Client/Service.htm",a:"Services are applications that work with REST API to communicate with and manipulate information for external elements like a PC connected through a network. The Service tab contains actions you may perform with the services you are using. To perform a command: Select which service you want to ...",t:"Service"},"895":{i:0.000453685203316069,u:"../Content/REST_API/REST_API_User_Guide/Client/Web_Client/Config.htm",a:"The Config tab contains commands specifically related to the configuration of your appliance.  Login to an HSM or partition is not necessary to perform operations on your appliance. However, you are limited to only these operations. Login to an HSM or partition to make full use of the REST API. ...",t:"Config"},"896":{i:0.000453685203316069,u:"../Content/REST_API/REST_API_User_Guide/Client/Web_Client/Appliance.htm",a:"The Appliance tab contains basic commands related to your appliance.  Login to an HSM or partition is not necessary to perform operations on your appliance. However, you are limited to only these operations. Login to an HSM or partition to make full use of the REST API. Appliance Tab The table below ...",t:"Appliance"},"897":{i:0.000410076926815046,u:"../Content/REST_API/REST_API_User_Guide/Using the REST API/Using the REST API.htm",a:"Using the REST API This chapter provides information on the setup of several services on the REST API. It contains the following topics: Setting up NTLS Setting up STC Setting up Public-Key Authentication",t:"Using the REST API"},"898":{i:0.00564389322526431,u:"../Content/REST_API/REST_API_User_Guide/Using the REST API/Setting up NTLS.htm",a:"The steps for registering an NTLS client are described in this recipe. It is assumed that you are authenticated with the REST API.   Step 1: Generate client certificate Step 2: Create client on SA Step 3: Add server on client Step 4: Register a partition Step 5: Verify Step 1: Generate client ...",t:"Setting up NTLS"},"899":{i:0.000846796449011326,u:"../Content/REST_API/REST_API_User_Guide/Using the REST API/Setting up STC.htm",a:"This recipe will describe how to set up STC. It is assumed that you have already exchanged certs with the appliance. For a recipe on how to exchange certificates with the appliance see  Setting up NTLS . This Recipe requires both Admin API authentication and HSM API authentication.   Step 1: ...",t:"Setting up STC"},"900":{i:0.00324534483713782,u:"../Content/REST_API/REST_API_User_Guide/Using the REST API/Setting up Public-Key Authentication.htm",a:"The steps for logging in with a public key via REST API are described in this recipe.   Step 1: Create Challenge Step 2: Decrypt challenge Step 3: XOR Step 4: Encrypt answer Step 5: Answer the challenge   This assumes you have already registered a public key with the server. Instructions below if ...",t:"Setting up Public-Key Authentication"},"901":{i:0.000416769257945408,u:"../Content/REST_API/REST_API_Reference_Guide/html/index.html",a:"REST API: Main Page",t:"index"},"902":{i:0.000398462296491896,u:"../Content/Utilities/FrontMatter.htm",a:"Revision History Trademarks, Copyrights, and Third-Party Software Copyright 2001-2019 Gemalto. All rights reserved. Gemalto and the Gemalto logo are trademarks and service marks of Gemalto and/or its subsidiaries and are registered in certain countries. All other trademarks and service marks, ...",t:"Document Information"},"903":{i:0.000391722424877263,u:"../Content/Utilities/Preface/Preface.htm",a:"This document describes how to use the various utilities included with the SafeNet Luna HSM client. It contains the following chapters: Certificate Management Utility (CMU) ckdemo multitoken Remote Backup Service (RBS) salogin SCP and PSCP VTL This preface also includes the following information ...",t:"About the Utilities Reference Guide"},"904":{i:0.000398462296491896,u:"../Content/Utilities/Preface/CRN.htm",a:"The customer release notes (CRN) provide important information about this release that is not included in the customer documentation. Read the CRN to fully understand the capabilities, limitations, and known issues for this release. You can view or download the latest version of the CRN from the ...",t:"Customer Release Notes"},"905":{i:0.000398462296491896,u:"../Content/Utilities/Preface/Audience.htm",a:"This document is intended for personnel responsible for maintaining your organization\u0027s security infrastructure. This includes SafeNet Luna HSM users and security officers, key manager administrators, and network administrators. All products manufactured and distributed by Gemalto are designed to be ...",t:"Audience"},"906":{i:0.000398462296491896,u:"../Content/Utilities/Preface/Conventions.htm",a:"This document uses standard conventions for describing the user interface and for alerting you to important information.  Notes Notes are used to alert you to important or helpful information. They use the following format: Take note. Contains important or helpful information. Cautions Cautions are ...",t:"Document Conventions"},"907":{i:0.000398462296491896,u:"../Content/Utilities/Preface/Support.htm",a:"If you encounter a problem while installing, registering, or operating this product, please refer to the documentation before contacting support. If you cannot resolve the issue, contact your supplier or  Gemalto Customer Support . Gemalto Customer Support operates 24 hours a day, 7 days a week. ...",t:"Support Contacts"},"908":{i:0.000398462296491896,u:"../Content/Utilities/cmu/cmu.htm",a:"This is a general-purpose tool intended for use across SafeNet HSM versions. It might reference mechanisms and features that are not available on all SafeNet products. This chapter  provides a detailed description of each of the functions \n available in the SafeNet Certificate Management Utility. It ...",t:"Certificate Management Utility (CMU)"},"909":{i:0.000480731684140166,u:"../Content/Utilities/cmu/about_cmu_functions.htm",a:"This section provides a detailed description of each  function \n available in the Certificate Management Utility. The command function is the first parameter on the command line that \n invokes the CMU application. It does not require a leading dash character. \n All options follow the command ...",t:"About the CMU Functions"},"910":{i:0.000393294782268703,u:"../Content/Utilities/cmu/cmu_certify.htm",a:"This function creates an X.509 V3 certificate from a PKCS #10 certificate \nrequest. The parent certificate and corresponding private key must already \nexist on the token or HSM. The private key is located on the token using \nthe public key information inside the parent certificate. Syntax cmu ...",t:"cmu certify"},"911":{i:0.000393294782268703,u:"../Content/Utilities/cmu/cmu_delete.htm",a:"This function deletes a key, certificate, or generic data object on the \n token. A confirmation message is presented to the user, describing the \n class and label of the object about to be deleted. Syntax cmu delete {[-handle=\u003chandle#\u003e] | [-certlabel=\u003clabel\u003e ] |  [-privatelabel=\u003clabel\u003e ] | ...",t:"cmu delete"},"912":{i:0.000393294782268703,u:"../Content/Utilities/cmu/cmu_export.htm",a:"This function exports an X.509 certificate or public key from the token or HSM to \na file. The supported formats are Raw (binary) and PEM (base 64 encoding).  Syntax cmu export{ [-handle=\u003chandle#\u003e] |  [-label=\u003clabel\u003e] } -outputfile=\u003cfilename\u003e [-binary] [-key]  [-certdelete] [-password=\u003cpassword\u003e] ...",t:"cmu export"},"913":{i:0.000393294782268703,u:"../Content/Utilities/cmu/cmu_generatekeypair.htm",a:"This function generates an asymmetric key pair on the token or HSM. \n An optional input filename can be used to specify a file from which mandatory \n and optional attributes are to be read.  For DSA key generation, the domain parameters (Prime, Subprime, and Base) are required, and must be provided ...",t:"cmu generatekeypair"},"914":{i:0.000393294782268703,u:"../Content/Utilities/cmu/cmu_getattribute.htm",a:"This function outputs any viewable attributes for an object. An optional \n output filename can be used to direct the output to a file. Syntax cmu getAttribute -handle=\u003chandle#\u003e [-attributes=\u003cattribute(s)\u003e] [-outputFile=\u003cfilename\u003e]  [-password=\u003cpassword\u003e] [-slot=\u003cslot#\u003e]  Example The following ...",t:"cmu getattribute"},"915":{i:0.000393294782268703,u:"../Content/Utilities/cmu/cmu_getpkc.htm",a:"Retrieve a Public Key Confirmation from the HSM. Syntax cmu getpkc [-handle=\u003chandle#\u003e] [-outputfile=\u003cfilename\u003e] [-pkctype=\u003ctype\u003e] [-verify]  [-password=\u003cpassword\u003e] [-slot=\u003cslot#\u003e]  If you run the command with no parameters, you are prompted for the mandatory ones.  Example cmu getpkc –handle=5 ...",t:"cmu getpkc"},"916":{i:0.000393294782268703,u:"../Content/Utilities/cmu/cmu_import.htm",a:"This function:  Imports X.509 certificates from a file to the token or \n HSM. The file may include a single DER encoded binary certificate or a \n CMSS PKCS #7 certificate or certificate set. Either type of certificate \n can be binary or PEM (base 64) encoded. An optional label can be defined \n as a ...",t:"cmu import"},"917":{i:0.000393294782268703,u:"../Content/Utilities/cmu/cmu_importkey.htm",a:"This function unwraps an RSA, DSA , or ECDSA private key onto the selected token or \n HSM. The key file may be in any of the following formats: PKCS #12(PFX) RSA in a DER-encoded format (.pfx file) PKCS #8(Unencrypted PrivatekeyInfo) in RSA or DSA in base 64 PEM, or binary DER format PKCS #1 (RSA in ...",t:"cmu importkey"},"918":{i:0.000393294782268703,u:"../Content/Utilities/cmu/cmu_list.htm",a:"This function lists all objects (keys, certificates and other general \n data objects) on the HSM that match an optional set of search criteria \n and that are accessible given the authentication state of the HSM. Search \n criteria can include many of the object attributes that are available \n for ...",t:"cmu list"},"919":{i:0.000393294782268703,u:"../Content/Utilities/cmu/cmu_requestcertificate.htm",a:"This function creates a PKCS #10 certificate request for an RSA/DSA/ECDSA key \n pair on the token or HSM. It must be provided with the handle either to\n the public key or to the corresponding private key (all of the public \n key components are contained within the private key). The private key must ...",t:"cmu requestcertificate"},"920":{i:0.000393294782268703,u:"../Content/Utilities/cmu/cmu_selfsigncertificate.htm",a:"This function creates a self-signed X.509 certificate for an RSA, DSA, or ECDSA key \n pair on the token or HSM. It must be provided with the handles to both \n the public key and the corresponding private key (all of the public key \n components are contained within the private key). The private key ...",t:"cmu selfsigncertificate"},"921":{i:0.000393294782268703,u:"../Content/Utilities/cmu/cmu_setattribute.htm",a:"This function sets any modifiable attributes for an object. An optional \ninput filename can be used to specify a file from which the new attribute \n values are to be read.  Syntax cmu setAttribute -handle=\u003chandle#\u003e [-inputFile=\u003cfilename\u003e] [-label=\u003clabel\u003e] [-application=\u003cvalue\u003e] [-value=\u003cvalue\u003e] ...",t:"cmu setattribute"},"922":{i:0.000726094031578332,u:"../Content/Utilities/cmu/cmu_verifyhsm.htm",a:"Verify a Public Key Confirmation from a Luna HSM.  This command allows you to verify that the client is connected to a genuine Luna HSM, by creating and verifying a confirmation on a temporary key created in the HSM. It also includes a proof of possession that asks the HSM to sign a user-entered ...",t:"cmu verifyhsm"},"923":{i:0.000393294782268703,u:"../Content/Utilities/cmu/cmu_verifypkc.htm",a:"cmu verifypkc Verify a Public Key Confirmation from the HSM.  Syntax cmu verifypkc -inputFile=\u003cfilename\u003e -pkctype=\u003ctype\u003e  [-password=\u003cpassword\u003e] [-slot=\u003cslot#\u003e]  Example cmu verifypkc –inputFile=test.pkc –pkctype=1",t:"cmu verifypkc"},"924":{i:0.000398462296491896,u:"../Content/Utilities/ckdemo/ckdemo.htm",a:"This is a general-purpose tool intended for use across SafeNet HSM versions. It might reference mechanisms and features that are not available on all SafeNet products. The ckdemo utility is a simple console-based tool that provides a menu of functions that perform operations based on the PKCS#11 ...",t:"ckdemo"},"925":{i:0.00039490761840931,u:"../Content/Utilities/ckdemo/audit_log_functions.htm",a:"AUDIT/LOG Menu Functions The AUDIT/LOG menu provides the following functions:",t:"AUDIT/LOG Menu Functions"},"926":{i:0.00039490761840931,u:"../Content/Utilities/ckdemo/ca_functions.htm",a:"CA Menu Functions The CA menu provides the following functions:",t:"CA Menu Functions"},"927":{i:0.00039490761840931,u:"../Content/Utilities/ckdemo/cluster_execution_functions.htm",a:"CLUSTER EXECUTION Menu Functions The CLUSTER EXECUTION menu and its functions are to be deprecated in a future release, and are not usable.",t:"CLUSTER EXECUTION Menu Functions"},"928":{i:0.00184290049967761,u:"../Content/Utilities/ckdemo/high_availability_recovery_functions.htm",a:"HIGH AVAILABILITY RECOVERY Menu Functions The HIGH AVAILABILITY RECOVERY menu provides the following functions:",t:"HIGH AVAILABILITY RECOVERY Menu Functions"},"929":{i:0.00039490761840931,u:"../Content/Utilities/ckdemo/key_functions.htm",a:"KEY Menu Functions The KEY menu provides the following functions:",t:"KEY Menu Functions"},"930":{i:0.00039490761840931,u:"../Content/Utilities/ckdemo/object_management_functions.htm",a:"OBJECT MANAGEMENT Menu Functions The OBJECT MANAGEMENT menu provides the following functions:",t:"OBJECT MANAGEMENT Menu Functions"},"931":{i:0.00039490761840931,u:"../Content/Utilities/ckdemo/offboard_key_storage_functions.htm",a:"OFFBOARD KEY STORAGE Menu Functions The OFFBOARD KEY STORAGE menu provides the following functions:",t:"OFFBOARD KEY STORAGE Menu Functions"},"932":{i:0.00486946236773492,u:"../Content/Utilities/ckdemo/others_functions.htm",a:"OTHERS Menu Functions The OTHERS menu provides the following functions: (98) Options Use option 16 if HSM firmware is newer than version 6.22.0 and you wish to use CKR_TEMPLATE_INCONSISTENT.",t:"OTHERS Menu Functions"},"933":{i:0.00039490761840931,u:"../Content/Utilities/ckdemo/ped_info_functions.htm",a:"PED INFO Menu Functions The PED INFO menu provides the following functions:",t:"PED INFO Menu Functions"},"934":{i:0.00039490761840931,u:"../Content/Utilities/ckdemo/policy_functions.htm",a:"POLICY Menu Functions The Policy menu provides the following functions:",t:"POLICY Menu Functions"},"935":{i:0.00039490761840931,u:"../Content/Utilities/ckdemo/script_execution_functions.htm",a:"SCRIPT EXECUTION Menu Functions The SCRIPT EXECUTION menu and its functions are to be deprecated in a future release, and are not usable.",t:"SCRIPT EXECUTION Menu Functions"},"936":{i:0.00039490761840931,u:"../Content/Utilities/ckdemo/security_functions.htm",a:"SECURITY Menu Functions The SECURITY menu provides the following functions:",t:"SECURITY Menu Functions"},"937":{i:0.00039490761840931,u:"../Content/Utilities/ckdemo/srk_functions.htm",a:"SRK Menu Functions These functions are not applicable to SafeNet Luna HSMs with firmware 7.x or newer. The SRK menu provides the following functions:",t:"SRK Menu Functions"},"938":{i:0.00039490761840931,u:"../Content/Utilities/ckdemo/token_functions.htm",a:"TOKEN Menu Functions The TOKEN menu provides the following functions:",t:"TOKEN Menu Functions"},});