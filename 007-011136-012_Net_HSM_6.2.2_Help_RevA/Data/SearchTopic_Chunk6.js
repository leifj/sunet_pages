define({"411":{i:0.000434064136059777,u:"../Content/lunacm/commands/hsm/hsm_contents.htm",a:"Show the contents of the SO space. If the SO is logged in, this command displays the contents of the SO space (exclusive of user partition contents). If the SO is not logged in, this command displays all SO objects that are available from a public session. The lunacm hsm commands appear only when ...",t:"hsm contents"},"412":{i:0.00109003495120294,u:"../Content/lunacm/commands/hsm/hsm_factoryreset.htm",a:"Reset the HSM to its factory configuration. Use this command to set the HSM back to factory default settings, clearing all contents (puts HSM in zeroized state). Because this is a destructive command, the user is asked to “proceed” unless the -force switch is provided at the command line.  This ...",t:"hsm factoryreset"},"413":{i:0.00109483823335728,u:"../Content/lunacm/commands/hsm/hsm_init.htm",a:"Initialize the HSM. Initializing the HSM erases all existing data on the key card, including any HSM Partition and its data. HSM Partition then must be recreated with the partition create command. Because this is a destructive command, the user is asked to “proceed” unless the -force switch is ...",t:"hsm init"},"414":{i:0.000434064136059777,u:"../Content/lunacm/commands/hsm/hsm_login.htm",a:"Login to the HSM as the security officer (SO). The lunacm hsm commands appear only when the current slot selected in lunacm is for a locally-installed HSM, such as a SafeNet PCIe HSM or SafeNet USB HSM. When lunacm is directed at a slot corresponding to a remote SafeNet Network HSM, the HSM-level ...",t:"hsm login"},"415":{i:0.000434064136059777,u:"../Content/lunacm/commands/hsm/hsm_logout.htm",a:"Logout the security officer (SO) from the HSM. The lunacm hsm commands appear only when the current slot selected in lunacm is for a locally-installed HSM, such as a SafeNet PCIe HSM or SafeNet USB HSM. When lunacm is directed at a slot corresponding to a remote SafeNet Network HSM, the HSM-level ...",t:"hsm logout"},"416":{i:0.000434064136059777,u:"../Content/lunacm/commands/hsm/hsm_migratepedkey.htm",a:"Migrate the PED key contents. use this command to copy the contents of a Version 1.x SafeNet PED Key (looks like a colorful toy key) to a Version 2.x SafeNet PED USB iKey. This operation requires both a version 1.14 SafeNet PED (no earlier version will work - contact SafeNet Customer Support) and a ...",t:"hsm migratepedkey"},"417":{i:0.000766255664808534,u:"../Content/lunacm/commands/hsm/hsm_monitor.htm",a:"Query the HSM for performance monitoring statistics, such as HSM up time, command counts, and utilization. You can display the information or save it to a file. This command requires HSM firmware version 6.20.0 or newer. If you run the command against a slot with older firmware, expect an error ...",t:"hsm monitor"},"418":{i:0.000434064136059777,u:"../Content/lunacm/commands/hsm/hsm_recoveryinit.htm",a:"Rerforms a recovery (formerly High Availability) initialization on the current active session. Syntax hsm recoveryinit [-plabel \u003crsapublickeylabel\u003e -rlabel \u003crsaprivatekeylabel\u003e -keyhandle \u003crsaprivatekeyhandle\u003e] [-force] -password Parameter Shortcut Description -plabel -pl  \tRSA Public key label. ...",t:"hsm recoveryinit"},"419":{i:0.000434064136059777,u:"../Content/lunacm/commands/hsm/hsm_recoverylogin.htm",a:"Perform a High Availability login on the current active session. The lunacm hsm commands appear only when the current slot selected in lunacm is for a locally-installed HSM, such as a SafeNet PCIe HSM or SafeNet USB HSM. When lunacm is directed at a slot corresponding to a remote SafeNet Network ...",t:"hsm recoverylogin"},"420":{i:0.000434064136059777,u:"../Content/lunacm/commands/hsm/hsm_reset.htm",a:"Reset the SafeNet HSM. Use this command to reset the SafeNet HSM if it has stopped responding, but your computer is still responsive. This command closes out any login status and open sessions. If you are a developer, trace what you were doing at the time the problem occurred and try to find another ...",t:"hsm reset"},"421":{i:0.000434064136059777,u:"../Content/lunacm/commands/hsm/hsm_restart.htm",a:"Restart the SafeNet HSM. Use this command to restart the SafeNet HSM if it has stopped responding, but your computer is still responsive. This command closes out any login status and open sessions. If you are a developer, trace what you were doing at the time the problem occurred and try to find ...",t:"hsm restart"},"422":{i:0.000434064136059777,u:"../Content/lunacm/commands/hsm/hsm_restoreuser.htm",a:"Insert a backed-up user partition into the HSM. The lunacm hsm commands appear only when the current slot selected in lunacm is for a locally-installed HSM, such as a SafeNet PCIe HSM or SafeNet USB HSM. When lunacm is directed at a slot corresponding to a remote SafeNet Network HSM, the HSM-level ...",t:"hsm restoreuser"},"423":{i:0.000434064136059777,u:"../Content/lunacm/commands/hsm/hsm_restoresim2.htm",a:"Insert backed-up SO objects into the HSM. When a Scalable Key Storage2-portable blob is created, the options to protect it are: none an authentication text string. Therefore, this restore/import operation offers the option to supply an unlocking/authentication text string in case one was used to ...",t:"hsm restoresim2"},"424":{i:0.000434064136059777,u:"../Content/lunacm/commands/hsm/hsm_rollbackfw.htm",a:"Rollback the HSM firmware to the previously installed version. Only the previously installed version is available for rollback. Rollback allows you to try a new firmware version (hsm updatefw) without permanently committing to the new version. For PED-authenticated HSMs, you must disable SRK before ...",t:"hsm rollbackfw"},"425":{i:0.000434064136059777,u:"../Content/lunacm/commands/hsm/hsm_setlagacydomain.htm",a:"Set the legacy cloning domain on the HSM. You must set the legacy cloning domain to migrate the contents of a legacy SafeNet HSM to a release 6.x SafeNet HSM. The legacy cloning domain for password-authenticated HSM partitions is the text string that was used as a cloning domain on the legacy token ...",t:"hsm setlagacydomain"},"426":{i:0.000434064136059777,u:"../Content/lunacm/commands/hsm/hsm_showinfo.htm",a:"Display HSM-level information. The lunacm hsm commands appear only when the current slot selected in lunacm is for a locally-installed HSM, such as a SafeNet PCIe HSM or SafeNet USB HSM. When lunacm is directed at a slot corresponding to a remote SafeNet Network HSM, the HSM-level commands do not ...",t:"hsm showinfo"},"427":{i:0.000434064136059777,u:"../Content/lunacm/commands/hsm/hsm_showmechanism.htm",a:"Displays a list of the  cryptographic mechanisms supported on the HSM. The lunacm hsm commands appear only when the current slot selected in lunacm is for a locally-installed HSM, such as a SafeNet PCIe HSM or SafeNet USB HSM. When lunacm is directed at a slot corresponding to a remote SafeNet ...",t:"hsm showmechanism"},"428":{i:0.000434064136059777,u:"../Content/lunacm/commands/hsm/hsm_showpolicies.htm",a:"Displays the HSM-level capability and policy settings for the HSM [and for the SO - deprecated; see notes below]. Some mechanisms (such as KCDSA) are not enabled unless you have purchased and installed the required Secure Capability Update package. If you require a particular mechanism, and do not ...",t:"hsm showpolicies"},"429":{i:0.000434064136059777,u:"../Content/lunacm/commands/hsm/hsm_smkclone.htm",a:"Clone the Scalable Key Storage Masking Key (SMK) from the current slot to the target slot. This command overwrites the SMK of the target slot. The lunacm hsm commands appear only when the current slot selected in lunacm is for a locally-installed HSM, such as a SafeNet PCIe HSM or SafeNet USB HSM. ...",t:"hsm smkclone"},"430":{i:0.000552902609068441,u:"../Content/lunacm/commands/hsm/hsm_updatecap.htm",a:"Perform an update of the HSM capabilities on the SafeNet HSM. When updatable \n features and capabilities are made available from SafeNet, from time to \n time, this command is the means to implement such features on your existing SafeNet HSM. That is, if you purchase an advanced capability upgrade, ...",t:"hsm updatecap"},"431":{i:0.000434064136059777,u:"../Content/lunacm/commands/hsm/hsm_updatefw.htm",a:"Update the firmware on the SafeNet HSM. LunaCM performs an automatic restart following a firmware update. The lunacm hsm commands appear only when the current slot selected in lunacm is for a locally-installed HSM, such as a SafeNet PCIe HSM or SafeNet USB HSM. When lunacm is directed at a slot ...",t:"hsm updatefw"},"432":{i:0.000447804387663598,u:"../Content/lunacm/commands/partition/partition.htm",a:"Access the partition-level commands.  The partition command with no options shows the partition commands available to be used in the current slot.  The availability of partition commands changes according to four possible scenarios:   - the current slot is the HSM administrative partition for an HSM ...",t:"partition"},"433":{i:0.00041942417417026,u:"../Content/lunacm/commands/partition/partition_activate.htm",a:"Cache Partition PED Key data [SafeNet PCIe HSM with PED (Trusted Path) Authentication only]. Use this command to cache a Partition\u0027s PED Key data. Clients can then connect, authenticate with their Partition password (challenge secret), and perform operations with Partition objects, without need for ...",t:"partition activate"},"434":{i:0.000631229259760038,u:"../Content/lunacm/commands/partition/partition_archive.htm",a:"Access the partition archive commands.  An archive (backup) device can be one of the following: an HSM in another slot in the current system. a backup HSM connected to a remote workstation. a USB-attached HSM connected directly to a SafeNet PCIe HSM. a SFF backup token (SafeNet iKey e7300) USB ...",t:"partition archive"},"435":{i:0.000526734996709479,u:"../Content/lunacm/commands/partition/partition_archive_backup.htm",a:"Backup partition objects. Use this command to backup objects from the current user partition to a partition on a backup device.  If the domains of your source and target HSMs do not match or the policy settings do not permit backup, the partition archive backup command fails.   No objects are cloned ...",t:"partition archive backup"},"436":{i:0.000526734996709479,u:"../Content/lunacm/commands/partition/partition_archive_contents.htm",a:"Display the contents of a specified backup partition on the backup device in the specified slot. If you want to use this command to view the contents of an SFF token, you must be logged into an HSM partition that has the SFF capability enabled. You can be logged into any SFF-enabled partition – it ...",t:"partition archive contents"},"437":{i:0.000526734996709479,u:"../Content/lunacm/commands/partition/partition_archive_delete.htm",a:"Delete the specified partition on the backup device in the specified slot. Syntax partition archive d -s \u003cslot\u003e -par \u003cpartition name\u003e -pas \u003cpassword\u003e Parameter Shortcut Description -commandtimeout -ct The command timeout for network communication. The default timeout is 10 seconds. The maximum ...",t:"partition archive delete"},"438":{i:0.000526734996709479,u:"../Content/lunacm/commands/partition/partition_archive_list.htm",a:"Display a list of the backup partitions on a backup device in a specified slot. If you want to use this command to list the partition on an SFF token, you must be logged into a partition that has the SFF capability enabled. You can be logged into any SFF-enabled partition – it is not necessary to ...",t:"partition archive list"},"439":{i:0.000526734996709479,u:"../Content/lunacm/commands/partition/partition_archive_restore.htm",a:"Restore partition objects from a backup. Use this command to restore objects from the specified backup partition, in a backup HSM, in a specified slot, to the current user partition. Syntax partition archive restore -slot \u003cslot\u003e -pas \u003cpassword\u003e -par \u003cbackup partition\u003e Parameter Shortcut Description ...",t:"partition archive restore"},"440":{i:0.000788311114248785,u:"../Content/lunacm/commands/partition/partition_changepolicy.htm",a:"partition changepolicy Change a user policy on the partition. Syntax partition changepolicy -policy \u003cpolicy_id\u003e -value \u003cpolicy_value\u003e Parameter Shortcut Description -policy -p Specifies the ID of the policy you want to change. -value -v Specifies the new value for the specified policy.",t:"partition changepolicy"},"441":{i:0.00043254965724362,u:"../Content/lunacm/commands/partition/partition_changepw.htm",a:"Change Partition User password. Use this command to change the password that authenticates the Crypto Officer or Crypto User and/or the client to the application partition. You, as User (or Crypto Officer), need to know the current password in order to change it. Contrast this command with the ...",t:"partition changepw"},"442":{i:0.00043254965724362,u:"../Content/lunacm/commands/partition/partition_clear.htm",a:"Delete User Partition objects. You must be logged in as the user to delete User partition objects. The partition structure remains in place. The objects are deleted as soon as the command is executed, without requesting confirmation. Syntax partition clear Example lunacm:\u003e partition clear   Command ...",t:"partition clear"},"443":{i:0.00051067788038546,u:"../Content/lunacm/commands/partition/partition_clone.htm",a:"Clone User partition objects from the HSM into another HSM installed in the same computer. Syntax partition clone -objects \u003chandles\u003e [-force] -password \u003cpassword\u003e -slot \u003cslot number\u003e Parameter Shortcut Description -force -fo Force the action without prompting. -objects -o Specifies the object ...",t:"partition clone"},"444":{i:0.00043254965724362,u:"../Content/lunacm/commands/partition/partition_contents.htm",a:"Display a list of the objects on the partition. If the User is logged in, this command will display the contents of the User\u0027s partition.  If the User is not logged in, this command will display all of the objects that are available from a public session. The partition name, serial number and total ...",t:"partition contents"},"445":{i:0.00043254965724362,u:"../Content/lunacm/commands/partition/partition_create.htm",a:"Create an application partition on a locally installed or USB-connected HSM. The command is run from the HSM administrative partition. The HSM SO must be logged in. Syntax for command in HSM with firmware 6.22.0 or newer partition create  [-password \u003cstring\u003e] [-label \u003cstring\u003e]  [-size ...",t:"partition create"},"446":{i:0.0006242885581524,u:"../Content/lunacm/commands/partition/partition_createchallenge.htm",a:"Create the legacy application partition\u0027s Crypto Officer challenge for a PED-authenticated SafeNet USB HSM or SafeNet PCIe HSM. In the HSM\u0027s administrative partition, log in first, as the HSM SO.  Run  the partition createchallenge command after you  run the partition createuser command. If HSM ...",t:"partition createchallenge"},"447":{i:0.00041942417417026,u:"../Content/lunacm/commands/partition/partition_createuser.htm",a:"Create the Crypto-User challenge for the current partition. The command partition createchallenge must have already been run for this partition. If partition createuser is run (creating the Crypto-User and giving that user its own challenge), then the challenge created for the partition User becomes ...",t:"partition createuser"},"448":{i:0.00041942417417026,u:"../Content/lunacm/commands/partition/partition_deactivate.htm",a:"partition deactivate De-cache partition PED-key data. This command applies to SafeNet PCIe HSM with PED (trusted path) authentication only. Syntax partition deactivate Example lunacm:\u003e partition deactivate   Command Result : No Error",t:"partition deactivate"},"449":{i:0.00043254965724362,u:"../Content/lunacm/commands/partition/partition_delete.htm",a:"Delete an application partition.This command must be invoked from the HSM administrative partition, and operates against the application partition  at the indicated slot. Syntax partition resize-slot \u003cnumber\u003e [-size\u003cnumber\u003e] Parameter Shortcut Description -slot -sl Slot number of partition to be ...",t:"partition delete"},"450":{i:0.00043254965724362,u:"../Content/lunacm/commands/partition/partition_init.htm",a:"Initialize an application partition. This command is used within the partition being initialized.     Syntax partition init-label \u003cstring\u003e [-password\u003cstring\u003e]  [-domain\u003cstring\u003e]  [-defaultdomain]   [-auth]  [-force]     Parameter   Shortcut   Description   -auth -a   Log in after the initialization. ...",t:"partition init"},"451":{i:0.00043254965724362,u:"../Content/lunacm/commands/partition/partition_login.htm",a:"Login to the partition. Syntax partition login  [-password \u003cpassword-or-challenge\u003e] [-cu] [-ped \u003cped Id\u003e] Parameter Shortcut Description -password -pa Applies to Password-authenticated HSMs; ignored for PED-authenticated HSMs.  Specifies the Partition Owner or Crypto Officer password, to be used as ...",t:"partition login"},"452":{i:0.00043254965724362,u:"../Content/lunacm/commands/partition/partition_logout.htm",a:"partition logout Logout of the partition. Syntax partition logout",t:"partition logout"},"453":{i:0.00043254965724362,u:"../Content/lunacm/commands/partition/partition_recoveryinit.htm",a:"Performs a High Availability Initialization of the current active session. This lunacm command is provided as a demonstration of an operation that you would actually perform within your own application. Consider this command along with lunacm partition -halogin command, and the material in the SDK ...",t:"partition recoveryinit"},"454":{i:0.00043254965724362,u:"../Content/lunacm/commands/partition/partition_recoverylogin.htm",a:"Perform a Recovery Login on the target slot. This command is provided as a demonstration of an operation that you would actually perform within your own application. Consider this command along with the partition -recoveryinit command, and the material in the SDK \"High Availability Indirect Login ...",t:"partition recoverylogin"},"455":{i:0.00043254965724362,u:"../Content/lunacm/commands/partition/partition_resetpw.htm",a:"Reset the partition password. Used with older firmware. The HSM SO must be logged in.  For firmware 6.22.0 and newer, use role resetPW, instead. Syntax partition resetPw  [-password \u003cpassword\u003e]  Parameter Shortcut Description -password -p New partition password. If you do not provide it at the ...",t:"partition resetpw"},"456":{i:0.00043254965724362,u:"../Content/lunacm/commands/partition/partition_resize.htm",a:"Re-size an application partition. You must be HSM SO, in the HSM administrative partition/slot in order  to re-size an application partition. If the slot that currently has focus is an application partition, this command is not visible.  Syntax partition resize-slot \u003cnumber\u003e [-size\u003cnumber\u003e] ...",t:"partition resize"},"457":{i:0.00043254965724362,u:"../Content/lunacm/commands/partition/partition_restoresim2.htm",a:"Restore/insert HSM information from a Scalable Key Storage2 backup file. All objects in the file are restored to the HSM. Syntax partition restoreSIM2 [-auth \u003cauthorization password\u003e] -filename \u003cinput file\u003e Parameter Shortcut Description -auth -a The password that was used to protect the generated ...",t:"partition restoresim2"},"458":{i:0.00043254965724362,u:"../Content/lunacm/commands/partition/partition_restoresim3.htm",a:"Restore/insert HSM information from a Scalable Key Storage3 backup file. All objects in the file are restored to the HSM. Syntax partition restoresim3 [-auth \u003cauthorization password\u003e] -filename \u003cinput file\u003e Parameter Shortcut Description -auth -a The password that was used to protect the generated ...",t:"partition restoresim3"},"459":{i:0.00043254965724362,u:"../Content/lunacm/commands/partition/partition_setlegacydomain.htm",a:"Set the legacy cloning domain on a partition. The legacy cloning domain for password-authenticated HSM partitions is the text string that was used as a cloning domain on the legacy token HSM or SafeNet PCI HSM whose contents are to be migrated to the SafeNet PCI 5.x HSM partition. The legacy cloning ...",t:"partition setlegacydomain"},"460":{i:0.00043254965724362,u:"../Content/lunacm/commands/partition/partition_showinfo.htm",a:"Display partition-level information for the current slot.  The output from this command varies, depending on the type of partition in the current slot, and on the HSM firmware version. Syntax partition showinfo Examples Partition Info for an HSM admin partition (f/w 6.22.0 or newer)   lunacm:\u003e ...",t:"partition showinfo"},"461":{i:0.00043254965724362,u:"../Content/lunacm/commands/partition/partition_showmechanism.htm",a:" Lists the supported mechanisms, or shows some detail about a named mechanism. Syntax partition showmechanism [-m \u003cnumber_of_mechanism\u003e ] Option Short Description [no arguments] . Lists all available mechanisms. -m -m Shows expanded information for the indicated mechanism (optional). Example List ...",t:"partition showmechanism "},"462":{i:0.00043254965724362,u:"../Content/lunacm/commands/partition/partition_policytemplatechange.htm",a:"  Modify a policy\u0027s initial value and destructive settings within the partition policy template currently being edited. This change is done independently of any partition when the edit is performed. The change becomes accessible when the template is saved. The change becomes active if the template ...",t:"partition policyTemplateChange  "},"463":{i:0.00043254965724362,u:"../Content/lunacm/commands/partition/partition_policytemplatecreate.htm",a:"    Create an application partition policy template in memory (for editing). To preserve the template, it must be saved separately by the partition policyTemplatesave command. Partition policy template naming A policy template must have a unique name, which can be a character string.  Acceptable ...",t:"partition policyTemplatecreate   "},"464":{i:0.00043254965724362,u:"../Content/lunacm/commands/partition/partition_policytemplatedelete.htm",a:"    Delete partition policy template.  Syntax partition policyTemplateDelete   [-all]  [-name\u003ctemplate-name\u003e]  [-force] Option Shortcut Parameter  Description -all -a .  Delete all templates -name -n \u003ctemplate name\u003e  Specifies the name of the application partition policy template to delete. ...",t:"partition policyTemplateDelete   "},"465":{i:0.00043254965724362,u:"../Content/lunacm/commands/partition/partition_policytemplatelist.htm",a:"List the partition policies templates created by the HSM administrator and which template is currently being modified. Syntax partition policyTemplateList Example lunacm:\u003e slot set slot 1\n\n        Current Slot Id:    1     (Luna Admin Slot 6.24.0 (PED) Signing With Cloning Mode)\n\nCommand Result : No ...",t:"partition policyTemplateList"},"466":{i:0.00043254965724362,u:"../Content/lunacm/commands/partition/partition_policytemplateload.htm",a:"   Load a partition policy template for modification Syntax partition policyTemplateLOad -name\u003ctemplate-name\u003e  [-force] Option Shortcut Parameter  Description -name -n \u003ctemplate name\u003e  Specifies the name of the  application partition policy template to load, for editing/altering policies. ...",t:"partition policytemplateload  "},"467":{i:0.00043254965724362,u:"../Content/lunacm/commands/partition/partition_policytemplatesave.htm",a:"   Save the partition policy template modifications. This command saves a newly created partition policy template from editing memory, or saves a previously created partition policy template that was loaded for editing and re-saving.  Syntax partition policyTemplateSave [-name\u003ctemplate-name\u003e]    ...",t:"partition policyTemplateSave  "},"468":{i:0.00043254965724362,u:"../Content/lunacm/commands/partition/partition_policytemplateshow.htm",a:"   Display the destructiveness and value of each policy from the specified partition policy template name. Syntax partition policyTemplateShow [-name \u003ctemplate_name\u003e]  Option Shortcut Parameter Description -name -n  \u003ctemplate_name\u003e  Specifies the name of the template for which to display ...",t:"partition policyTemplateShow  "},"469":{i:0.000801509252942644,u:"../Content/lunacm/commands/partition/partition_showpolicies.htm",a:"Displays the partition-level capability and policy settings for the partition and User. Syntax partition showpolicies Example lunacm:\u003e partition showpolicies   Partition Capabilities 0: Enable private key cloning : 0 1: Enable private key wrapping : 0 2: Enable private key unwrapping : 1 3: Enable ...",t:"partition showpolicies"},"470":{i:0.00041942417417026,u:"../Content/lunacm/commands/partition/partition_smkclone.htm",a:"Clone the Scalable Key Storage Masking Key (SMK) from the current slot to the target slot. Syntax partition smkClone -slot \u003cslot number\u003e [-force] -password \u003cpassword\u003e Parameter Shortcut Description -force -fo Force the action without prompting. -password -p Target slot password. -slot -s Target ...",t:"partition smkclone"},"471":{i:0.000447804387663598,u:"../Content/lunacm/commands/ped/ped.htm",a:"Access the Remote-PED configuration commands. These commands manage the use of Remote PED with your SafeNet HSM. You can use a PED connected to a distant computer to provide authentication when running HSM and partition commands.  Secure use of Remote PED is mediated by the Remote PED Vector (RPV) ...",t:"ped"},"472":{i:0.00315740126269694,u:"../Content/lunacm/commands/ped/ped_connect.htm",a:"Connect to a remote PED. This command instructs PedClient to attempt to connect to the Remote PED Server at the IP address and port specified on the command line, or configured using the ped set command. See  ped set  for more information. Behavior when  defaults are configured using ped set The ped ...",t:"ped connect"},"473":{i:0.000473801175474181,u:"../Content/lunacm/commands/ped/ped_disconnect.htm",a:"Disconnect the current/active remote PED. No address information is required since only one remote PED connection can exist at one time. Syntax ped disconnect  [-serial \u003cserialnum\u003e] [-force] Parameter Shortcut Description  -force  -f Force the action without prompting.   -serial  -s Token Serial ...",t:"ped disconnect"},"474":{i:0.000473801175474181,u:"../Content/lunacm/commands/ped/ped_get.htm",a:"Show the PED connection type for current slot. This command displays the type of PED input which is expected (\u0027local\u0027 or \u0027remote\u0027) on the current slot. Syntax ped get Example lunacm:\u003e ped get   HSM slot 1 listening to remote PED (id 1).   Command Result : No Error   lunacm:\u003e ped set id 0 slot 2   ...",t:"ped get"},"475":{i:0.00315740126269694,u:"../Content/lunacm/commands/ped/ped_set.htm",a:"Configure a default IP address and/or port that are used by the ped connect command when establishing a connection to a Remote PED Server. See  ped connect  for more information. Syntax ped set  {[-ip \u003cped_server_ip\u003e] | [-port \u003cped_server_port_number\u003e]} Parameter Shortcut Description -ip -i \u003cped ...",t:"ped set"},"476":{i:0.000473801175474181,u:"../Content/lunacm/commands/ped/ped_show.htm",a:"ped show Display information for the current HSM PED connection. Syntax ped show Example lunacm:\u003e ped show   Ped Client Version 1.0.5 (10005) Ped Client launched in status mode. Ped PedClient is not currently running.   Show command passed.   Command Result : No Error",t:"ped show"},"477":{i:0.000473801175474181,u:"../Content/lunacm/commands/ped/ped_vector.htm",a:"Create or delete a Remote PED Vector (RPV). Use this command to the following: create a Remote PED Vector (RPV) and imprint it onto the HSM and an orange PED Key (RPK). delete an RPV from the HSM. Syntax ped vector delete init Parameter Shortcut Description delete d Delete a Remote PED Vector (RPV) ...",t:"ped vector"},"478":{i:0.000447804387663598,u:"../Content/lunacm/commands/remotebackup/remotebackupstart.htm",a:"Start the remote backup server on the current slot. Your SafeNet Remote Backup HSM must be connected to that computer and the SafeNet HSM client software must be installed, including the library and the Backup HSM driver. Use the slot -set -slot \u003cnumber\u003e command to set the backup HSM as the current ...",t:"remotebackup start"},"479":{i:0.000447804387663598,u:"../Content/lunacm/commands/role/role.htm",a:"Perform administrative commands related to HSM and partition roles - list roles, log in and log out, initialize a role on a partition, create a challenge secret, change or reset password for a role, etc. This command set is available when the currently selected slot points to a partition on an HSM ...",t:"role"},"480":{i:0.000837073019123431,u:"../Content/lunacm/commands/role/role_changepw.htm",a:"Change the password for a specified role. Syntax role changePW -name \u003cstring\u003e [-oldpw \u003cstring\u003e] [-newpw \u003cstring\u003e] [-prompt] [-force] Parameter Shortcut Description -name -n role to change password for -oldpw -old Current password (for application partition on PW authenticated HSM) or current ...",t:"role changepw"},"481":{i:0.000451144091597547,u:"../Content/lunacm/commands/role/role_createchallenge.htm",a:"Creates a challenge secret for a role - either Crypto Officer or Crypto User - for a PPSO partition. The challenge is a text-string secret used by an application to access the application partition with either Crypto Officer or Crypto User access level, respectively.  Creating a challenge is ...",t:"role createChallenge"},});