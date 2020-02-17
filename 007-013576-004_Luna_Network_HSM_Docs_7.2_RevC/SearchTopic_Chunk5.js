define({"347":{i:0.000939276319732676,u:"../Content/lunacm/commands/hagroup/hagroup_removemember.htm",a:"Remove an HSM member from an existing HA group. Use the -slot option or the -serialnumber option to specify which HSM to remove from the group specified by the -group option. Syntax hagroup removemember -serialnumber \u003cserialnum\u003e\n-group \u003clabel\u003e -slot \u003cslotnumber\u003e -group \u003clabel\u003e Example lunacm:\u003e ...",t:"hagroup removemember"},"348":{i:0.000481936924148159,u:"../Content/lunacm/commands/hagroup/hagroup_removestandby.htm",a:"Remove standby status from a member of an HA group. Use the -serialnumber option to specify which HSM to change from standby back to an active member of the HA group specified by the -group option.  Syntax hagroup removestandby -serialnumber \u003cserialnum\u003e -group \u003clabel\u003e Example lunacm:\u003e hagroup ...",t:"hagroup removestandby"},"349":{i:0.0061429257670105,u:"../Content/lunacm/commands/hagroup/hagroup_retry.htm",a:"Modify the HA recovery retry count. The retry count specifies the  number of times the system attempts to recover a failed member. The interval between retries is specified by the command  hagroup interval . For HA recovery attempts:  The default retry interval is 60 seconds. The default number of ...",t:"hagroup retry"},"350":{i:0.000998476292464135,u:"../Content/lunacm/commands/hagroup/hagroup_synchronize.htm",a:"Synchronize an HA group or enable/disable key synchronization for key export applications. Syntax hagroup synchronize -group \u003clabel_or_serialnum\u003e [-password \u003cpassword\u003e] [-enable | -disable] Example lunacm:\u003e hagroup synchronize -group myHAgroup           Enter the password: ********           ...",t:"hagroup synchronize"},"351":{i:0.000396110953147657,u:"../Content/lunacm/commands/hsm/hsm.htm",a:"Access the HSM-level commands.  The hsm commands appear only when LunaCM\u0027s active slot is set to the administrative partition  on a SafeNet Luna PCIe HSM or SafeNet Luna Backup HSM. To access the HSM-level commands on SafeNet Luna Network HSM, use LunaSH (see  hsm ) .  Syntax hsm changehsmpolicy ...",t:"hsm"},"352":{i:0.000598609628402816,u:"../Content/lunacm/commands/hsm/hsm_changehsmpolicy.htm",a:"Change HSM-level policies. This command changes the specified HSM Policy from the current value to the new, specified value, if the corresponding HSM capability setting permits the change. The hsm commands appear only when LunaCM\u0027s active slot is set to the administrative partition  on a SafeNet ...",t:"hsm changehsmpolicy"},"353":{i:0.000391758634537605,u:"../Content/lunacm/commands/hsm/hsm_envshow.htm",a:"Display environmental status information for the card. The following information is displayed: the card temperature. the card temperature warning threshold. If the card reaches this temperature, a warning is displayed in the output and logged. the status of the fans. the battery voltage. the battery ...",t:"hsm envshow"},"354":{i:0.000598609628402816,u:"../Content/lunacm/commands/hsm/hsm_factoryreset.htm",a:"Reset the HSM to its factory configuration. Use this command to set the HSM back to factory default settings, clearing all contents (puts HSM in zeroized state). Because this is a destructive command, the user is asked to “proceed” unless the -force switch is provided at the command line. This ...",t:"hsm factoryreset"},"355":{i:0.000391758634537605,u:"../Content/lunacm/commands/hsm/hsm_init.htm",a:"Initialize the HSM. Initializing the HSM erases all existing data, including any HSM Partition and its data. The HSM Partition then must be recreated with the partition create command. Because this is a destructive command, the user is asked to “proceed” unless the -force switch is provided at the ...",t:"hsm init"},"356":{i:0.000391758634537605,u:"../Content/lunacm/commands/hsm/hsm_migratepedkey.htm",a:"Migrate the PED key contents. Use this command to copy the contents of a Version 1.x Luna PED Key to a Version 2.x Luna PED USB iKey. This operation requires both a version 1.14 Luna PED (no earlier version will work - contact SafeNet Customer Support) and a Version 2.x Luna PED. A G4/K5 HSM or ...",t:"hsm migratepedkey"},"357":{i:0.000654836298294616,u:"../Content/lunacm/commands/hsm/hsm_monitor.htm",a:"Query the HSM for performance monitoring statistics, such as HSM up time, command counts, and utilization. You can display the information or save it to a file. The hsm commands appear only when LunaCM\u0027s active slot is set to the administrative partition  on a SafeNet Luna PCIe HSM or SafeNet Luna ...",t:"hsm monitor"},"358":{i:0.000391758634537605,u:"../Content/lunacm/commands/hsm/hsm_restart.htm",a:"Restart the SafeNet Luna HSM. Use this command to restart the SafeNet Luna HSM if it has stopped responding, but your computer is still responsive. This command closes out any login status and open sessions. If you are a developer, trace what you were doing at the time the problem occurred and try ...",t:"hsm restart"},"359":{i:0.000391758634537605,u:"../Content/lunacm/commands/hsm/hsm_rollbackfw.htm",a:"Roll back the HSM firmware to the previously installed version. Only the previously installed version is available for rollback. Rollback allows you to try a new firmware version without permanently committing to the new version.  Firmware rollback is a destructive action; earlier firmware versions ...",t:"hsm rollbackfw"},"360":{i:0.000391758634537605,u:"../Content/lunacm/commands/hsm/hsm_showinfo.htm",a:"Display HSM-level information. The hsm commands appear only when LunaCM\u0027s active slot is set to the administrative partition  on a SafeNet Luna PCIe HSM or SafeNet Luna Backup HSM. To access the HSM-level commands on SafeNet Luna Network HSM, use LunaSH (see  hsm ) .  Syntax hsm showinfo Example ...",t:"hsm showinfo"},"361":{i:0.000391758634537605,u:"../Content/lunacm/commands/hsm/hsm_showmechanism.htm",a:"Displays a list of the cryptographic mechanisms supported on the HSM. The hsm commands appear only when LunaCM\u0027s active slot is set to the administrative partition  on a SafeNet Luna PCIe HSM or SafeNet Luna Backup HSM. To access the HSM-level commands on SafeNet Luna Network HSM, use LunaSH (see  ...",t:"hsm showmechanism"},"362":{i:0.00125344535710043,u:"../Content/lunacm/commands/hsm/hsm_showpolicies.htm",a:"Displays the HSM-level capability and policy settings for the HSM. Include the -exporttemplate option to export the current state of all HSM policies to a policy template.  Some mechanisms (such as KCDSA) are not enabled unless you have purchased and installed the required Secure Capability Update ...",t:"hsm showpolicies"},"363":{i:0.000391758634537605,u:"../Content/lunacm/commands/hsm/hsm_tamperclear.htm",a:"Unlock the HSM following a tamper event.  The type of tamper event is indicated by the HSM Status line in the output of the command  slot list . Use the command  hsm tampershow  to display detailed information for the tamper. The hsm commands appear only when LunaCM\u0027s active slot is set to the ...",t:"hsm tamperclear"},"364":{i:0.000558257346324472,u:"../Content/lunacm/commands/hsm/hsm_tampershow.htm",a:"Display the current tamper state for the HSM card. If the card has been tampered (tamper event, card removal, opened chassis, etc.), detailed information regarding the tamper is displayed. The hsm commands appear only when LunaCM\u0027s active slot is set to the administrative partition  on a SafeNet ...",t:"hsm tampershow"},"365":{i:0.000391758634537605,u:"../Content/lunacm/commands/hsm/hsm_updatecap.htm",a:"Update the capabilities of the SafeNet Luna HSM. When new features and capabilities are made available from Gemalto, this command allows you to apply them to your SafeNet Luna HSM.  The hsm commands appear only when LunaCM\u0027s active slot is set to the administrative partition  on a SafeNet Luna PCIe ...",t:"hsm updatecap"},"366":{i:0.000391758634537605,u:"../Content/lunacm/commands/hsm/hsm_updatefw.htm",a:"Update the firmware on the SafeNet Luna HSM. LunaCM performs an automatic restart following a firmware update. The hsm commands appear only when LunaCM\u0027s active slot is set to the administrative partition  on a SafeNet Luna PCIe HSM or SafeNet Luna Backup HSM. To access the HSM-level commands on ...",t:"hsm updatefw"},"367":{i:0.000598609628402816,u:"../Content/lunacm/commands/hsm/hsm_zeroize.htm",a:"Puts the HSM in a zeroized state. All partitions and cryptographic contents of the HSM will be destroyed. Because this is a destructive command, the user is prompted to \"proceed\" unless the -force option is included. This action does not affect HSM policies, remote PED settings, or Auditor settings. ...",t:"hsm zeroize"},"368":{i:0.000396110953147657,u:"../Content/lunacm/commands/partition/partition.htm",a:"Access the partition-level commands.  Different commands are available depending on whether the current slot is the HSM administrative partition or a user partition.  Syntax This version of the partition command set includes an init command for the application partition. These are the commands you ...",t:"partition"},"369":{i:0.000390520778170699,u:"../Content/lunacm/commands/partition/partition_addsize.htm",a:"Increase the size of a backup partition by a specific number of bytes.  This command is applicable to SafeNet Luna Backup HSM partitions only, and appears in LunaCM only when a Backup HSM is connected. You must be logged in to the Backup HSM as HSM SO to use this command.  Syntax partition addsize ...",t:"partition addsize"},"370":{i:0.000565485832262172,u:"../Content/lunacm/commands/partition/partition_archive.htm",a:"Access the partition archive commands.  An archive (backup) device can be one of the following: An HSM in another slot in the current system A backup HSM connected to a remote workstation A USB-attached HSM connected directly to a SafeNet Luna PCIe HSM Device configuration In each scenario, the HSM ...",t:"partition archive"},"371":{i:0.000589730185697877,u:"../Content/lunacm/commands/partition/partition_archive_backup.htm",a:"Backup partition objects. Use this command to backup objects from the current user partition to a partition on a backup device. You must be logged in as the Crypto Officer to backup the partition.  If the domains of your source and target HSMs do not match or the policy settings do not permit ...",t:"partition archive backup"},"372":{i:0.000466848618592784,u:"../Content/lunacm/commands/partition/partition_archive_contents.htm",a:"Display the contents of a specified backup partition on the backup device in the specified slot.  Syntax partition archive contents -slot \u003cbackup_device\u003e -partition \u003cbackup_partition\u003e -password \u003cpassword\u003e [-commandtimeout \u003cseconds\u003e] [-debug Example lunacm:\u003e partition archive contents -slot 2 ...",t:"partition archive contents"},"373":{i:0.000466848618592784,u:"../Content/lunacm/commands/partition/partition_archive_delete.htm",a:"Delete the specified partition on the backup device in the specified slot. Syntax If backup device is a slot in the current system: partition archive delete -slot \u003cbackup_slot\u003e -partition \u003cbackup_partition\u003e -password \u003cpassword\u003e [-debug] If backup device is in a remote workstation: partition archive ...",t:"partition archive delete"},"374":{i:0.000466848618592784,u:"../Content/lunacm/commands/partition/partition_archive_list.htm",a:"Display a list of the backup partitions on a backup device in a specified slot. Syntax If backup device is a slot in the current system: partition archive list -slot \u003cbackup_slot\u003e [-debug] If backup device is in a remote workstation: partition archive list -slot remote -hostname \u003chostname\u003e -port ...",t:"partition archive list"},"375":{i:0.000466848618592784,u:"../Content/lunacm/commands/partition/partition_archive_restore.htm",a:"Restore partition objects from a backup. Use this command to restore objects from the specified backup partition, in a backup HSM, in a specified slot, to the current user partition. Cloning is a repeating atomic action When you call for a cloning operation (such as backup or restore), the source ...",t:"partition archive restore"},"376":{i:0.00045054237198743,u:"../Content/lunacm/commands/partition/partition_changelabel.htm",a:"Change the label of the partition in the active slot. This command affects the label originally set by the Partition SO during initialization.  You must be logged in as Partition SO to run this command.  This feature has software and/or firmware dependencies. See  Version Dependencies by Feature  ...",t:"partition changelabel"},"377":{i:0.00131934290548608,u:"../Content/lunacm/commands/partition/partition_changepolicy.htm",a:"Change a user policy on the partition. If you are running more than one LunaCM session against the same partition, and change a partition policy in one LunaCM session, the policy change will  be reflected in that session only. You must exit and restart the other LunaCM sessions to display the ...",t:"partition changepolicy"},"378":{i:0.000479439747227791,u:"../Content/lunacm/commands/partition/partition_clear.htm",a:"Delete all User partition objects. You must be logged in as the user. The partition structure remains in place. Syntax partition clear [-force] Example lunacm:\u003epartition clear           You are about to delete all token objects.         Are you sure you wish to continue?           Type \u0027proceed\u0027 to ...",t:"partition clear"},"379":{i:0.000390520778170699,u:"../Content/lunacm/commands/partition/partition_clone.htm",a:"Clone User partition objects from the current slot to the specified slot. Cloning is a repeating atomic action When you call for a cloning operation (such as backup or restore), the source HSM transfers a single object, encrypted with the source domain. The target HSM then decrypts and verifies the ...",t:"partition clone"},"380":{i:0.000390520778170699,u:"../Content/lunacm/commands/partition/partition_contents.htm",a:"Display a list of the objects on the partition. This command will display all objects accessible to the role that is currently logged in. The total object count is also displayed. For each object found, the label, handle, object type, and object UID are displayed. Syntax partition contents Example ...",t:"partition contents"},"381":{i:0.000390520778170699,u:"../Content/lunacm/commands/partition/partition_createchallenge.htm",a:"Create the legacy application partition\u0027s Crypto Officer challenge for a PED-authenticated SafeNet Luna USB HSM or SafeNet Luna PCIe HSM. In the HSM\u0027s administrative partition, log in first, as the HSM SO.  Run the partition createchallenge command after you run the partition createuser command. Run ...",t:"partition createchallenge"},"382":{i:0.000495428700054076,u:"../Content/lunacm/commands/partition/partition_init.htm",a:"Initialize an application partition. This command is used within the partition being initialized. For password-authenticated HSMs, if the password is not provided via the command line, the user is interactively prompted for it. Input is echoed as asterisks, and user is asked for password ...",t:"partition init"},"383":{i:0.000479439747227791,u:"../Content/lunacm/commands/partition/partition_login.htm",a:"Log in to an HA group using the common Crypto Officer password or challenge secret. This command is only available in LunaCM when the current slot is an HA virtual slot.  Syntax partition login [-password \u003cpassword/challenge\u003e] Example lunacm:\u003e partition login           Option -password was not ...",t:"partition login"},"384":{i:0.000390520778170699,u:"../Content/lunacm/commands/partition/partition_logout.htm",a:"partition logout Log out of an HA group. This command is only available in LunaCM when the current slot is an HA virtual slot.  Syntax partition logout Example lunacm:\u003e partition logout   Command Result : No Error",t:"partition logout"},"385":{i:0.000390520778170699,u:"../Content/lunacm/commands/partition/partition_resize.htm",a:"Change the size of an application partition. Syntax partition resize -slot \u003cnumber\u003e -size \u003cbytes\u003e {-partition \u003cname\u003e | -all} [-force] Example To see information about a partition/slot, go to that slot using slot set and then use the partition showinfo command. lunacm:\u003epartition archive list -slot 2 ...",t:"partition resize"},"386":{i:0.000390520778170699,u:"../Content/lunacm/commands/partition/partition_restoresim3.htm",a:"Restore/insert HSM information from a SIM3 backup file. All objects in the file are restored to the HSM. Syntax partition restoresim3file -filename \u003cinput_file\u003e Example lunacm:\u003epartition restoresim3file -filename somepartfile            Restored Objects:           Object Handle: 14 (0xe)         ...",t:"partition restoresim3file"},"387":{i:0.000390520778170699,u:"../Content/lunacm/commands/partition/partition_setlegacydomain.htm",a:"Set the legacy cloning domain on a partition. The legacy cloning domain for password-authenticated HSM partitions is the text string that was used as a cloning domain on the legacy HSM whose contents are to be migrated to the SafeNet Luna Network HSM partition. The legacy cloning domain for ...",t:"partition setlegacydomain"},"388":{i:0.000390520778170699,u:"../Content/lunacm/commands/partition/partition_showinfo.htm",a:"Display partition-level information for the current slot. Syntax partition showinfo Examples Partition Info for an application partition lunacm:\u003e partition showinfo           Partition Label -\u003e par0         Partition Manufacturer -\u003e Safenet, Inc.         Partition Model -\u003e LunaSA 7.0.0         ...",t:"partition showinfo"},"389":{i:0.000543135499531594,u:"../Content/lunacm/commands/partition/partition_showmechanism.htm",a:"Lists the supported mechanisms, or shows some detail about a named mechanism. Syntax partition showmechanism  [-m \u003cmech_ID_number\u003e ] Example List all mechanisms available to the partition lunacm:\u003e partition showmechanism\n\n\n Mechanisms Supported:\n         0x00000000 - CKM_RSA_PKCS_KEY_PAIR_GEN\n       ...",t:"partition showmechanism"},"390":{i:0.00202746457008965,u:"../Content/lunacm/commands/partition/partition_showpolicies.htm",a:"Displays the partition-level capability and policy settings for the indicated user/application partition, including whether the policy is destructive when it is enabled or disabled (verbose mode). Include the -exporttemplate option to export the current state of all partition policies to a partition ...",t:"partition showpolicies"},"391":{i:0.000396110953147657,u:"../Content/lunacm/commands/ped/ped.htm",a:"Access the Remote-PED configuration commands. These commands manage the use of Remote PED with your SafeNet Luna HSM. You can use a PED connected to a distant computer to provide authentication when running HSM and partition commands.  Secure use of Remote PED is mediated by the Remote PED Vector ...",t:"ped"},"392":{i:0.00284495671760767,u:"../Content/lunacm/commands/ped/ped_connect.htm",a:"Connect to a remote PED. This command instructs PEDclient to attempt to connect to the remote PEDserver at the IP address and port specified on the command line, or configured using the ped set command. See  ped set  for more information. Behavior when  defaults are configured using ped set The ped ...",t:"ped connect"},"393":{i:0.000426831231599946,u:"../Content/lunacm/commands/ped/ped_disconnect.htm",a:"Disconnect the current/active remote PED. No address information is required since only one remote PED connection can exist at one time. Syntax ped disconnect [-slot \u003cslotnum\u003e] [-force] Example lunacm:\u003e ped disconnect           Are you sure you wish to disconnect the remote ped?           Type ...",t:"ped disconnect"},"394":{i:0.000426831231599946,u:"../Content/lunacm/commands/ped/ped_get.htm",a:"Show the PED connection type for current slot. This command displays the type of PED input which is expected (\u0027local\u0027 or \u0027remote\u0027) on the current slot. Syntax ped get Example lunacm:\u003e ped get   HSM slot 1 listening to remote PED (id 1).   Command Result : No Error   lunacm:\u003e ped set id 0 slot 2   ...",t:"ped get"},"395":{i:0.00284495671760767,u:"../Content/lunacm/commands/ped/ped_set.htm",a:"Configure an IP address and/or port that are used by the ped connect command when establishing a connection to a Remote PED Server. See  ped connect  for more information. At least one (-ip or -port) must be specified.  Syntax ped set  [-ip \u003cped_server_ip\u003e | -port \u003cped_server_port\u003e] Example lunacm:\u003e ...",t:"ped set"},"396":{i:0.000426831231599946,u:"../Content/lunacm/commands/ped/ped_show.htm",a:"ped show Display information for the current HSM PED connection. Syntax ped show Example lunacm:\u003e ped show   Configured Remote PED Server information   Remote PED Server IP address:   192.20.11.64 Remote PED Server Port:         1503   Command Result : No Error",t:"ped show"},"397":{i:0.000396110953147657,u:"../Content/lunacm/commands/remotebackup/remotebackup_start.htm",a:"Start the remote backup server on the current slot. Your SafeNet Luna Backup HSM must be connected to that computer and the SafeNet Luna HSM client software must be installed, including the library and the Backup HSM driver. Use the slot set -slot \u003cnumber\u003e command to set the backup HSM as the ...",t:"remotebackup start"},"398":{i:0.000396110953147657,u:"../Content/lunacm/commands/role/role.htm",a:"Perform administrative commands related to HSM and partition roles - list roles, log in and log out, initialize a role on a partition, create a challenge secret, change or reset password for a role, etc. Syntax role changepw createchallenge deactivate init list login logout recoveryinit ...",t:"role"},"399":{i:0.00081407780749299,u:"../Content/lunacm/commands/role/role_changepw.htm",a:"Change the password for a specified role. Syntax role changepw -name \u003crole\u003e [-oldpw \u003coldpassword\u003e] [-newpw \u003cnewpassword\u003e] [-prompt] [-force] Examples Change credential on the HSM\u0027s Admin partition lunacm:\u003e role login -name SO\n\n        Please attend to the PED.\n\nCommand Result : No Error\n       ...",t:"role changepw"},"400":{i:0.000573646957693,u:"../Content/lunacm/commands/role/role_createchallenge.htm",a:"Create a challenge secret for the Crypto Officer (CO) or Crypto User (CU) role on the current partition (slot). This command applies to PED-authenticated partitions only. The challenge secret is a text string (password) that provides an additional level of authentication for PED-authenticated ...",t:"role createchallenge"},"401":{i:0.000511759761243295,u:"../Content/lunacm/commands/role/role_deactivate.htm",a:"Deactivates a role on a partition. If the \"Allow activation\" policy is set, then activation/re-activation happens with login for the CO and CU roles. Use this command to disable activation for a specific role. Syntax role deactivate -name \u003crole\u003e Example lunacm:\u003e role login -name po           Please ...",t:"role deactivate"},"402":{i:0.000849542523641197,u:"../Content/lunacm/commands/role/role_init.htm",a:"Initializes (creates) the named role on the current partition / slot, if applicable.  Use the command  role list  to see which roles are possible on the current partition/slot. The Auditor role can exist only on the HSM\u0027s administrative partition, and shares that partition with the HSM Security ...",t:"role init"},"403":{i:0.000752465821900075,u:"../Content/lunacm/commands/role/role_list.htm",a:"List the roles available on the current partition/slot. Syntax role list Example lunacm:\u003eslot set slot 0\n\n        Current Slot Id:    0     (Luna User Slot 7.0.1 (PED) Signing With Cloning Mode)\n\nCommand Result : No Error\n\n   lunacm:\u003erole list         Roles             (short)         ...",t:"role list"},"404":{i:0.000398773153950073,u:"../Content/lunacm/commands/role/role_login.htm",a:"Logs the named user into the partition at the current slot.  For password-authenticated HSMs, the entire credential is the password. You can enter your password visibly on-screen with the -password option, or wait to be prompted after pressing enter. Passwords entered at the prompt are masked by ...",t:"role login"},"405":{i:0.000398773153950073,u:"../Content/lunacm/commands/role/role_logout.htm",a:"This command logs the currently logged-in role out of a partition.  For PED-authenticated HSMs, if the activation policy is set, then logout does not uncache the PED Key data, so the next login will require only the password/challenge for success - no PED prompt appears. Syntax role logout Example ...",t:"role logout"},"406":{i:0.000851741372211299,u:"../Content/lunacm/commands/role/role_recoveryinit.htm",a:"Initialize the current role for Recovery Login by creating an HA RSA key pair. This command applies to SafeNet Luna PCIe HSM or SafeNet Luna USB HSM. Does not apply to SafeNet Luna Network HSM partitions that appear in LunaCM via NTLS  or STC  channel. See also CKDemo  HIGH AVAILABILITY RECOVERY ...",t:"role recoveryinit"},"407":{i:0.000851741372211299,u:"../Content/lunacm/commands/role/role_recoverylogin.htm",a:"Perform an HA recovery login. This command applies to SafeNet Luna PCIe HSM or SafeNet Luna USB HSM. Does not apply to SafeNet Luna Network HSM partitions that appear in LunaCM via NTLS  or STC  channel. See also CKDemo  HIGH AVAILABILITY RECOVERY Menu Functions . Syntax role recoverylogin -user ...",t:"role recoverylogin"},"408":{i:0.00057337174683621,u:"../Content/lunacm/commands/role/role_resetpw.htm",a:"Resets the password for a specified role. The partition SO can reset the Crypto Officer password or black PED key only if HSM policy 15: \"Enable SO reset of partition PIN\" is enabled. By default, this policy is not enabled and changing it is destructive. If the target role is not on the current ...",t:"role resetpw"},"409":{i:0.000639479214606853,u:"../Content/lunacm/commands/role/role_setdomain.htm",a:"Sets the domain of a role. Used only by the HSM\u0027s Auditor user. The Auditor role must have been initialized previously, and must be logged in, in order to set the domain. On password-authenticated HSMs, this step is required before setting logging parameters or the log filepath, or ...",t:"role setdomain"},"410":{i:0.000398773153950073,u:"../Content/lunacm/commands/role/role_show.htm",a:"Shows the state of the named role.  For the Auditor role, if the bad login attempt threshold is exceeded, the HSM locks out that role for 60 seconds. The output of role show, during that time, gives a status of \"Locked out\".  However, role show continues to show a state of \"Locked out\" even after ...",t:"role show"},"411":{i:0.000396110953147657,u:"../Content/lunacm/commands/slot/slot.htm",a:"Access the slot commands.  Slots originated as a cryptographic software concept, later overlaid onto HSM function, and originally corresponded to individual removable cryptographic \"token\" HSMs. In general, a physical \"slot\" correlates to a PKCS#11 crypto slot. However, to allow for cases where more ...",t:"slot"},"412":{i:0.000789640646703348,u:"../Content/lunacm/commands/slot/slot_configset.htm",a:"Identify and set a SafeNet Luna Backup HSM partition to access at the specified slot number. This command is used only with a SafeNet Luna Backup HSM at firmware version earlier than 6.22.0, and allows an archive partition on the Backup HSM to be accessed in a manner similar to an application ...",t:"slot configset"},"413":{i:0.000426831231599946,u:"../Content/lunacm/commands/slot/slot_configshow.htm",a:"Show the configuration information for the specified slot number. Syntax slot configshow -slot \u003cslot_number\u003e Example lunacm:\u003e slot configshow -slot 2           Slot Configuration:                   Slot ID:                 2                   User Partition Name:     Cryptoki User   Command Result : ...",t:"slot configshow"},"414":{i:0.000593329943386812,u:"../Content/lunacm/commands/slot/slot_list.htm",a:"List the available slots on the system. The HSM administrative partition and any application partition are distinct and appear individually in a LunaCM slot list, so at least two slots. Similarly, if you have several local SafeNet Luna HSMs installed or connected, or if you have SafeNet Luna Network ...",t:"slot list"},"415":{i:0.000426831231599946,u:"../Content/lunacm/commands/slot/slot_partitionlist.htm",a:"List the partitions for the specified slot. This is of interest when a cryptographic slot might contain more than one HSM partition. In general, one slot contains one partition, but a SafeNet Luna Backup HSM, for example, might occupy one cryptographic slot while containing many partitions (see  ...",t:"slot partitionlist"},"416":{i:0.000515750200657037,u:"../Content/lunacm/commands/slot/slot_set.htm",a:"Set the current slot number. The current slot is the slot to which you want LunaCM commands to apply. LunaCM commands work on the current slot. If there is only one slot, then it is always the current slot. If there is more than one slot, then use the slot set command to direct the focus at the ...",t:"slot set"},"417":{i:0.000426831231599946,u:"../Content/lunacm/commands/slot/slot_showempty.htm",a:"This command will list the available empty slots on the system and their types.  Syntax slot showempty Example lunacm:\u003e slot showempty           Slot Id -\u003e   5: Luna UHD Slot         Slot Id -\u003e   6: Luna UHD Slot         Slot Id -\u003e   7: Luna UHD Slot           Current Slot Id: 0     Command Result : ...",t:"slot showempty"},});