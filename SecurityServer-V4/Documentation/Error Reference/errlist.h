/* errlist.h: generated from makefile */
#define E_OS                             0xB000       /* CryptoServer module SMOS                           */
#define E_OS_SENS                        0xB00001     /* SENS section                                       */
#define E_OS_SENS_WRITE_ERR              0xB0000100   /* Sensory write error                                */
#define E_OS_SENS_READ_ERR               0xB0000101   /* Sensory read error                                 */
#define E_OS_SENS_BAD_TYPE               0xB0000102   /* Bad info type                                      */
#define E_OS_SENS_MEM_ALLOC              0xB0000103   /* Error during memory allocation                     */
#define E_OS_SENS_IO_ERR                 0xB0000104   /* Sensory I/O error                                  */
#define E_OS_SENS_MK_CORR                0xB0000105   /* Corrupted Master Key                               */
#define E_OS_SENS_NACK                   0xB0000106   /* Sensory error answer                               */
#define E_OS_SENS_NO_ALARM               0xB0000107   /* CryptoServer not in alarm state                    */
#define E_OS_SENS_READ_TIMEOUT           0xB0000108   /* Sensory read timeout                               */
#define E_OS_SENS_ALARM_PRESENT          0xB0000109   /* Alarm still present, can't reset                   */
#define E_OS_SENS_MSP_TIMEOUT            0xB000010A   /* Controller: read timeout                           */
#define E_OS_SENS_MSP_CMD                0xB000010B   /* Controller: bad command                            */
#define E_OS_SENS_MSP_ADDR               0xB000010C   /* Controller: bad address                            */
#define E_OS_SENS_MSP_DATA               0xB000010D   /* Controller: bad data                               */
#define E_OS_SENS_MSP_CRC                0xB000010E   /* Controller: bad CRC                                */
#define E_OS_SENS_BAD_CRC                0xB000010F   /* Bad CRC in answer                                  */
#define E_OS_SENS_PARAM                  0xB0000110   /* Invalid parameter                                  */
#define E_OS_SENS_BUF_SIZE               0xB0000111   /* Buffer size too small                              */
#define E_OS_SENS_ANSW_LEN               0xB0000112   /* Invalid length of answer data                      */
#define E_OS_SENS_JOB_STATE              0xB0000113   /* Invalid job state                                  */
#define E_OS_SENS_LOCKED                 0xB0000114   /* Sensory controller is locked                       */
#define E_OS_SENS_CTRL                   0xB000013    /* Sensory Controller section                         */
#define E_OS_SENS_CTRL_NACK              0xB0000130   /* unknown error code                                 */
#define E_OS_SENS_CTRL_TIMEOUT           0xB0000131   /* timeout                                            */
#define E_OS_SENS_CTRL_CMD               0xB0000132   /* bad command                                        */
#define E_OS_SENS_CTRL_ADDR              0xB0000133   /* bad address                                        */
#define E_OS_SENS_CTRL_DATA              0xB0000134   /* bad data                                           */
#define E_OS_SENS_CTRL_CRC               0xB0000135   /* bad CRC                                            */
#define E_OS_SENS_CTRL_I2C               0xB0000136   /* I2C error                                          */
#define E_OS_SENS_CTRL_BUSY              0xB0000137   /* currently busy                                     */
#define E_OS_DEV                         0xB00002     /* device section                                     */
#define E_OS_DEV_ERR                     0xB0000201   /* notifies if an error occurs during operation       */
#define E_OS_DEV_ALREADY_OPEN            0xB0000202   /* device is used by an other session                 */
#define E_OS_DEV_NAME_INVALID            0xB0000203   /* illegal device name length or characterset         */
#define E_OS_DEV_MODE_INVALID            0xB0000204   /* illegal mode of operation                          */
#define E_OS_DEV_PARAMETER_INVALID       0xB0000205   /* passed parameter illegal                           */
#define E_OS_DEV_HDL_INVALID             0xB0000206   /* session handle not allowed                         */
#define E_OS_DEV_DATA_INVALID            0xB0000207   /* corrupted data                                     */
#define E_OS_DEV_NO_MEM                  0xB0000209   /* can't allocate memory space                        */
#define E_OS_DEV_NO_SUCH_FUNCTION        0xB000020A   /* no private module function                         */
#define E_OS_DEV_NO_DEVICE               0xB000020B   /* no serial device available                         */
#define E_OS_DEV_SL                      0xB00003     /* serial device section                              */
#define E_OS_DEV_SL_BAD_HDL              0xB0000301   /* bad handle                                         */
#define E_OS_DEV_SL_ALREADY_OPEN         0xB0000302   /* device already open                                */
#define E_OS_DEV_SL_READ                 0xB000030D   /* read error on serial line                          */
#define E_OS_DEV_SL_INVALID_PARAM        0xB000030E   /* parameter to be modified is invalid                */
#define E_OS_DEV_SL_PARAM_VAL            0xB0000310   /* invalid parameter value to set control of SL       */
#define E_OS_DEV_SL_TIMEOUT              0xB0000311   /* timeout while reading char from serial line        */
#define E_OS_DEV_SL_PARITY_ERR           0xB0000312   /* parity error                                       */
#define E_OS_DEV_SL_OVERRUN              0xB0000313   /* receiver over-run                                  */
#define E_OS_DEV_SL_FRAME                0xB0000314   /* receiver frame error                               */
#define E_OS_DEV_SL_NO_DATA              0xB0000315   /* no data ready to read                              */
#define E_OS_DEV_SL_TOOMANY              0xB0000381   /* too many lines open                                */
#define E_OS_DEV_SL_TCATTR               0xB0000382   /* error setting line parameters                      */
#define E_OS_DEV_SL_OPEN                 0xB0000383   /* can't open device                                  */
#define E_OS_DEV_SL_NOT_OPEN             0xB0000384   /* handle not open                                    */
#define E_OS_DEV_SL_NO_VALID_HDL         0xB0000385   /* invalid handle                                     */
#define E_OS_DEV_SL_NO_VALID_PARA_VALUE   0xB0000386   /* invalid parameter value                            */
#define E_OS_DEV_SL_NO_VALID_PARA_TYPE   0xB0000387   /* invalid parameter type                             */
#define E_OS_DEV_SL_READ_ERROR           0xB0000388   /* error on read                                      */
#define E_OS_DEV_SL_READ_TIME_OUT        0xB0000389   /* timeout on read                                    */
#define E_OS_DEV_SL_WRITE_ERROR          0xB000038A   /* error on write                                     */
#define E_OS_DEV_SL_WRITE_TIME_OUT       0xB000038B   /* timeout on write                                   */
#define E_OS_DEV_SL_CTRL_ERROR           0xB000038C   /* error on ioctl                                     */
#define E_OS_DEV_SL_NO_VALID_NAME        0xB0000390   /* no valid device name                               */
#define E_OS_DEV_SL_NO_VALID_BUF_SLCT    0xB0000391   /* no valid Buffer selected                           */
#define E_OS_DEV_SL_NO_VALID_LINE_STATE   0xB0000392   /* line state parameter incorrect                     */
#define E_OS_DEV_SL_NO_VALID_LINE_SLCT   0xB0000393   /* line select parameter incorrect                    */
#define E_OS_DEV_SL_COM_STATE            0xB0000394   /* error in comunication driver                       */
#define E_OS_DEV_SL_PARITY               0xB0000395   /* Parity Error                                       */
#define E_OS_DEV_I2C                     0xB00004     /* i2c device section                                 */
#define E_OS_DEV_I2C_PARA_INV            0xB0000401   /* one parameter is wrong                             */
#define E_OS_DEV_I2C_NO_ACK              0xB0000402   /* got no acknowledge after sending a byte            */
#define E_OS_DEV_I2C_BAD_DEVICE          0xB0000403   /* bad device identifier                              */
#define E_OS_DEV_I2C_NO_DEV              0xB0000404   /* device does not exist                              */
#define E_OS_FILE                        0xB00005     /* file section                                       */
#define E_OS_FILE_INIT                   0xB0000501   /* file system not initialized                        */
#define E_OS_FILE_ALREADY_OPEN           0xB0000502   /* the file is already opened                         */
#define E_OS_FILE_ILL_NAME               0xB0000503   /* file name is not allowed                           */
#define E_OS_FILE_ILL_ATTRIB             0xB0000504   /* invalid open mode                                  */
#define E_OS_FILE_NO_SUCH_PATH           0xB0000505   /* the directory does not exist                       */
#define E_OS_FILE_NO_SUCH_FILE           0xB0000506   /* the file does not exist                            */
#define E_OS_FILE_EXIST                  0xB0000507   /* the file doesn't / already exists                  */
#define E_OS_FILE_ILL_PARAM              0xB0000508   /* invalid parameter                                  */
#define E_OS_FILE_NOT_OPEN               0xB000050A   /* the file isn't open for access mode                */
#define E_OS_FILE_ILL_POS                0xB000050B   /* position offset not allowed                        */
#define E_OS_FILE_NO_MEM                 0xB000050C   /* no more memory space available                     */
#define E_OS_FILE_NO_TABLE               0xB000050D   /* no bad block table                                 */
#define E_OS_FILE_MAGIC                  0xB000050E   /* invalid magic tag                                  */
#define E_OS_FILE_FF_BUSY                0xB0000510   /* flash file device is still busy                    */
#define E_OS_FILE_FF_FAILED              0xB0000511   /* flash file device replies an error                 */
#define E_OS_FILE_FF_ADDRESS             0xB0000513   /* illegal page address                               */
#define E_OS_FILE_ECC                    0xB0000514   /* page parity error                                  */
#define E_OS_FILE_RDONLY                 0xB0000515   /* file system is read only                           */
#define E_OS_FILE_HANDLE                 0xB0000516   /* bad file handle                                    */
#define E_OS_FILE_NO_SPACE               0xB0000517   /* file system full                                   */
#define E_OS_FILE_TABLE_FULL             0xB0000518   /* file table full                                    */
#define E_OS_FILE_CORR                   0xB0000519   /* file corrupted                                     */
#define E_OS_FILE_EXDEV                  0xB000051A   /* different file systems                             */
#define E_OS_FILE_BAD_FSTYPE             0xB000051B   /* bad file system type, can't mount                  */
#define E_OS_FILE_BAD_BAD                0xB000051C   /* too many bad blocks, giving up                     */
#define E_OS_FILE_FF_BAD                 0xB000051D   /* detected bad block in flash file                   */
#define E_OS_FILE_GEOMETRY               0xB000051E   /* bad flash page geometry                            */
#define E_OS_FILE_HDL_TOOMANY            0xB000051F   /* too many open file handles                         */
#define E_OS_TASK                        0xB00006     /* task section                                       */
#define E_OS_TASK_STACK_OVL              0xB0000601   /* stack overflow                                     */
#define E_OS_TASK_STACK_CORR             0xB0000602   /* stack corrupted                                    */
#define E_OS_TASK_BUFSIZE                0xB0000603   /* buffer size to small                               */
#define E_OS_TASK_MALLOC                 0xB0000604   /* memory allocation failed                           */
#define E_OS_AUDIT                       0xB00007     /* AUDIT section                                      */
#define E_OS_AUDIT_EXIST                 0xB0000700   /* Audit file does not exist                          */
#define E_OS_AUDIT_FULL                  0xB0000701   /* Audit files full                                   */
#define E_OS_AUDIT_FSFULL                0xB0000702   /* File system full                                   */
#define E_OS_AUDIT_BUFF_TOO_SMALL        0xB0000703   /* Buffer too small                                   */
#define E_OS_AUDIT_MALLOC                0xB0000704   /* Memory allocation failed                           */
#define E_OS_AUDIT_CFG_ITEM              0xB0000705   /* Invalid configuration item                         */
#define E_OS_AUDIT_CFG_RANGE             0xB0000706   /* Configuration value out of range                   */
#define E_OS_AUDIT_PARAM                 0xB0000707   /* Invalid parameter value                            */
#define E_OS_AUDIT_INVALID_HANDLE        0xB0000708   /* Invalid audit handle                               */
#define E_OS_MDL                         0xB00008     /* MDL section                                        */
#define E_OS_MDL_MEM_ALLOC               0xB0000801   /* Error during memory allocation                     */
#define E_OS_MDL_PARA_INVALID            0xB0000802   /* Invalid input parameter                            */
#define E_OS_MDL_EXIST                   0xB0000803   /* module already exists                              */
#define E_OS_MDL_TABLE                   0xB0000804   /* module table full                                  */
#define E_OS_MDL_PARAMETER               0xB0000805   /* illegall parameter passed                          */
#define E_OS_MDL_EVENT                   0xB0000806   /* event not reached                                  */
#define E_OS_MDL_NOT_FOUND               0xB0000807   /* module not found                                   */
#define E_OS_MDL_WRITE                   0xB0000808   /* can't write module to SDRAM directory              */
#define E_OS_MDL_SLF_BAD                 0xB0000809   /* bad signed licence file                            */
#define E_OS_MDL_BL_INI                  0xB000080A   /* can't read bl_ini file                             */
#define E_OS_MDL_SLF_FOUND               0xB000080B   /* SLF parameter not found                            */
#define E_OS_MDL_MTC_INV                 0xB000080C   /* invalid MTC file                                   */
#define E_OS_MDL_MMC_INV                 0xB000080D   /* invalid MMC file                                   */
#define E_OS_MDL_NO_MTC_SIG              0xB000080E   /* No MTC signature present                           */
#define E_OS_MDL_CFG_FOUND               0xB000080F   /* Config parameter not found                         */
#define E_OS_MDL_HW_TYPE                 0xB0000810   /* Module does not match hardware type                */
#define E_OS_MDL_MSC_INV                 0xB0000811   /* invalid MSC file                                   */
#define E_OS_MDL_MSC_VERIFY_FAILED       0xB0000812   /* MSC verification failed                            */
#define E_OS_MDL_NOT_SUPP                0xB0000813   /* Function not supported                             */
#define E_OS_MDL_NOT_AVAILABLE           0xB0000814   /* Function not available                             */
#define E_OS_MEM                         0xB00009     /* memory section                                     */
#define E_OS_MEM_BAD_TYPE                0xB0000901   /* illegal memory type                                */
#define E_OS_MEM_CORR                    0xB0000902   /* corrupted memory structure                         */
#define E_OS_MEM_BUF_SIZE                0xB0000903   /* buffer size too small                              */
#define E_OS_MEM_BAD_ADDR                0xB0000904   /* bad memory address                                 */
#define E_OS_STR                         0xB0000A     /* string section                                     */
#define E_OS_STR_MALLOC                  0xB0000A01   /* memory allocation failed                           */
#define E_OS_CFG                         0xB0000B     /* Config section                                     */
#define E_OS_CFG_MALLOC                  0xB0000B01   /* memory allocation failed                           */
#define E_OS_CFG_INVALID_PARAM           0xB0000B02   /* invalid parameter                                  */
#define E_OS_CFG_INVALID_HDL             0xB0000B03   /* invalid handle                                     */
#define E_OS_CFG_BAD                     0xB0000B04   /* bad config file                                    */
#define E_OS_CFG_SECT_NOT_FOUND          0xB0000B05   /* section not found                                  */
#define E_OS_CFG_ITEM_NOT_FOUND          0xB0000B06   /* item not found                                     */
#define E_OS_PCI                         0xB00010     /* PCI section                                        */
#define E_OS_PCI_DMA_TMOUT               0xB0001000   /* DMA timeout                                        */
#define E_OS_PCI_CANCEL                  0xB0001001   /* request canceled                                   */
#define E_OS_PCI_MBR_RD_TMOUT            0xB0001002   /* MBR read timeout                                   */
#define E_OS_PCI_MBR_WR_TMOUT            0xB0001003   /* MBR write timeout                                  */
#define E_OS_PCI_MBR_CMD                 0xB0001004   /* bad MBR command                                    */
#define E_OS_PCI_RX_CRC                  0xB0001005   /* rx crc error                                       */
#define E_OS_PCI_NOT_IMPL                0xB0001006   /* function not implememted                           */
#define E_OS_PCI_SHUTDOWN                0xB0001007   /* shutdown request received                          */
#define E_OS_PCI_MEM                     0xB0001008   /* memory allocation failed                           */
#define E_OS_PCI_SEQCT                   0xB0001009   /* bad sequence counter                               */
#define E_OS_PCI_RD_TMOUT                0xB000100A   /* read timeout                                       */
#define E_OS_PCI_WR_TMOUT                0xB000100B   /* write timeout                                      */
#define E_OS_PCI_LENERR                  0xB000100C   /* block length error                                 */
#define E_OS_PCI_SOCKET                  0xB000100D   /* socket error                                       */
#define E_OS_PCI_STATE                   0xB000100E   /* bad state for receive                              */
#define E_OS_RTC                         0xB00011     /* RTC section                                        */
#define E_OS_RTC_FAIL                    0xB0001100   /* RTC failed                                         */
#define E_OS_RTC_NOT_INIT                0xB0001101   /* RTC not initialized                                */
#define E_OS_RTC_PARAM                   0xB0001102   /* Bad parameter                                      */
#define E_OS_CRYPT                       0xB00013     /* CRYPT section                                      */
#define E_OS_CRYPT_MEM_ALLOC             0xB0001301   /* Error during memory allocation                     */
#define E_OS_CRYPT_PARA_INVALID          0xB0001302   /* Invalid input parameter                            */
#define E_OS_CRYPT_MK_READ               0xB0001303   /* Error reading master key                           */
#define E_OS_CRYPT_NO_MK                 0xB0001304   /* no internal access to CS2 master key               */
#define E_OS_CRYPT_MK_CORR               0xB0001305   /* CS2 master key corrupted                           */
#define E_OS_CRYPT_MK_WRITE              0xB0001306   /* Error updating master key                          */
#define E_OS_CRYPT_NOT_SUPP              0xB0001307   /* Function not supported                             */
#define E_OS_CRYPT_RND_FAIL              0xB0001308   /* Random number generator failed                     */
#define E_OS_CRYPT_SHA512_KAT            0xB0001309   /* SHA-512 Known Answer Test failed                   */
#define E_OS_CRYPT_RND_TMOUT             0xB0001310   /* Random number generator timeout                    */
#define E_OS_CRYPT_RND_KAT               0xB0001311   /* Known answer test failed                           */
#define E_OS_CRYPT_RND_INIT              0xB0001312   /* Random Number Generator is not initialized         */
#define E_OS_CRYPT_RND_SEC_STRENGTH      0xB0001313   /* Given security strength not supported              */
#define E_OS_CRYPT_RND_REQ               0xB0001314   /* Max number of requested randombits per call exceeded */
#define E_OS_CRYPT_RND_PRED_RESISTANCE   0xB0001315   /* Prediction resistance not supported for current handle */
#define E_OS_CRYPT_RND_RESEED            0xB0001316   /* Random Number Generator needs to be reseeded       */
#define E_OS_COFF                        0xB0002      /* COFF section                                       */
#define E_OS_COFF_RELOC_LO16             0xB0002001   /* relocation error (low 16 bits)                     */
#define E_OS_COFF_RELOC_HI16             0xB0002002   /* relocation error (high 16 bits)                    */
#define E_OS_COFF_RELOC_PCR21            0xB0002003   /* relocation error (PC relative)                     */
#define E_OS_COFF_RELOC_LONG             0xB0002004   /* relocation error (long)                            */
#define E_OS_COFF_ALLOC                  0xB0002005   /* can't allocate memory                              */
#define E_OS_COFF_BAD_NSCN               0xB0002006   /* bad number of section headers                      */
#define E_OS_COFF_2BSS                   0xB0002007   /* multiple BSS segments                              */
#define E_OS_COFF_2CINIT                 0xB0002008   /* multiple CINIT segments                            */
#define E_OS_COFF_NO_DATA                0xB0002009   /* missing data in segment                            */
#define E_OS_COFF_BAD_ENTRY              0xB000200A   /* bad entry function                                 */
#define E_OS_COFF_NO_SYMTAB              0xB000200B   /* missing symbol table                               */
#define E_OS_COFF_REL_DATA               0xB000200C   /* bad relocation data                                */
#define E_OS_COFF_REL_SCN                0xB000200D   /* bad section number in relocation data              */
#define E_OS_COFF_REL_DISP               0xB000200E   /* bad displacement in relocation data                */
#define E_OS_COFF_REL_SYMIDX             0xB000200F   /* bad symbol index in relocation data                */
#define E_OS_COFF_REL_TYPE               0xB0002010   /* bad relocation type                                */
#define E_OS_COFF_HEADER                 0xB0002011   /* bad coff file header                               */
#define E_OS_COFF_MISS                   0xB0002012   /* missing information in coff file                   */
#define E_OS_COFF_BSS_NEMPTY             0xB0002013   /* BSS segment is not empty                           */
#define E_OS_COFF_CINIT_NEMPTY           0xB0002014   /* CINIT segment is not empty                         */
#define E_OS_COFF_CPU_TYPE               0xB0002015   /* module does not match CPU type                     */
#define E_OS_COFF_REL_TARGET             0xB0002016   /* bad relocation target address                      */
#define E_OS_COFF_REL_STACKOVF           0xB0002017   /* symbol stack overflow                              */
#define E_OS_COFF_RELOC_USTFLD           0xB0002018   /* relocation error (USTFLD)                          */
#define E_OS_COFF_RELOC_XSTFLD           0xB0002019   /* relocation error (XSTFLD)                          */
#define E_OS_USB                         0xB0003      /* USB section                                        */
#define E_OS_USB_MALLOC                  0xB0003001   /* memory allocation failed                           */
#define E_OS_USB_PARAM                   0xB0003002   /* invalid parameter                                  */
#define E_OS_USB_NOT_SUPPORTED           0xB0003003   /* USB not supported                                  */
#define E_OS_USB_INIT_FAILED             0xB0003004   /* initialization of host controller failed           */
#define E_OS_USB_DEVICE_CONNECT          0xB0003005   /* device is not connected                            */
#define E_OS_USB_DEVICE_STATE            0xB0003006   /* invalid device state                               */
#define E_OS_USB_TIMEOUT                 0xB0003007   /* timeout occured                                    */
#define E_OS_USB_NAK                     0xB0003008   /* NAK received                                       */
#define E_OS_USB_PROTOCOL                0xB0003009   /* protocol error                                     */
#define E_OS_USB_IDTAB_FULL              0xB000300A   /* ID table is full                                   */
#define E_OS_USB_NOT_FOUND               0xB000300B   /* item not found                                     */
#define E_OS_USB_DATA_LEN                0xB000300C   /* invalid data length                                */
#define E_OS_USB_ERR                     0xB00031     /* transaction error                                  */
#define E_OS_USB_LIBUSB                  0xB00032     /* libusb                                             */
#define E_OS_PNC_0                       0xB00050     /* panic message                                      */
#define E_OS_PNC_BL                      0xB0005001   /* Can't start bootloader (CRC)                       */
#define E_OS_PNC_SDRAM                   0xB0005002   /* Can't start bootloader (SDRAM error)               */
#define E_OS_PNC_PCI                     0xB000500B   /* PCI interface closed                               */
#define E_OS_PNC_MEMORY                  0xB000500C   /* memory corruption detected                         */
#define E_OS_PNC_3                       0xB00053     /* shutdown message                                   */
#define E_OS_PNC_HIGH_TEMP               0xB0005306   /* High temperature                                   */
#define E_OS_PNC_RESET_ALARM             0xB000530A   /* Alarm reseted                                      */
#define E_OS_PNC_CLEAR                   0xB000530E   /* CryptoServer cleared                               */
#define E_OS_PNC_HALT                    0xB0005344   /* CryptoServer halted                                */
#define E_FIPS140                        0xB001       /* CryptoServer module FIPS140                        */
#define E_FIPS140_INVALID_MDL_VERSION    0xB0010001   /* invalid module version                             */
#define E_FIPS140_ILLEGAL_MDL            0xB0010002   /* illegal firmware module in FIPS mode               */
#define E_FIPS140_MISSING_APPR_MDL       0xB0010003   /* missing approved module                            */
#define E_FIPS140_APPR_MDL_INIT_FAILED   0xB0010004   /* approved module initialization failed              */
#define E_FIPS140_DES_KAT                0xB0010010   /* known answer test of DES failed                    */
#define E_FIPS140_RSA_KAT                0xB0010011   /* known answer test of RSA failed                    */
#define E_FIPS140_AES_KAT                0xB0010012   /* known answer test of AES failed                    */
#define E_FIPS140_ECDSA_PCT              0xB0010013   /* pair-wise consistency test of ECDSA failed         */
#define E_FIPS140_HASH_KAT               0xB0010014   /* known answer test of HASH failed                   */
#define E_FIPS140_AES_ENC_KAT_FAILED     0xB0010020   /* known answer test for AES encrypt/decrypt failed   */
#define E_FIPS140_AES_MAC_KAT_FAILED     0xB0010021   /* known answer test for AES CBC-MAC failed           */
#define E_FIPS140_AES_CMAC_KAT_FAILED    0xB0010022   /* known answer test for AES CMAC failed              */
#define E_FIPS140_AES_GCM_KAT_FAILED     0xB0010023   /* known answer test for AES GCM failed               */
#define E_FIPS140_AES_OFB_KAT_FAILED     0xB0010024   /* known answer test for AES OFB failed               */
#define E_FIPS140_AES_GMAC_KAT_FAILED    0xB0010025   /* known answer test for AES GMAC failed              */
#define E_FIPS140_RSA_SIGN_KAT_FAILED    0xB0010030   /* known answer test for RSA sign/verify failed       */
#define E_FIPS140_RSA_ENC_PCT_FAILED     0xB0010031   /* pair-wise consistency test for RSA encrypt/decrypt failed */
#define E_FIPS140_HMAC_KAT_FAILED        0xB0010040   /* known answer test for HMAC failed                  */
#define E_FIPS140_DSA_SIGN_PCT_FAILED    0xB0010050   /* pair-wise consistency test for DSA sign/verify failed */
#define E_FIPS140_ECC_CDH_KAT_FAILED     0xB0010060   /* known answer test for ECC CDH failed               */
#define E_FIPS140_KDF_800108_KAT_FAILED   0xB0010070   /* known answer test for KDF_800108 failed            */
#define E_FIPS150_UTL_TEST_FAILED        0xB0010080   /* known answer tests for (internally used only) utility functions failed */
#define E_FIPS140_CMD_LEN                0xB0010100   /* bad command length                                 */
#define E_FIPS140_INVALID_PARAM          0xB0010200   /* function called with invalid parameter             */
#define E_BL3                            0xB006       /* Bootloader                                         */
#define E_BL3_PARA_INV                   0xB0060000   /* invalid parameter                                  */
#define E_BL3_ITEM_NOT_FOUND             0xB0060001   /* item not found                                     */
#define E_BL3_ITEM_LEN                   0xB0060002   /* invalid item length                                */
#define E_BL3_BUF_SIZE                   0xB0060003   /* buffer size too small                              */
#define E_BL3_CMD                        0xB006001    /* command section                                    */
#define E_BL3_CMD_FMT_LEN                0xB0060010   /* bad length within format string                    */
#define E_BL3_CMD_BAD_OUT                0xB0060011   /* bad parameter structure                            */
#define E_BL3_CMD_BAD_FMT                0xB0060012   /* bad format string                                  */
#define E_BL3_CMD_BAD_CMD                0xB0060013   /* bad format                                         */
#define E_BL3_CMD_TIMEOUT                0xB0060014   /* timeout occured                                    */
#define E_BL3_CMD_PROHIBIT               0xB0060015   /* command is not allowed                             */
#define E_BL3_CMD_INVALID_HEADER         0xB0060016   /* invalid command header                             */
#define E_BL3_CMD_INVALID_LENGTH         0xB0060017   /* invalid command length                             */
#define E_BL3_CMD_INVALID_FC             0xB0060018   /* invalid function code                              */
#define E_BL3_CMD_INVALID_SFC            0xB0060019   /* invalid sub-function code                          */
#define E_BL3_CMD_INVALID_CHALLENGE      0xB006001A   /* invalid challenge                                  */
#define E_BL3_CMD_FIPS_PROHIBIT          0xB006001B   /* command is not allowed in FIPS mode                */
#define E_BL3_CMD_SFC_DISABLED           0xB006001C   /* command not available in current configuration     */
#define E_BL3_MDL                        0xB006003    /* module section                                     */
#define E_BL3_MDL_MTC_HDR_INV            0xB0060031   /* invalid MTC Header                                 */
#define E_BL3_MDL_MTC_NO_SIG             0xB0060032   /* no MTC signature present                           */
#define E_BL3_MDL_MMC_HDR_INV            0xB0060033   /* invalid MMC Header                                 */
#define E_BL3_MDL_MMC_NO_SIG             0xB0060034   /* no MMC signature present                           */
#define E_BL3_MDL_MMC_HASH               0xB0060035   /* MMC hash compare failed                            */
#define E_BL3_MDL_MSC_HDR_INV            0xB0060036   /* invalid MSC Header                                 */
#define E_BL3_MDL_MSC_HASH               0xB0060037   /* MSC hash compare failed                            */
#define E_BL3_MDL_NO_INFO                0xB0060038   /* no module info found                               */
#define E_BL3_COFF                       0xB006004    /* coff section                                       */
#define E_BL3_COFF_NAME_INV              0xB0060040   /* invalid coff name                                  */
#define E_BL3_COFF_HDR_INV               0xB0060041   /* invalid coff header                                */
#define E_BL3_COFF_OPT_HDR_MAGIC         0xB0060042   /* invalid header magic                               */
#define E_BL3_COFF_OPT_HDR_SIZE          0xB0060043   /* invalid header size                                */
#define E_BL3_COFF_SECT_INV              0xB0060044   /* invalid section                                    */
#define E_BL3_COFF_SECT_RELOC_INV        0xB0060045   /* invalid relocation of section                      */
#define E_BL3_COFF_SECT_ADR_RUN_ALG      0xB0060046   /* invalid run address                                */
#define E_BL3_COFF_SECT_ADR_LOAD_ALG     0xB0060047   /* invalid load address                               */
#define E_BL3_COFF_SECT_MEM_INV          0xB0060048   /* invalid section memory                             */
#define E_BL3_COFF_OPT_HDR_INV           0xB0060049   /* invalid opt header                                 */
#define E_BL3_COFF_SIZE_INV              0xB006004A   /* invalid size                                       */
#define E_BL3_COFF_ADR_INV               0xB006004B   /* invalid address                                    */
#define E_BL3_COFF_MTC_INV               0xB006004C   /* invalid MTC                                        */
#define E_BL3_COFF_ENTRY_INV             0xB006004D   /* invalid entry point                                */
#define E_BL3_COFF_CPU_TYPE              0xB006004E   /* invalid CPU type                                   */
#define E_BL3_COFF_INV                   0xB006004F   /* invalid coff file                                  */
#define E_BL3_SIG                        0xB006005    /* signature secture                                  */
#define E_BL3_SIG_PKCS1                  0xB0060050   /* invalid pkcs1 padding                              */
#define E_BL3_SIG_HASH                   0xB0060051   /* hash compare failed                                */
#define E_BL3_RSA                        0xB006006    /* RSA section                                        */
#define E_BL3_RSA_RES_OFLOW              0xB0060060   /* rsa result overflow                                */
#define E_BL3_RSA_DIV_OFLOW              0xB0060061   /* modulus is zero                                    */
#define E_BL3_RSA_INP_GE_MOD             0xB0060062   /* modulus is smaller than operand                    */
#define E_BL3_FILE                       0xB006007    /* file section                                       */
#define E_BL3_FILE_FLASH_FORMAT          0xB0060071   /* error formating flash file                         */
#define E_BL3_FILE_AFTER_FORMAT_LOOP     0xB0060072   /* flash file formated succesfully, now looping forever */
#define E_BL3_FILE_INIT                  0xB0060073   /* Initialization of file system failed               */
#define E_BL3_FILE_EXIST                 0xB0060074   /* file already exists                                */
#define E_BL3_FILE_NAME                  0xB0060075   /* invalid filename                                   */
#define E_BL3_FILE_TYPE                  0xB0060076   /* invalid file type                                  */
#define E_BL3_FILE_SIZE                  0xB0060077   /* invalid file size                                  */
#define E_BL3_FILE_NOT_FOUND             0xB0060078   /* file not found                                     */
#define E_BL3_FILE_OPEN                  0xB006007A   /* file open error                                    */
#define E_BL3_FILE_READ                  0xB006007B   /* file read error                                    */
#define E_BL3_FILE_WRITE                 0xB006007C   /* file write error                                   */
#define E_BL3_FILE_CLOSE                 0xB006007D   /* file close error                                   */
#define E_BL3_PCI                        0xB006008    /* PCI section                                        */
#define E_BL3_PCI_TIMEOUT                0xB0060080   /* timeout occured                                    */
#define E_BL3_PCI_PROTOCOL               0xB0060081   /* protocol error                                     */
#define E_BL3_PCI_LENGTH                 0xB0060082   /* length error                                       */
#define E_BL3_PCI_CRC                    0xB0060083   /* crc error                                          */
#define E_BL3_PCI_BUFSIZE                0xB0060084   /* buffer size too small                              */
#define E_BL3_PCI_PARAM                  0xB0060085   /* invalid parameter                                  */
#define E_BL3_UID                        0xB006009    /* UID section                                        */
#define E_BL3_UID_CRC                    0xB0060090   /* bad CRC on UID                                     */
#define E_BL3_UID_NOT_FOUND              0xB0060091   /* UID not found                                      */
#define E_BL3_UID_EXT_INV                0xB0060092   /* Extended UID invalid                               */
#define E_BL3_SL                         0xB00600A    /* SL section                                         */
#define E_BL3_SL_NAME_INV                0xB00600A0   /* invalid device name                                */
#define E_BL3_SL_HDL_INV                 0xB00600A1   /* invalid handle value                               */
#define E_BL3_SL_NOT_OPEN                0xB00600A2   /* device is not open                                 */
#define E_BL3_SL_INUSE                   0xB00600A3   /* device is already in use                           */
#define E_BL3_SL_PARAM                   0xB00600A4   /* invalid parameter                                  */
#define E_BL3_SL_PARAM_VALUE             0xB00600A5   /* invalid parameter value                            */
#define E_BL3_SL_TIMEOUT                 0xB00600A6   /* timeout                                            */
#define E_BL3_SL_CRC                     0xB00600A7   /* invalid crc                                        */
#define E_BL3_SL_OVERRUN                 0xB00600A8   /* overrun error                                      */
#define E_BL3_SL_PARITY                  0xB00600A9   /* parity error                                       */
#define E_BL3_SL_FRAME                   0xB00600AA   /* framing error                                      */
#define E_BL3_SL_DATA_COMP               0xB00600AB   /* data compare failed                                */
#define E_BL3_MSP_BSL                    0xB00600B    /* MSP BSL section                                    */
#define E_BL3_MSP_BSL_VERSION            0xB00600B1   /* get version failed                                 */
#define E_BL3_MSP_BSL_SYNC               0xB00600B2   /* sync failed                                        */
#define E_BL3_MSP_BSL_ERASE              0xB00600B3   /* erase failed                                       */
#define E_BL3_MSP_BSL_LOGIN              0xB00600B4   /* login failed                                       */
#define E_BL3_MSP_BSL_WRITE              0xB00600B5   /* write failed                                       */
#define E_BL3_JTAG                       0xB00600C    /* JTAG section                                       */
#define E_BL3_JTAG_STATE                 0xB00600C0   /* invalid state                                      */
#define E_BL3_JTAG_IDCODE                0xB00600C1   /* unexpected IDCODE                                  */
#define E_BL3_FLASH                      0xB00600D    /* Flash section                                      */
#define E_BL3_FLASH_TIMEOUT              0xB00600D0   /* timeout during flash operation                     */
#define E_BL3_FLASH_ID                   0xB00600D1   /* error reading flash id                             */
#define E_BL3_FLASH_ERASE                0xB00600D2   /* erase failed                                       */
#define E_BL3_FLASH_PAGE_READ            0xB00600D3   /* error reading flash page                           */
#define E_BL3_FLASH_PAGE_WRITE           0xB00600D4   /* error writing flash page                           */
#define E_BL3_FLASH_PAGE_DATA            0xB00600D5   /* bad page data                                      */
#define E_BL3_FLASH_CRC                  0xB00600D6   /* invalid CRC                                        */
#define E_BL3_LOG                        0xB00600E    /* log section                                        */
#define E_BL3_LOG_DOES_NOT_EXIST         0xB00600E0   /* log file does not exist                            */
#define E_BL3_SDRAM                      0xB00600F    /* SDRAM section                                      */
#define E_BL3_SDRAM_BUS_DATA             0xB00600F1   /* data bus test failed                               */
#define E_BL3_SDRAM_BUS_ADR              0xB00600F2   /* address bus test failed                            */
#define E_BL3_SDRAM_BUS_DEV              0xB00600F3   /* device test failed                                 */
#define E_BL3_USB                        0xB006010    /* USB section                                        */
#define E_BL3_USB_NACK                   0xB0060100   /* NACK received                                      */
#define E_BL3_USB_TIMEOUT                0xB0060101   /* timeout occured                                    */
#define E_BL3_USB_PROT                   0xB0060102   /* protocol error                                     */
#define E_BL3_USB_DEVICE                 0xB0060103   /* device error                                       */
#define E_BL3_USB_PARAM                  0xB0060104   /* invalid parameter                                  */
#define E_BL3_USB_NOT_SUPPORTED          0xB0060105   /* function not supported                             */
#define E_BL3_USB_INIT_FAILED            0xB0060106   /* initialisation failed                              */
#define E_BL3_USB_DEVICE_CONNECT         0xB0060107   /* error connecting device                            */
#define E_BL3_USB_DEVICE_STATE           0xB0060108   /* error determining device state                     */
#define E_BL3_USB_PROTOCOL               0xB0060109   /* usb protocol error                                 */
#define E_BL3_FF                         0xB006011    /* flash file section                                 */
#define E_BL3_FF_NO_CONFIG               0xB0060111   /* no config page                                     */
#define E_BL3_FF_CONFIG_SIZE             0xB0060112   /* invalid flash size                                 */
#define E_BL3_FF_NO_BBT                  0xB0060113   /* no bad block table                                 */
#define E_BL3_FF_INVALID_BBT             0xB0060114   /* invalid bad block table                            */
#define E_BL3_FF_BBT_STORE               0xB0060115   /* unable to store bad block                          */
#define E_BL3_FF_NOT_BLANK               0xB0060116   /* page is not blank                                  */
#define E_BL3_I2C                        0xB006012    /* i2c device section                                 */
#define E_BL3_I2C_PARA_INV               0xB0060120   /* one parameter is wrong                             */
#define E_BL3_I2C_NO_ACK                 0xB0060121   /* got no acknowledge after sending a byte            */
#define E_BL3_I2C_NO_DEV                 0xB0060122   /* device does not exist                              */
#define E_BL3_XSVF                       0xB006013    /* XSVF section                                       */
#define E_BL3_XSVF_UNKNOWN               0xB0060131   /* unknown error                                      */
#define E_BL3_XSVF_TDOMISMATCH           0xB0060132   /* TDO mismatch                                       */
#define E_BL3_XSVF_MAXRETRIES            0xB0060133   /* TDO mismatch after max retries                     */
#define E_BL3_XSVF_ILLEGALCMD            0xB0060134   /* illegal command                                    */
#define E_BL3_XSVF_ILLEGALSTATE          0xB0060135   /* illegal state                                      */
#define E_BL3_XSVF_DATAOVERFLOW          0xB0060136   /* buffer overflow                                    */
#define E_BL3_SHA512                     0xB006014    /* SHA512 section                                     */
#define E_BL3_SHA512_KAT                 0xB0060140   /* SHA512 known answer test failed                    */
#define E_BL3_NVRAM                      0xB006015    /* NVRAM section                                      */
#define E_BL3_NVRAM_TIMEOUT              0xB0060150   /* timeout during nvram operation                     */
#define E_BL3_NVRAM_PAGE_READ            0xB0060151   /* error reading nvram page                           */
#define E_BL3_NVRAM_PAGE_WRITE           0xB0060152   /* error writing nvram page                           */
#define E_BL3_NVRAM_PAGE_DATA            0xB0060153   /* bad page data                                      */
#define E_BL3_NVRAM_ID                   0xB0060154   /* error reading flash id                             */
#define E_BL3_NVRAM_NOT_AVAILABLE        0xB0060155   /* NVRAM not available in Bootloader mode             */
#define E_BL3_MSP                        0xB00602     /* MSP section                                        */
#define E_BL3_MSP_DATA_LEN               0xB0060201   /* data len for communication with msp too large      */
#define E_BL3_MSP_IO_ERR                 0xB0060202
#define E_BL3_MSP_TIMEOUT                0xB0060299   /* timeout occurred                                   */
#define E_BL3_MSP_CMD                    0xB00602A5   /* invalid command                                    */
#define E_BL3_MSP_ADDR                   0xB00602BD   /* invalid address                                    */
#define E_BL3_MSP_DATA                   0xB00602C3   /* invalid data                                       */
#define E_BL3_MSP_CRC                    0xB00602DB   /* invalid crc                                        */
#define E_BL3_USB_ERR                    0xB00603  
#define E_BL3_SPI                        0xB00604     /* SPI section                                        */
#define E_BL3_SPI_RD_TO                  0xB0060401   /* read timeout                                       */
#define E_BL3_SPI_XRDY_TO                0xB0060402   /* timeout waiting for receiver ready                 */
#define E_BL3_SPI_MSP_RDY_TO             0xB0060403   /* timeout waiting for MSP ready                      */
#define E_BL3_SPI_MSP_NRDY_TO            0xB0060404   /* timeout waiting for MSP ready low                  */
#define E_BL3_SPI_RRDY_TO                0xB0060405   /* timeout waiting for RRDY                           */
#define E_BL3_EXAR                       0xB0060500   /* EXAR section                                       */
#define E_BL3_EXAR_TIMEOUT               0xB0060501   /* timeout during pci cfg operation                   */
#define E_BL3_EXAR_DATA_TEST             0xB0060502   /* wrong data read                                    */
#define E_BL3_EXAR_PCI_BUSY              0xB0060503   /* pci interface for accelerator busy                 */
#define E_BL3_EXAR_DETECT                0xB0060504   /* no exar accelerator found                          */
#define E_BL3_SCF_MALLOC                 0xB0060511   /* memory allocation failed                           */
#define E_BL3_SCF_INVALID_PARAM          0xB0060512   /* invalid parameter                                  */
#define E_BL3_SCF_INVALID_HDL            0xB0060513   /* invalid handle                                     */
#define E_BL3_SCF_BAD                    0xB0060514   /* bad config file                                    */
#define E_BL3_SCF_SECT_NOT_FOUND         0xB0060515   /* section not found                                  */
#define E_BL3_SCF_ITEM_NOT_FOUND         0xB0060516   /* item not found                                     */
#define E_BL_WRONG_FC                    0xB007001F   /* Wrong Function Code  (included for backward compatibility) */
#define E_BL_WRONG_FC                    0xB007001F   /* Wrong Function Code (included for backward compatibility) */
#define E_HCE                            0xB00A       /* CryptoServer module HCE                            */
#define E_HCE_MEM                        0xB00A0001   /* memory allocation failed                           */
#define E_HCE_PCI_MASTER                 0xB00A0002   /* PCI master access error (DSP)                      */
#define E_HCE_KEY_SIZE                   0xB00A0003   /* key size not supported                             */
#define E_HCE_EXP_SIZE                   0xB00A0004   /* exponent greater modulus                           */
#define E_HCE_TIMEOUT                    0xB00A0005   /* hardware engine timeout                            */
#define E_HCE_RESULT_SIZE                0xB00A0006   /* result too big for buffer                          */
#define E_HCE_PRIME_SIZE                 0xB00A0007   /* illegal sizes of prime                             */
#define E_HCE_DATA_LEN                   0xB00A0008   /* data size too big (greater than modulus)           */
#define E_HCE_SELFTST_FAIL               0xB00A0009   /* Self-test failed                                   */
#define E_HCE_NO_LNA                     0xB00A000A   /* Module LNA not found                               */
#define E_HCE_DMA                        0xB00A000B   /* PCI DMA master access error                        */
#define E_HCE_NO_DRIVER                  0xB00A000C   /* No driver module found                             */
#define E_HCE_DRIVER_INCOMPATIBLE        0xB00A000D   /* Driver does not allow routing from HCE to driver.  */
#define E_HCE_PARAM_INVALID              0xB00A000E   /* invalid parameter                                  */
#define E_HCE_NOT_SUPPORTED              0xB00A000F   /* function is not supported                          */
#define E_HCE_VERIFY_FAILED              0xB00A0010   /* Signature verification failed                      */
#define E_HCE_ENGN_ERR                   0xB00A80     /* hardware engine error                              */
#define E_EXAR                           0xB00D       /* CryptoServer module EXAR                           */
#define E_EXAR_NO_MARVEL                 0xB00D0001   /* no Marvell bridge detected                         */
#define E_EXAR_NO_EXAR                   0xB00D0002   /* no Exar chip detected                              */
#define E_EXAR_INVAL                     0xB00D0003   /* invalid parameter                                  */
#define E_EXAR_TIMEOUT                   0xB00D0004   /* timeout                                            */
#define E_EXAR_MALLOC                    0xB00D0005   /* memory allocation failed                           */
#define E_EXAR_SELFTEST                  0xB00D0006   /* selftest failed                                    */
#define E_EXAR_BUF_SIZE                  0xB00D0007   /* insufficient buffer size                           */
#define E_EXAR_STATE                     0xB00D0008   /* invalid command state                              */
#define E_EXAR_PARAM_LEN                 0xB00D0009   /* invalid parameter length                           */
#define E_EXAR_SIGN_FAILED               0xB00D000A   /* sign failed                                        */
#define E_EXAR_VERIFY_FAILED             0xB00D000B   /* signature verification failed                      */
#define E_EXAR_KEY_SIZE                  0xB00D000C   /* key size not supported                             */
#define E_EXAR_DATA_LEN                  0xB00D000D   /* data size too big                                  */
#define E_EXAR_ERR_ADDR                  0xB00D0010   /* address error                                      */
#define E_EXAR_ERR_ECC                   0xB00D0011   /* ECC error                                          */
#define E_EXAR_BUSY                      0xB00D0012   /* all engines are busy                               */
#define E_EXAR_PCI_BUSY                  0xB00D0020   /* PCI is busy                                        */
#define E_EXAR_PCI_TIMEOUT               0xB00D0021   /* PCI timeout                                        */
#define E_EXAR_PCI_ACCESS                0xB00D0022   /* PCI access error                                   */
#define E_BCM                            0xB00E       /* CryptoServer module HCE                            */
#define E_BCM_MEM                        0xB00E0001   /* memory allocation failed                           */
#define E_BCM_PCI_MASTER                 0xB00E0002   /* PCI master access error (DSP)                      */
#define E_BCM_KEY_SIZE                   0xB00E0003   /* key size not supported                             */
#define E_BCM_EXP_SIZE                   0xB00E0004   /* exponent greater modulus                           */
#define E_BCM_TIMEOUT                    0xB00E0005   /* hardware engine timeout                            */
#define E_BCM_RESULT_SIZE                0xB00E0006   /* result too big for buffer                          */
#define E_BCM_PRIME_SIZE                 0xB00E0007   /* illegal sizes of prime                             */
#define E_BCM_DATA_LEN                   0xB00E0008   /* data size too big (greater than modulus)           */
#define E_BCM_SELFTST_FAIL               0xB00E0009   /* Self-test failed                                   */
#define E_BCM_NO_LNA                     0xB00E000A   /* Module LNA not found                               */
#define E_BCM_DMA                        0xB00E000B   /* PCI DMA master access error                        */
#define E_BCM_ENGN_ERR                   0xB00E80     /* hardware engine error                              */
#define E_PK                             0xB050       /* CryptoServer module PK                             */
#define E_PK_PARAMETER                   0xB0500001   /* invalid parameter                                  */
#define E_PK_MEMORY                      0xB0500002   /* memory allocation failed                           */
#define E_PK_UNKNOWN_DN_TYPE             0xB0500003   /* unknown distinguished name type                    */
#define E_PK_INVALID_DN                  0xB0500004   /* invalid distinguished name (value or length)       */
#define E_PK_INVALID_TIME_FORMAT         0xB0500005   /* invalid time format                                */
#define E_PK_UNKNOWN_KEY_TYPE            0xB0500006   /* unknown / unsupported key type                     */
#define E_PK_UNKNOWN_SIGN_ALGO           0xB0500007   /* unknown / unsupported signature algorithm          */
#define E_PK_UNKNOWN_HASH_ALGO           0xB0500008   /* unknown / unsupported hash algorithm               */
#define E_PK_INVALID_VERSION             0xB0500009   /* invalid / unsupported version                      */
#define E_PK_P7_UNKNOWN_CONTENT_TYPE     0xB050000A   /* unknown / unsupported PKCS7 content type           */
#define E_PK_P7_NO_VERSION_FOUND         0xB050000B   /* no PKCS7 version found                             */
#define E_PK_P7_UNKNOWN_ELEM_TYPE        0xB050000C   /* unknown PKCS7 element type                         */
#define E_PK_P7_ELEM_TYPE_SIGNATURE      0xB050000D   /* element type SIGNATURE not found                   */
#define E_PK_P7_ELEM_TYPE_ENVELOPED      0xB050000E   /* element type ENVELOPED not found                   */
#define E_PK_P7_ELEM_TYPE_CERT           0xB050000F   /* element type CERT not found                        */
#define E_PK_P7_ELEM_TYPE_AUTH_ATT       0xB0500010   /* element type AUTH_ATT not found                    */
#define E_PK_P7_ELEM_TYPE_UNAUTH_ATT     0xB0500011   /* element type UNAUTH_ATT not found                  */
#define E_PK_P7_ELEM_TYPE_SIG_TIME       0xB0500012   /* element type SIG_TIME not found                    */
#define E_PK_P7_ELEM_TYPE_DATA           0xB0500013   /* element type DATA not found                        */
#define E_PK_P7_SIGNER_CERTIFICATE       0xB0500014   /* no signer certificate given                        */
#define E_PK_P7_NO_DATA_OR_HASH          0xB0500015   /* no data or hash given to perform sign / verify operation */
#define E_PK_P7_INVALID_CONTENT_TYPE     0xB0500016   /* invalid PKCS7 content type                         */
#define E_PK_P7_NO_DIGEST_ALGORITHM      0xB0500017   /* no digest algorithm in PKCS7 data found            */
#define E_PK_P7_NO_SIGNER_INFOS          0xB0500018   /* no signer infos found                              */
#define E_PK_P7_NO_ISSUER                0xB0500019   /* no issuer / serial number found                    */
#define E_PK_P7_NO_OF_ELEM               0xB050001A   /* number of PK_P7_ELEM too small                     */
#define E_PK_P7_SIGNER_REF               0xB050001B   /* invalid signer reference                           */
#define E_PK_P7_CONTENT_TYPE_NOT_SD      0xB050001C   /* content type is not SignedData                     */
#define E_PK_P7_CONTENT_TYPE_NOT_ENV     0xB050001D   /* content type is not Enveloped                      */
#define E_PK_P7_KEY_TYPE_MISMATCH        0xB050001E   /* digestEncryptionAlgorithm doesn't match signer certificate key type */
#define E_PK_P7_VERIFICATION             0xB050001F   /* signature verfication failed                       */
#define E_PK_P7_RECIPIENT_CERT           0xB0500020   /* no recipient certificate given                     */
#define E_PK_P7_UNKNOWN_ENC_KEY_TYPE     0xB0500021   /* unknown / unsupported encryption key type          */
#define E_PK_P7_MULTIPLE_RCPTS           0xB0500022   /* multiple recipients not supported                  */
#define E_PK_P7_CERT_MISMATCH            0xB0500023   /* given certificate doesn't match certificate in PKCS7 structure */
#define E_PK_P7_KEK_ALGO                 0xB0500024   /* given key doesn't match key encryption algorithm   */
#define E_PK_P7_NO_ENC_KEY_ALGO          0xB0500025   /* no key encryption algorithm identifier found       */
#define E_PK_P7_NO_CONTENT_TYPE          0xB0500026   /* no content type found                              */
#define E_PK_P7_NO_CONTENT_KEY_ALGO      0xB0500027   /* no content encryption algorithm identifier found   */
#define E_PK_P7_ATTRIBUTE                0xB0500028   /* invalid attribute structure                        */
#define E_PK_P7_NEED_MORE_SPACE          0xB0500029   /* given buffer / struct doesn't contain enough space for this operation */
#define E_PK_AES_MODULE                  0xB0500030   /* Firmware module AES not loaded                     */
#define E_PK_UNKNOWN_ATT_TYPE            0xB0500031   /* unknown attribute type                             */
#define E_PK_CRL_ISSUER_MISMATCH         0xB0500032   /* CRL issuer doesn't match certificate's subject / issuer */
#define E_PK_CRL_ATTR_NOT_AVAILABLE      0xB0500033   /* requested attribute not available (optional)       */
#define E_PK_CRL_BAD_FORMAT              0xB0500034   /* bad CRL format                                     */
#define E_PK_CRL_NOT_VALID               0xB0500035   /* CRL is not yet valid                               */
#define E_PK_CRL_INIT_NOT_CALLED         0xB0500036   /* partial CRL verification not initialized           */
#define E_PK_CRL_HALGO_MISMATCH          0xB0500037   /* algorithm oid of crl header and trailer differ     */
#define E_PK_UNSUPPORTED_TIME_FORMAT     0xB0500040   /* unsupported time format                            */
#define E_PK_UNSUPPORTED_CENTURY         0xB0500041   /* given time format contains century < 2000          */
#define E_PK_INDEF_LEN                   0xB0500042   /* indefinite length not supportet                    */
#define E_PK_NO_ECDSA                    0xB0500043   /* Firmware module ECDSA not loaded                   */
#define E_PK_P7_INVALID_SIGNER           0xB0500050   /* invalid signer / invalid signer information        */
#define E_PK_P7_INVALID_SIGNER_STRUCT    0xB0500051   /* invalid signer structure (ASN.1 error)             */
#define E_CTS                            0xB061       /* CryptoServer module CTS                            */
#define E_CTS_CMD_LEN                    0xB0610001   /* Wrong command length                               */
#define E_CTS_MEMORY                     0xB0610002   /* memory allocation error                            */
#define E_CTS_INVALID_KEY_ID             0xB0610003   /* Invalid key index                                  */
#define E_CTS_SIGNATURE_OID              0xB0610004   /* Signature Algorithm unsupported (hash or signing)  */
#define E_CTS_DB_ENTRY_EXIST             0xB0610005   /* key index already exists in database               */
#define E_CTS_KEY_NOT_ACTIVE             0xB0610006   /* selected key is not enabled for signing            */
#define E_CTS_NO_ACCORDING_KEY           0xB0610007   /* No key for the imported certificate available      */
#define E_CTS_DATE_EXPIRED               0xB0610008   /* certification validity expired                     */
#define E_CTS_DATE_NOT_YET_VALID         0xB0610009   /* certificate is not yet valid                       */
#define E_CTS_PERMISSION_DENIED          0xB061000A   /* permission denied                                  */
#define E_CTS_NO_CERT_IMPORTED           0xB061000B   /* No certificate to the according key imported       */
#define E_CTS_MBK_NOT_FOUND              0xB061000C   /* mbk from MBK module not found                      */
#define E_CTS_MBK_NOT_LOADED             0xB061000D   /* MBK module not loaded                              */
#define E_CTS_INVALID_TOKEN_LEN          0xB061000E   /* RSA key token length invalid                       */
#define E_CTS_INVALID_HASH               0xB061000F   /* Calculated hash doesn't match given one            */
#define E_CTS_WRONG_DN_TYPE              0xB0610010   /* Unknown DN component                               */
#define E_CTS_DN_NO_STRUCT               0xB0610011   /* Given ASN1_ITEM of a DN is no struct               */
#define E_CTS_DN_NOT_EQUAL               0xB0610012   /* Issuer and Subject not the same                    */
#define E_CTS_UNKNOWN_TAG                0xB0610013   /* (ASN1) Tag unknown                                 */
#define E_CTS_NOT_FOUND                  0xB0610014   /* Given issuer / subject not found                   */
#define E_CTS_CERT_EXIST                 0xB0610015   /* Certificate already exist                          */
#define E_CTS_INVALID_TS_STRUCT          0xB0610016   /* TimeStamp ASN.1 structure not correct              */
#define E_CTS_INVALID_CERTIFICATE        0xB0610017   /* Given certificate not equal to the one in the database */
#define E_CTS_INVALID_TIME_DELAY         0xB0610018   /* Given delay to set the new time is too big         */
#define E_CTS_EXCEEDED_TIME_DELAY        0xB0610019   /* Too many time adjustments on this day              */
#define E_CTS_INVALID_TSA_NAME           0xB061001A   /* TSA name contained in timestamp doesn't match signer name */
#define E_PKCS11                         0xB064       /* CryptoServer module PKCS11                         */
#define E_PKCS11_OBJ_CORR                0xB0640001   /* corrupted object data structure                    */
#define E_PKCS11_BAD_ARG                 0xB0640002   /* bad arguments                                      */
#define E_PKCS11_OBJ_BIG                 0xB0640003   /* object has to many attributes                      */
#define E_PKCS11_APP_COUNT               0xB0640004   /* too many concurrent applications                   */
#define E_PKCS11_APP_BAD                 0xB0640005   /* bad application reference                          */
#define E_PKCS11_OBJHDL_OVL              0xB0640006   /* object handle overflow                             */
#define E_PKCS11_BAD_PUBEXP              0xB0640007   /* bad public exponent                                */
#define E_PKCS11_BAD_MODULUS             0xB0640008   /* bad modulus                                        */
#define E_PKCS11_NO_AES                  0xB0640009   /* AES module not found                               */
#define E_PKCS11_NO_EC                   0xB064000A   /* ECA/ECDSA modules not found                        */
#define E_PKCS11_DENIED                  0xB064000B   /* access denied                                      */
#define E_PKCS11_SLOT_CORR               0xB064000C   /* corrupted slot data structure                      */
#define E_PKCS11_NO_MBK                  0xB064000D   /* MBK module not found                               */
#define E_PKCS11_NO_MBK_KEY              0xB064000E   /* no MBK key loaded                                  */
#define E_PKCS11_INV_BACKUP              0xB064000F   /* invalid backup                                     */
#define E_PKCS11_SHUTDOWN                0xB0640010   /* PKCS#11 service terminated                         */
#define E_PKCS11_SLOT_NOT_EMPTY          0xB0640011   /* slot not empty                                     */
#define E_PKCS11_NO_DSA                  0xB0640012   /* DSA module not found                               */
#define E_PKCS11_APP_TIMEOUT             0xB0640013   /* application timeout                                */
#define E_PKCS11_VALIDITY_PERIOD         0xB0640014   /* validity period has expired                        */
#define E_PKCS11_STD                     0xB0648      /* PKCS#11 standard error                             */
#define E_CXI                            0xB068       /* CryptoServer module CXI                            */
#define E_CXI_MALLOC                     0xB0680000   /* memory allocation error                            */
#define E_CXI_PERMISSION_DENIED          0xB0680001   /* permission denied                                  */
#define E_CXI_BUF_SIZE                   0xB0680002   /* buffer size too small                              */
#define E_CXI_NOT_SUPPORTED              0xB0680003   /* function not supported                             */
#define E_CXI_MBK_NOT_LOADED             0xB0680004   /* MBK firmware module not loaded                     */
#define E_CXI_INVALID_PARAM_TAG          0xB0680005   /* invalid parameter tag                              */
#define E_CXI_INVALID_PARAM_LEN          0xB0680006   /* invalid parameter length                           */
#define E_CXI_INVALID_PARAM_VAL          0xB0680007   /* invalid parameter value                            */
#define E_CXI_INVALID_FLAGS              0xB0680008   /* invalid flags                                      */
#define E_CXI_SFC_RFU                    0xB0680009   /* SFC is reserved for further use                    */
#define E_CXI_INTERNAL                   0xB068000A   /* an internal error occured                          */
#define E_CXI_MBK_TYPE                   0xB068000B   /* invalid MBK key type                               */
#define E_CXI_VALIDITY_PERIOD            0xB068000C   /* validity period has expired                        */
#define E_CXI_PROP_ABSENT                0xB0680010   /* property has to be absent                          */
#define E_CXI_PROP_UNKNOWN               0xB0680011   /* unknown property                                   */
#define E_CXI_PROP_NOT_FOUND             0xB0680012   /* property not found                                 */
#define E_CXI_PROP_EXISTS                0xB0680013   /* property already exists                            */
#define E_CXI_PROP_READONLY              0xB0680014   /* property is read-only                              */
#define E_CXI_PROP_PROTECTED             0xB0680015   /* property is protected                              */
#define E_CXI_PROP_TAG                   0xB0680016   /* invalid property tag                               */
#define E_CXI_PROP_VAL                   0xB0680017   /* invalid property value                             */
#define E_CXI_PROP_LEN                   0xB0680018   /* invalid property length                            */
#define E_CXI_PROP_SENSITIVE             0xB0680019   /* property is sensitive                              */
#define E_CXI_PROP_COMPARE               0xB068001A   /* property doesn't match given template              */
#define E_CXI_PROP_LOCAL_ONLY            0xB068001B   /* property only valid for objects in a group         */
#define E_CXI_KEY_INVALID_ALGO           0xB0680020   /* invalid key algo                                   */
#define E_CXI_KEY_INVALID_SIZE           0xB0680021   /* invalid key size                                   */
#define E_CXI_KEY_INVALID_TAG            0xB0680022   /* invalid key tag                                    */
#define E_CXI_KEY_INVALID_COMP           0xB0680023   /* invalid key component                              */
#define E_CXI_KEY_BLOB_FORMAT            0xB0680024   /* invalid format of key blob                         */
#define E_CXI_KEY_TYPE                   0xB0680025   /* invalid key type                                   */
#define E_CXI_KEY_BLOB_MAC               0xB0680026   /* invalid mac of key blob                            */
#define E_CXI_KEY_INVALID_NAME           0xB0680027   /* invalid key name                                   */
#define E_CXI_KEY_INVALID_TOKEN          0xB0680028   /* invalid key token                                  */
#define E_CXI_KEY_MISSING_COMP           0xB0680029   /* missing key component                              */
#define E_CXI_KEY_EXPORT_DENIED          0xB068002B   /* key export is denied                               */
#define E_CXI_KEY_IMPORT_DENIED          0xB068002C   /* key import is denied                               */
#define E_CXI_KEY_MECH_NOT_ALLOWED       0xB068002D   /* mechanism not allowed                              */
#define E_CXI_KEY_INVALID_BLEN           0xB068002E   /* invalid block length                               */
#define E_CXI_KEY_USAGE                  0xB068002F   /* illegal key usage                                  */
#define E_CXI_CRYPT_PADDING              0xB0680030   /* invalid padding                                    */
#define E_CXI_CRYPT_MECH                 0xB0680031   /* invalid mechanism                                  */
#define E_CXI_CRYPT_IV_LEN               0xB0680032   /* invalid IV length                                  */
#define E_CXI_CRYPT_SIGN_VERIFY          0xB0680033   /* signature verification failed                      */
#define E_CXI_CRYPT_DATA_LEN             0xB0680034   /* invalid data length                                */
#define E_CXI_CRYPT_MECH_PARA            0xB0680035   /* invalid mechanism parameter                        */
#define E_CXI_ITEM_NOT_FOUND             0xB0680040   /* item not found                                     */
#define E_CXI_ITEM_TAG                   0xB0680041   /* invalid item tag                                   */
#define E_CXI_ITEM_LEN                   0xB0680042   /* invalid item length                                */
#define E_CXI_ITEM_VAL                   0xB0680043   /* invalid item value                                 */
#define E_CXI_ITEM_COUNT                 0xB0680044   /* invalid number of items                            */
#define E_CXI_FILE_SIZE                  0xB0680050   /* invalid file size                                  */
#define E_CXI_ABORT_ENUM                 0xB0680060   /* enumeration was aborted                            */
#define E_CXI_INVALID_IN_PARAM           0xB0680061   /* invalid input parameter                            */
#define E_CXI_FIPS                       0xB06801     /* FIPS mode                                          */
#define E_CXI_FIPS_BLOCKED               0xB0680100   /* function not available in FIPS mode                */
#define E_CXI_FIPS_MECH                  0xB0680101   /* mechanism not supported in FIPS mode               */
#define E_CXI_FIPS_OBJ_TYPE              0xB0680102   /* object type not available in FIPS mode             */
#define E_CXI_FIPS_ALGO                  0xB0680103   /* algorithm not available in FIPS mode               */
#define E_CXI_FIPS_KEY_SIZE              0xB0680104   /* key size not allowed in FIPS mode                  */
#define E_CXI_FIPS_KEY_IMPORT            0xB0680105   /* clear text key import not allowed in FIPS mode     */
#define E_CXI_FIPS_KEY_EXPORT            0xB0680106   /* clear text key export not allowed in FIPS mode     */
#define E_CXI_FIPS_PROP                  0xB0680107   /* property not available in FIPS mode                */
#define E_CXI_NO_FIPS_CURVE              0xB0680108   /* Curve not available in FIPS mode                   */
#define E_CXI_FIPS_KEY_USAGE             0xB0680109   /* Key usage is restricted in FIPS mode               */
#define E_CXI_SECURE                     0xB06802     /* SECURE                                             */
#define E_CXI_SECURE_PROP_DECRYPT        0xB0680200   /* decrypt property true not allowed                  */
#define E_CXI_SECURE_PROP_ENCRYPT        0xB0680201   /* encrypt property true not allowed                  */
#define E_CXI_SECURE_PROP_ALWAYS_SENSITIVE_FALSE   0xB0680202   /* always sensitive property false not allowed        */
#define E_CXI_SECURE_PROP_SENSITIVE_FALSE   0xB0680203   /* sensitive property false not allowed               */
#define E_CXI_SECURE_PROP_WRAP           0xB0680204   /* wrap property true not allowed                     */
#define E_CXI_SECURE_PUBLIC_WRAPPING     0xB0680205   /* cannot use public keys for wrapping                */
#define E_CXI_SECURE_PROP_CHECK_VALUE    0xB0680206   /* check value missing or invalid                     */
#define E_FTEST_MALLOC                   0xB0800001
#define E_VDES                           0xB081       /* CryptoServer module VDES                           */
#define E_VDES_DATA_LEN                  0xB0810001   /* length of data is not a multiple of 8 bytes        */
#define E_VDES_KEY_LEN                   0xB0810002   /* length of key is not 8, 16, or 24                  */
#define E_VDES_MEM                       0xB0810003   /* cannot allocate memory                             */
#define E_VDES_WEAK                      0xB0810004   /* key is weak                                        */
#define E_VDES_SEMI_WEAK                 0xB0810005   /* key is semi-weak                                   */
#define E_VDES_SHORT_KEY                 0xB0810006   /* two of the 8byte key parts are identical           */
#define E_VDES_MODE                      0xB0810007   /* mode is unknown                                    */
#define E_VDES_READ_MASTER_KEY           0xB0810008   /* could not get local Master Key                     */
#define E_VDES_PAD_TYPE                  0xB0810009   /* unknown padding mechanism                          */
#define E_VDES_PAD                       0xB081000A   /* invalid padding                                    */
#define E_VDES_PARAM                     0xB081000B   /* invalid parameter                                  */
#define E_VDES_POSSIBLY_WEAK             0xB081000C   /* key is possibly weak                               */
#define E_VDES_ZERO_LENGTH               0xB081000E   /* Zero length not allowed                            */
#define E_PP                             0xB082       /* CryptoServer module PP, PIN pad driver             */
#define E_PP_ABORT                       0xB0820001   /* operation aborted by user                          */
#define E_PP_LEN                         0xB0820002   /* command block too long                             */
#define E_PP_WRITE_TIMEOUT               0xB0820003   /* timeout while writing to PIN pad                   */
#define E_PP_BUFSIZE                     0xB0820004   /* answer buffer too small                            */
#define E_PP_READ_TIMEOUT                0xB0820005   /* timeout while reading from PIN pad                 */
#define E_PP_IO                          0xB0820006   /* IO error                                           */
#define E_PP_NOT_OPEN                    0xB0820007   /* connection not open                                */
#define E_PP_INVAL                       0xB0820008   /* invalid parameter                                  */
#define E_PP_BAD_RAPDU                   0xB0820009   /* bad RAPDU from smartcard                           */
#define E_PP_NO_CARD                     0xB082000A   /* no smartcard in reader                             */
#define E_PP_BAD_TYPE                    0xB082000B   /* bad PIN pad type specified                         */
#define E_PP_DATALEN                     0xB082000C   /* bad length of command block                        */
#define E_PP_PROT                        0xB082000D   /* protocol error                                     */
#define E_PP_KEY_TIMEOUT                 0xB082000E   /* timeout while waiting for key input                */
#define E_PP_RESET_TIMEOUT               0xB082000F   /* timeout while waiting for card insertation         */
#define E_PP_PIN_REPETITION              0xB0820010   /* bad repetition of PIN entry                        */
#define E_PP_NOT_SUPPORTED               0xB0820011   /* function is not supported                          */
#define E_PP_PARAM                       0xB0820012   /* invalid parameter                                  */
#define E_PP_ACCESS_DENIED               0xB0820013   /* access denied                                      */
#define E_PP_BAD_INPUT                   0xB0820014   /* bad input                                          */
#define E_PP_CARD_TIMEOUT                0xB0820015   /* no response from smartcard                         */
#define E_PP_READER_NOT_CONNECTED        0xB0820016   /* no supported smartcard reader connected            */
#define E_PP_CC_BLOCKED                  0xB0820017   /* not allowed in CC Endorsed Mode                    */
#define E_PP_PPERR                       0xB08201     /* PIN pad error                                      */
#define E_PP_CCID                        0xB08202     /* CCID Error                                         */
#define E_CMDS                           0xB083       /* CryptoServer module CMDS, Command scheduler        */
#define E_CMDS_DENIED                    0xB0830001   /* permission denied                                  */
#define E_CMDS_NO_MEM                    0xB0830002   /* can't alloc memory                                 */
#define E_CMDS_INVAL                     0xB0830003   /* invalid parameter                                  */
#define E_CMDS_IN_USE                    0xB0830004   /* module id already in use                           */
#define E_CMDS_BAD_FC                    0xB0830005   /* bad function code (module ID)                      */
#define E_CMDS_BAD_SFC                   0xB0830006   /* function doesn't exist                             */
#define E_CMDS_BAD_NAME                  0xB0830007   /* invalid user name                                  */
#define E_CMDS_DATA_LEN                  0xB0830008   /* illegal length of command block                    */
#define E_CMDS_TASK_ERR                  0xB0830009   /* can't create task                                  */
#define E_CMDS_BAD_TAG                   0xB083000A   /* bad tag of command block                           */
#define E_CMDS_FMT_LEN                   0xB083000B   /* bad length within format string (scanf)            */
#define E_CMDS_BAD_CMD                   0xB083000C   /* bad format of command block                        */
#define E_CMDS_BAD_OUT                   0xB083000D   /* bad parameter structure (scanf)                    */
#define E_CMDS_BAD_FMT                   0xB083000E   /* bad format string (scanf)                          */
#define E_CMDS_USER_EXISTS               0xB083000F   /* user already exists                                */
#define E_CMDS_BAD_MECH                  0xB0830010   /* invalid mechanism                                  */
#define E_CMDS_NO_DB                     0xB0830011   /* no DB module present                               */
#define E_CMDS_BAD_AUTH_CMD              0xB0830012   /* invalid AUTH layer command                         */
#define E_CMDS_AUTH_FAILED               0xB0830013   /* authentication failed                              */
#define E_CMDS_NO_VRSA                   0xB0830014   /* no VRSA module present                             */
#define E_CMDS_BAD_PERM                  0xB0830015   /* bad permission mask                                */
#define E_CMDS_NO_USER                   0xB0830016   /* unknown user                                       */
#define E_CMDS_BAD_ATT                   0xB0830017   /* bad user attributes                                */
#define E_CMDS_LOGOFF_FAILED             0xB083001B   /* logoff failed                                      */
#define E_CMDS_USER_ACTIVE               0xB083001C   /* logged in user can't be deleted                    */
#define E_CMDS_BAD_TOKEN                 0xB083001D   /* bad user token (key or password)                   */
#define E_CMDS_NO_VDES                   0xB083001E   /* no VDES module present                             */
#define E_CMDS_NO_UTIL                   0xB083001F   /* no UTIL module present                             */
#define E_CMDS_NO_HASH                   0xB0830020   /* no HASH module present                             */
#define E_CMDS_SM_FAILED                 0xB0830021   /* secure messaging failed                            */
#define E_CMDS_SM_EXPIRED                0xB0830022   /* secure messaging session expired                   */
#define E_CMDS_SM_ID                     0xB0830023   /* invalid secure messaging ID                        */
#define E_CMDS_BF_OVL                    0xB0830024   /* internal buffer overflow                           */
#define E_CMDS_FIPS_INIT                 0xB0830025   /* FIPS140 initialization failed                      */
#define E_CMDS_USER_MODE                 0xB0830026   /* mode does not match user                           */
#define E_CMDS_BAD_MODE                  0xB0830027   /* invalid mode                                       */
#define E_CMDS_BAD_SIZE                  0xB0830028   /* illegal answer buffer size                         */
#define E_CMDS_NO_MBK                    0xB0830029   /* no MBK module present                              */
#define E_CMDS_INVAL_BCK                 0xB083002A   /* invalid backup data                                */
#define E_CMDS_BAD_UDB_ENTRY             0xB083002B   /* bad entry in user DB (internal error)              */
#define E_CMDS_BUFF_SIZE                 0xB083002C   /* buffer size too small                              */
#define E_CMDS_NO_MBK_KEY                0xB083002D   /* no MBK key found                                   */
#define E_CMDS_MBK_TYPE                  0xB083002E   /* MBK type does not match                            */
#define E_CMDS_NO_AES                    0xB083002F   /* no AES module present                              */
#define E_CMDS_NO_HMAC                   0xB0830030   /* no HMAC algorithm available                        */
#define E_CMDS_NO_ECC                    0xB0830031   /* no ECC algorithm available                         */
#define E_CMDS_ALARM                     0xB0830032   /* ALARM state                                        */
#define E_CMDS_BAD_INITKEY               0xB0830033   /* bad file 'init.key'                                */
#define E_CMDS_ADMIN_AMPUTATION          0xB0830034   /* Administrator must remain                          */
#define E_CMDS_USER_FLAG_NOT_ALLOWED     0xB0830035   /* user flag not allowed                              */
#define E_CMDS_SM_PERM_DIFF              0xB0830036   /* permissions of users of same session must not differ */
#define E_CMDS_NVRAM                     0xB0830037   /* error acessing NVRAM                               */
#define E_CMDS_AUTH_FAIL_CNT_EXCEEDED    0xB0830038   /* too many unsuccessful authentication tries         */
#define E_CMDS_PARAM_FIPS                0xB0830039   /* parameter not valid in FIPS mode                   */
#define E_CMDS_DENIED_FIPS               0xB083003A   /* authentication mandatory in FIPS mode              */
#define E_CMDS_BAD_MECH_FIPS             0xB083003B   /* mechanism not allowed in FIPS mode                 */
#define E_CMDS_BAD_ATT_FIPS              0xB083003C   /* user attributes not allowed in FIPS mode           */
#define E_CMDS_BAD_USER_FLAG_FIPS        0xB083003D   /* user flag not allowed in FIPS mode                 */
#define E_CMDS_MAX_AUTH_USER_REACHED     0xB083003E   /* maximum of logged in/authenticated users reached   */
#define E_CMDS_SM_MISSING_FIPS           0xB083003F   /* authentication without secure messaging not allowed in FIPS mode */
#define E_CMDS_LOGIN_FIPS                0xB0830040   /* static login not allowed in FIPS mode              */
#define E_CMDS_AUTH_FIPS_ESTATE          0xB0830041   /* authentication not available in FIPS error state   */
#define E_CMDS_FIPS_BLOCKED              0xB0830042   /* function not available in FIPS mode                */
#define E_CMDS_FIPS_ERROR_STATE          0xB0830043   /* function not available in FIPS error state         */
#define E_CMDS_ADMIN_BAD_FUNC            0xB0830044   /* function is blocked in Administration Mode         */
#define E_CMDS_MAX_AUTH_FAIL_READ        0xB0830046   /* file for MaxAuthFailures corrupted                 */
#define E_CMDS_LOGIN_CC                  0xB0830050   /* static login not allowed in CC mode                */
#define E_CMDS_AUTH_CC_ESTATE            0xB0830051   /* authentication not available in CC error state     */
#define E_CMDS_CC_BLOCKED                0xB0830052   /* function not available in CC mode                  */
#define E_CMDS_CC_ERROR_STATE            0xB0830053   /* function not available in CC error state           */
#define E_CMDS_CC_INIT                   0xB0830054   /* CC-CMS initialization failed                       */
#define E_CMDS_BAD_PERM_CC               0xB0830055   /* permissions must not overlap in CC mode            */
#define E_CMDS_CC_MISSING                0xB0830056   /* cc-cms.msc module missing in flash                 */
#define E_CMDS_BAD_TOKEN_CC              0xB0830057   /* RSA token < 1024 bit not allowed in CC mode        */
#define E_CMDS_PARAM_CC                  0xB0830059   /* parameter not valid in CC mode                     */
#define E_CMDS_DENIED_CC                 0xB083005A   /* authentication mandatory in CC mode                */
#define E_CMDS_BAD_MECH_CC               0xB083005B   /* mechanism not allowed in CC mode                   */
#define E_CMDS_BAD_ATT_CC                0xB083005C   /* user attributes not allowed in CC mode             */
#define E_CMDS_BAD_USER_FLAG_CC          0xB083005D   /* user flag not allowed in CC mode                   */
#define E_CMDS_SM_MISSING_CC             0xB083005F   /* authentication without secure messaging not allowed in CC mode */
#define E_CMDS_SM_DH_BAD_PARAM           0xB0830060   /* DH parameter from host for sessionkey is weak      */
#define E_CMDS_SFC_DISABLED              0xB0830061   /* This function is not available in this HSM configuration */
#define E_CMDS_HASH_VERS                 0xB0830062   /* wrong version of HASH module                       */
#define E_CMDS_CHALLENGE_LEN             0xB0830063   /* illegal challenge length requested                 */
#define E_CMDS_SM_MA_ALARM               0xB0830064   /* Mutual Authentication not available in alarm state */
#define E_VRSA                           0xB084       /* CryptoServer module VRSA                           */
#define E_VRSA_MEM                       0xB0840001   /* cannot allocate memory                             */
#define E_VRSA_BUFF_TOO_SMALL            0xB0840002   /* buffer for result is to small                      */
#define E_VRSA_BAD_DATA                  0xB0840003   /* bad raw data value                                 */
#define E_VRSA_BAD_MODULUS               0xB0840004   /* modulus is not p * q                               */
#define E_VRSA_P_GREATER_Q               0xB0840006   /* p is greater or equal than q                       */
#define E_VRSA_BAD_U                     0xB0840009   /* u is not (1/q) mod p                               */
#define E_VRSA_BAD_DP                    0xB084000A   /* dp is not d mod (p-1)                              */
#define E_VRSA_BAD_DQ                    0xB084000B   /* dq is not d mod (q-1)                              */
#define E_VRSA_NO_KEYTOKEN               0xB084000C   /* byte string is not a keytoken                      */
#define E_VRSA_NO_COMP                   0xB084000D   /* component is not a member of this key token        */
#define E_VRSA_DOUBLE_COMP               0xB084000E   /* component is already a member of this key token    */
#define E_VRSA_INVALID_FLAG              0xB084000F   /* value for flags is invalid                         */
#define E_VRSA_HASH_ALGO                 0xB0840010   /* Invalid hash algorithm                             */
#define E_VRSA_VERIFY_FAILED             0xB0840011   /* Signature verification failed                      */
#define E_VRSA_KEY_TOO_SMALL             0xB0840012   /* Key length too small                               */
#define E_VRSA_MOD_TOO_SMALL             0xB0840014   /* modulus to small                                   */
#define E_VRSA_BAD_KEY                   0xB0840015   /* bad key components P and Q                         */
#define E_VRSA_DATA_LEN                  0xB0840016   /* data size too big (greater than modulus)           */
#define E_VRSA_MISS_COMP                 0xB0840017   /* missing component in key token                     */
#define E_VRSA_INV_PARAM                 0xB0840018   /* invalid parameter                                  */
#define E_VRSA_BAD_PEXP                  0xB0840019   /* gcd(p-1,e) != 1 or gcd(q-1,e) != 1                 */
#define E_VRSA_BAD_SEXP                  0xB084001A   /* d * e != 1 mod (p-1)(q-1)                          */
#define E_VRSA_OBSOLETE                  0xB084001B   /* function obsolete                                  */
#define E_VRSA_KGEN_FAILED               0xB084001C   /* key generation failed                              */
#define E_VRSA_BAD_BLINDING              0xB084001D   /* invalid blinding value                             */
#define E_VRSA_BVGEN_FAILED              0xB084001E   /* blinding value generation failed                   */
#define E_VRSA_DECRYPT_FAILED            0xB084001F   /* PKCS#1 decryption failed                           */
#define E_VRSA_INV_PEXP                  0xB0840020   /* invalid public exponent                            */
#define E_VRSA_KEYT_LEN                  0xB0840021   /* bad length of key token                            */
#define E_VRSA_ENCODING                  0xB0840022   /* PKCS#1 encoding error                              */
#define E_VRSA_PAIRWISE_CONSISTENCY      0xB0840023   /* The pairwise consistency test failed !             */
#define E_VRSA_FUNC_NOT_AVAILABLE        0xB0840024   /* Function is not available                          */
#define E_VRSA_BAD_BLINDING_MECH         0xB0840025   /* Blinding mechanism unknown                         */
#define E_VRSA_BAD_KEYT                  0xB0840100   /* bad key token in command string                    */
#define E_VRSA_RND_SYNC                  0xB0840101   /* random number request does not match (FIPS test)   */
#define E_VRSA_KEY_TOO_SMALL_FIPS        0xB0840102   /* Key length too small (FIPS140)                     */
#define E_VRSA_KEY_TOO_SMALL_CC          0xB0840103   /* Key length too small (CC)                          */
#define E_SC                             0xB085       /* CryptoServer Module SC                             */
#define E_SC_APPL_NAME                   0xB0850001   /* Bad Length of Application Name                     */
#define E_SC_APDU_SELECT                 0xB0850002   /* Card Error from "select" Command                   */
#define E_SC_APDU_IAUTH                  0xB0850003   /* Card Error from "internal auth." Command           */
#define E_SC_BAD_KEY                     0xB0850004   /* Wrong SM Key                                       */
#define E_SC_APDU_VERPWD                 0xB0850005   /* Card Error from "ver. passw." Command              */
#define E_SC_APDU_MSE                    0xB0850006   /* Card Error from "mse" Command                      */
#define E_SC_APDU_READREC                0xB0850007   /* Card Error from "read record" Command              */
#define E_SC_RECLEN                      0xB0850008   /* Bad Record Length                                  */
#define E_SC_NO_RECORD                   0xB0850009   /* Record not Found                                   */
#define E_SC_NO_FILE                     0xB085000A   /* File not Found                                     */
#define E_SC_DENIED                      0xB085000B   /* Access Denid                                       */
#define E_SC_BAD_PARAM                   0xB085000C   /* Bad Parameter: SFI, REC#                           */
#define E_SC_DATALEN                     0xB085000D   /* Bad Data Length                                    */
#define E_SC_SM                          0xB085000E   /* Bad Tag for SM                                     */
#define E_SC_APDU_UPDREC                 0xB085000F   /* Card Error from "update record" Command            */
#define E_SC_APDU_CHGPWD                 0xB0850010   /* Card Error from "chg. passw." Command              */
#define E_SC_NO_PWDFILE                  0xB0850011   /* Pasword File not Found                             */
#define E_SC_BAD_PDATA                   0xB0850012   /* Bad Personalization Data                           */
#define E_SC_APDU_PERS                   0xB0850013   /* Card Error while Personalizing                     */
#define E_SC_APDU_GETSKEY                0xB0850014   /* Card Error from "get sessionkey" Command           */
#define E_SC_NO_APPL                     0xB0850015   /* Application not Found                              */
#define E_SC_APDU_READBIN                0xB0850016   /* Card Error from "read binary" Command              */
#define E_SC_BAD_PIN_LEN                 0xB0850017   /* Bad PIN Length                                     */
#define E_SC_MEM                         0xB0850018   /* Memory Allocation Error                            */
#define E_SC_APDU_PSO                    0xB0850019   /* Card Error from "pso" Command                      */
#define E_SC_BAD_CERT                    0xB085001A   /* Bad Certificate Format                             */
#define E_SC_APDU_GETDATA                0xB085001B   /* Card Error from "get data" Command                 */
#define E_SC_BAD_APPLTYPE                0xB085001C   /* Unknown Application Type                           */
#define E_SC_NOT_IMPLEMENTED             0xB085001D   /* This Action is not Implmented on the Found Card Type */
#define E_SC_INVALID_PIN                 0xB085001E   /* Invalid Pin                                        */
#define E_SC_NOT_SUPPORTED               0xB085001F   /* Signing Supported until 48 Byte (Possible Hashes md5, ripemd160, sha1, sha224) */
#define E_SC_WRONG_CARD_MODE             0xB0850020   /* Wrong Command for Card Application                 */
#define E_SC_HASH_SIZE                   0xB0850021   /* Hash Size Bigger than 40% of the Key Size          */
#define E_SC_NOPEN_OR_UNKNOWN            0xB0850022   /* Card not Opened Before or Unknown Card             */
#define E_UTIL                           0xB086       /* CryptoServer module UTIL                           */
#define E_UTIL_RTC_OPEN                  0xB0860001   /* Error opening RTC Device                           */
#define E_UTIL_RTC_IOCTL                 0xB0860002   /* RTC: IOCTL Error                                   */
#define E_UTIL_RTC_READ                  0xB0860003   /* RTC: Read Error                                    */
#define E_UTIL_RTC_WRITE                 0xB0860004   /* RTC: Write Error                                   */
#define E_UTIL_RTC_CLOSE                 0xB0860005   /* Error closing RTC Device                           */
#define E_UTIL_TIME_WRONG_FORMAT         0xB0860006   /* Wrong Time Format                                  */
#define E_UTIL_TIME_NULL_POINTER         0xB0860007   /* Null Pointer given                                 */
#define E_UTIL_FILE_OPEN                 0xB0860008   /* File Open Error                                    */
#define E_UTIL_FILE_READ                 0xB0860009   /* File Read Error                                    */
#define E_UTIL_FILE_CLOSE                0xB086000A   /* File Close Error                                   */
#define E_UTIL_RND_NULL_POINTER          0xB086000B   /* Null Pointer given                                 */
#define E_UTIL_RND_FAILED                0xB086000C   /* Random Number Generator failed                     */
#define E_UTIL_MALLOC                    0xB086000D   /* Error allocating Memory                            */
#define E_UTIL_INVAL                     0xB086000E   /* invalid argument                                   */
#define E_UTIL_NOT_SUPPORTED             0xB086000F   /* function not supported                             */
#define E_UTIL_RND_KAT                   0xB0860010   /* Known answer test failed                           */
#define E_UTIL_RND_INIT                  0xB0860011   /* Random Number Generator is not initialized         */
#define E_UTIL_RND_PARAMETER             0xB0860012   /* Bad Parameter                                      */
#define E_UTIL_RND_SEC_STRENGTH          0xB0860013   /* Given security strength not supported              */
#define E_UTIL_RND_REQ                   0xB0860014   /* Max number of requested randombits per call exceeded */
#define E_UTIL_RND_PRED_RESISTANCE       0xB0860015   /* prediction resistance not supported for current handle */
#define E_UTIL_TIME_RTC_POWER_FAILED     0xB0860020   /* RTC has lost power                                 */
#define E_UTIL_TIME_NOT_INIT             0xB0860021   /* RTC is not initialized (RTC has to be set)         */
#define E_UTIL_LINK_SMOS                 0xB086FC00   /* SMOS Version does not match                        */
#define E_ADM                            0xB087       /* CryptoServer module ADM                            */
#define E_ADM_FILE_OPEN                  0xB0870001   /* file open error                                    */
#define E_ADM_FILE_READ                  0xB0870002   /* file read error                                    */
#define E_ADM_FILE_WRITE                 0xB0870003   /* file write error                                   */
#define E_ADM_FILE_CLOSE                 0xB0870004   /* file close error                                   */
#define E_ADM_FILE_MISSING               0xB0870005   /* file (module) does not exist                       */
#define E_ADM_WRONG_FILE_NAME            0xB0870006   /* wrong filename syntax                              */
#define E_ADM_NO_MDL_INFO                0xB0870007   /* no module info found                               */
#define E_ADM_FILE_NOT_FOUND             0xB0870008   /* file not found                                     */
#define E_ADM_MDL_VERSION_MISSING        0xB087000A   /* no modules version found                           */
#define E_ADM_DATA_LEN                   0xB087000B   /* wrong command data length                          */
#define E_ADM_I2C_OPEN                   0xB087000C   /* unable to open i2c device                          */
#define E_ADM_I2C_READ                   0xB087000D   /* unable to read i2c device                          */
#define E_ADM_PERMISSION_DENIED          0xB087000F   /* permission denied                                  */
#define E_ADM_FILE_SIZE_TOO_BIG          0xB0870011   /* file size exceeds limit                            */
#define E_ADM_BAD_SIGNATURE              0xB0870012   /* bad signature                                      */
#define E_ADM_NO_UTIL                    0xB0870013   /* no UTIL module present                             */
#define E_ADM_MALLOC                     0xB0870014   /* memory allocation error                            */
#define E_ADM_NOT_SUPPORTED              0xB0870015   /* function not supported                             */
#define E_ADM_INVALID_CRC                0xB0870016   /* invalid crc                                        */
#define E_ADM_INVALID_SIZE               0xB0870017   /* invalid size                                       */
#define E_ADM_BAD_MMC                    0xB0870018   /* bad MMC format                                     */
#define E_ADM_NO_HASH                    0xB0870019   /* no HASH module present                             */
#define E_ADM_NO_VRSA                    0xB087001A   /* no VRSA module present                             */
#define E_ADM_NO_DB                      0xB087001B   /* no DB module present                               */
#define E_ADM_NO_AES                     0xB087001C   /* no AES module present                              */
#define E_ADM_MDL_DEC_FAIL               0xB087001D   /* module decryption failed                           */
#define E_ADM_KEY_TYPE                   0xB087001E   /* invalid key type                                   */
#define E_ADM_INVALID_PARAM              0xB087001F   /* invalid parameter                                  */
#define E_ADM_FILE_TYPE                  0xB0870020   /* invalid file type                                  */
#define E_ADM_ITEM_LEN                   0xB0870021   /* invalid item length                                */
#define E_ADM_ITEM_NOT_FOUND             0xB0870022   /* item not found                                     */
#define E_ADM_NO_MBK                     0xB0870023   /* no MBK module present                              */
#define E_ADM_NO_MBK_KEY                 0xB0870024   /* no MBK key available                               */
#define E_ADM_MEM                        0xB0870025   /* cannot allocate memory                             */
#define E_ADM_MEM_SEC                    0xB0870026   /* cannot allocate secure memory                      */
#define E_ADM_MBK_DB_EXP                 0xB0870027   /* export of MBK database not allowed                 */
#define E_ADM_MBK_TYPE                   0xB0870028   /* invalid MBK value (valid: 0 (DES), 1 (AES))        */
#define E_ADM_MBK_DIFFER                 0xB0870029   /* given MBK type differs to stored MBK with the highest priority */
#define E_ADM_MAC                        0xB087002A   /* given MAC differs to calculated MAC                */
#define E_ADM_KEY_INDEX                  0xB087002B   /* given DB index differs to original DB index        */
#define E_ADM_SESSION_DB_IMP             0xB087002C   /* import of database session.db not allowed          */
#define E_ADM_SESSION_DB_EXP             0xB087002D   /* export of database session.db not allowed          */
#define E_ADM_MBK_DB_IMP                 0xB087002E   /* import of MBK database not allowed                 */
#define E_ADM_MDL                        0xB087003    /* module section                                     */
#define E_ADM_MDL_MTC_HDR_INV            0xB0870030   /* invalid MTC header                                 */
#define E_ADM_MDL_MMC_HDR_INV            0xB0870031   /* invalid MMC header                                 */
#define E_ADM_MDL_MSC_HDR_INV            0xB0870032   /* invalid MSC header                                 */
#define E_ADM_MDL_SIG_HDR_INV            0xB0870033   /* invalid MSC header                                 */
#define E_ADM_MDL_SLF_HDR_INV            0xB0870034   /* invalid SLF header                                 */
#define E_ADM_MDL_NO_INFO                0xB0870035   /* no module info found                               */
#define E_ADM_MDL_MTC_NO_SIG             0xB0870036   /* MTC doesn't contain signature                      */
#define E_ADM_MDL_MMC_HASH               0xB0870037   /* invalid MMC hash                                   */
#define E_ADM_MDL_DECRYPT                0xB0870038   /* can't decrypt firmware module                      */
#define E_ADM_MDL_SCF_HDR_INV            0xB0870039   /* invalid SCF header                                 */
#define E_ADM_KEY                        0xB087004    /* key section                                        */
#define E_ADM_KEY_CORRUPTED              0xB0870040   /* key is corrupted                                   */
#define E_ADM_CFG                        0xB087005    /* cfg section                                        */
#define E_ADM_CFG_MDL_NOT_FOUND          0xB0870051   /* could not retrieve version of requested module     */
#define E_ADM_CFG_MDL_TOO_OLD            0xB0870052   /* requested module is too old, does not yet support cfg */
#define E_ADM_CFG_MDL_UNKNOWN            0xB0870053   /* unknown module, unknown how to cfg                 */
#define E_ADM_CFG_AMSK_BLOCKED           0xB0870054   /* loading of an Alternative Module Signature Key is blocked */
#define E_ADM_FIPS                       0xB087006    /* FIPS section                                       */
#define E_ADM_FIPS_MDL                   0xB0870061   /* evaluation of FIPS mode has gone wrong             */
#define E_ADM_FIPS_RESTRICTED            0xB0870062   /* virtual error code for restricted FIPS mode        */
#define E_ADM_FIPS_BLOCKED               0xB0870063   /* function not available in FIPS mode                */
#define E_ADM_FIPS_ERROR_STATE           0xB0870064   /* function not available in FIPS error state         */
#define E_ADM_CC_BLOCKED                 0xB0870070   /* not allowed in CC Endorsed Mode                    */
#define E_ADM_CC_ERROR_STATE             0xB0870071   /* not allowed in CC Error State                      */
#define E_ADM_AUTH_KEY_DB_IMP            0xB0870080   /* import of authentication key database not allowed  */
#define E_ADM_AUTH_KEY_DB_EXP            0xB0870081   /* export of authentication key database not allowed  */
#define E_DB                             0xB088       /* CryptoServer Database Module                       */
#define E_DB_NO_MEM                      0xB0880001   /* memory allocation failed                           */
#define E_DB_BAD_MKEY                    0xB0880002   /* bad master encryption key                          */
#define E_DB_NO_SPACE                    0xB0880003   /* no space in database                               */
#define E_DB_NOT_FOUND                   0xB0880004   /* record not found                                   */
#define E_DB_EXISTS                      0xB0880005   /* record already exists                              */
#define E_DB_NO_CACHE                    0xB0880006   /* no space in cache                                  */
#define E_DB_COR_FILE                    0xB0880007   /* corrupted database file                            */
#define E_DB_REC_CRC                     0xB0880008   /* record CRC error                                   */
#define E_DB_BAD_NAME                    0xB0880009   /* bad database name                                  */
#define E_DB_BAD_HANDLE                  0xB088000A   /* bad database handle                                */
#define E_DB_FILE_TYPE                   0xB088000B   /* bad file type of database file                     */
#define E_DB_BAD_INFO                    0xB088000D   /* bad info structure                                 */
#define E_DB_IN_USE                      0xB088000E   /* database in use                                    */
#define E_DB_LENGTH                      0xB088000F   /* bad data length                                    */
#define E_DB_HDL_CONF                    0xB0880011   /* database handle confused                           */
#define E_DB_INCONS                      0xB0880012   /* internal inconsistency                             */
#define E_DB_SMOSVER                     0xB0880013   /* SMOS version is too old                            */
#define E_DB_DATALEN                     0xB0881000   /* bad length of command block                        */
#define E_DB_FILE_ERR                    0xB0881001   /* io error on database file                          */
#define E_DB_NOT_OPEN                    0xB0881002   /* test database not open                             */
#define E_DB_CORR_HDL                    0xB0881003   /* db handle corrupted                                */
#define E_DB_CORR_NODE                   0xB0881004   /* db node corrupted                                  */
#define E_DB_CORR_CACHE                  0xB0881005   /* db cache corrupted                                 */
#define E_HASH                           0xB089       /* CryptoServer module HASH                           */
#define E_HASH_MEM                       0xB0890001   /* Memory Error                                       */
#define E_HASH_PARAMETER                 0xB0890002   /* Illegal Parameter                                  */
#define E_HASH_LEN                       0xB0890003   /* Illegal Length                                     */
#define E_HASH_MODE                      0xB0890004   /* Illegal Mode                                       */
#define E_HASH_FUNCTION                  0xB0890005   /* Function not supported                             */
#define E_HASH_MODE_FIPS                 0xB0890006   /* Mode not permitted in FIPS mode                    */
#define E_AES                            0xB08B       /* CryptoServer module AES                            */
#define E_AES_DATA_LEN                   0xB08B0001   /* length of data is not a multiple of 16 bytes       */
#define E_AES_KEY_LEN                    0xB08B0002   /* length of key is not 16, 24, or 32                 */
#define E_AES_MEM                        0xB08B0003   /* cannot allocate memory                             */
#define E_AES_MODE                       0xB08B0004   /* mode is unknown                                    */
#define E_AES_CFB1_DEC_MODE              0xB08B0005   /* For cfb1 decryption the key must always prepared for encryption */
#define E_AES_PAD_TYPE                   0xB08B0006   /* unknown padding mechanism                          */
#define E_AES_PAD                        0xB08B0007   /* invalid padding                                    */
#define E_AES_PARAM                      0xB08B0008   /* invalid parameter                                  */
#define E_AES_READ_MASTER_KEY            0xB08B0009   /* could not get local Master Key                     */
#define E_AES_MODE_MISMATCH              0xB08B000A   /* mode of prepared key does not match mode parameter */
#define E_AES_ZERO_LEN                   0xB08B000C   /* Zero data length is not allowed                    */
#define E_AES_CTR_OVERFLOW               0xB08B000D   /* Overflow of block counter in CTR chaining mode     */
#define E_AES_TAG_VERIFICATION           0xB08B000E   /* Tag verification on CCM/GCM decrypt failed         */
#define E_DSA                            0xB08D       /* CryptoServer module DSA                            */
#define E_DSA_MEM                        0xB08D0001   /* cannot allocate memory                             */
#define E_DSA_P_TOO_SMALL                0xB08D0002   /* prime P is too small                               */
#define E_DSA_Q_TOO_SMALL                0xB08D0003   /* prime Q is too small                               */
#define E_DSA_GEN_FAILED                 0xB08D0004   /* domain parameter generation failed                 */
#define E_DSA_BAD_G                      0xB08D0005   /* invalid generator value G                          */
#define E_DSA_BAD_PRIMES                 0xB08D0006   /* bad primes P and Q                                 */
#define E_DSA_NO_KEYTOKEN                0xB08D0007   /* byte string is not a keytoken                      */
#define E_DSA_NO_COMP                    0xB08D0008   /* component is not a member of this token            */
#define E_DSA_DOUBLE_COMP                0xB08D0009   /* component is already a member of this token        */
#define E_DSA_INVALID_FLAG               0xB08D000A   /* value for flags is invalid                         */
#define E_DSA_HASH_LEN                   0xB08D000B   /* wrong hash value length                            */
#define E_DSA_BAD_KEY                    0xB08D000C   /* private and public key do not correspond           */
#define E_DSA_INV_PARAM                  0xB08D000D   /* invalid parameter                                  */
#define E_DSA_BAD_PKEY                   0xB08D000E   /* bad public key                                     */
#define E_DSA_BAD_SKEY                   0xB08D000F   /* bad private key                                    */
#define E_DSA_KEYT_LEN                   0xB08D0010   /* bad length of key token                            */
#define E_DSA_VERIFY_FAILED              0xB08D0011   /* signature verification failed                      */
#define E_DSA_BAD_SIGN_FMT               0xB08D0012   /* bad format of signature                            */
#define E_DSA_NO_ASN1                    0xB08D0013   /* no ASN.1 module loaded                             */
#define E_DSA_BUFF_TOO_SMALL             0xB08D0014   /* buffer for result is to small                      */
#define E_DSA_KEYGEN_TEST                0xB08D0015   /* pairwise consistency check failed on keygen        */
#define E_DSA_ZERO_LEN                   0xB08D0018   /* Zero length not allowed                            */
#define E_DSA_NOT_SUPPORTED              0xB08D0030   /* The function called is no longer supported         */
#define E_DSA_BAD_KEYT                   0xB08D0100   /* bad key token in command string                    */
#define E_LNA                            0xB08E       /* CryptoServer module LNA                            */
#define E_LNA_OVL                        0xB08E0001   /* result overflow                                    */
#define E_LNA_NEG                        0xB08E0002   /* result negativ                                     */
#define E_LNA_MOD_LEN                    0xB08E0003   /* modulus too short                                  */
#define E_LNA_DATA_LEN                   0xB08E0004   /* data greater than modulus                          */
#define E_LNA_MEM                        0xB08E0005   /* can't alloc memory                                 */
#define E_LNA_EXP0                       0xB08E0006   /* exponent is 0                                      */
#define E_LNA_DIV0                       0xB08E0007   /* division by zero                                   */
#define E_LNA_NUM_LEN                    0xB08E0008   /* number too short                                   */
#define E_LNA_PARAM                      0xB08E0009   /* bad parameter                                      */
#define E_LNA_NOT_FOUND                  0xB08E000A   /* no prime found                                     */
#define E_LNA_MOD_EVEN                   0xB08E000B   /* modulus is even                                    */
#define E_LNA_RESOVL                     0xB08E0100   /* result overflow                                    */
#define E_LNA_ARG_LEN                    0xB08E0101   /* bad argument length                                */
#define E_LNA_INT                        0xB08E0102   /* internal error while generating prime              */
#define E_ECA                            0xB08F       /* CryptoServer module ECA                            */
#define E_ECA_MEM                        0xB08F0001   /* can't alloc memory                                 */
#define E_ECA_NOT_SUPP                   0xB08F0002   /* not supported                                      */
#define E_ECA_BAD_PARAM                  0xB08F0003   /* bad parameter                                      */
#define E_ECA_NOT_FOUND                  0xB08F0004   /* curve not found                                    */
#define E_ECA_EXISTS                     0xB08F0005   /* curve already registered                           */
#define E_ECA_TOO_BIG                    0xB08F0006   /* input number too big                               */
#define E_ECA_INFINITE                   0xB08F0007   /* infinite result                                    */
#define E_ECA_PCP_INCOMP                 0xB08F0008   /* incompatible precalculated point                   */
#define E_ECA_LEN                        0xB08F0009   /* bad length of argument                             */
#define E_ECA_BAD_TAG                    0xB08F000A   /* bad tag of point                                   */
#define E_ECA_NO_SQRT                    0xB08F000B   /* no square root found                               */
#define E_ECA_NO_NON_RESIDUE             0xB08F000C   /* non-residue could not be found                     */
#define E_ECA_NO_ASN1                    0xB08F000D   /* no ASN.1 module found                              */
#define E_ECA_ECDP_DECODE                0xB08F000E   /* error decoding ASN.1 EC domain parameter           */
#define E_ECA_BAD_POINT                  0xB08F000F   /* bad value of EC point                              */
#define E_ECA_BAD_VALUE                  0xB08F0010   /* bad value of EC domain parameter                   */
#define E_ECA_ECDP_DIFFER                0xB08F0011   /* EC domain parameters differ                        */
#define E_ECA_BAD_DOMAIN_PARA            0xB08F0012   /* invalid domain parameter                           */
#define E_ECA_BAD_POLYNOM                0xB08F0013   /* invalid irreducible polynomial                     */
#define E_ECA_NO_FIPS_CURVE              0xB08F0014   /* curve not available in FIPS mode                   */
#define E_ECA_NO_FIPS_FUNCTION           0xB08F0015   /* function not available in FIPS mode                */
#define E_ECA_NO_SECURE_CURVE            0xB08F0016   /* Curve not secure for CC standards                  */
#define E_ECA_BL_TBL                     0xB08F0017   /* table of precalculated values empty/inconsistent   */
#define E_ECA_ARG_LEN                    0xB08F0101   /* bad argument length                                */
#define E_ECA_INT                        0xB08F0102   /* internal error                                     */
#define E_TECA                           0xB090       /* CryptoServer module TECA                           */
#define E_TECA_PERMISSION_DENIED         0xB0900001   /* permission denied                                  */
#define E_TECA_PARAM                     0xB0900002   /* invalid parameter                                  */
#define E_TECA_PARAM_LEN                 0xB0900003   /* invalid parameter length                           */
#define E_TECA_MALLOC                    0xB0900004   /* memory allocation failed                           */
#define E_TECA_MODE                      0xB0900005   /* invalid mode                                       */
#define E_TECA_ITEM_NOT_FOUND            0xB0900006   /* item not found                                     */
#define E_TECA_MODULE_DEP                0xB0900007   /* unresolved module dependency                       */
#define E_TECA_FILE_IO                   0xB0900008   /* file I/O error                                     */
#define E_ASN1                           0xB091       /* CryptoServer module ASN1                           */
#define E_ASN1_MEM                       0xB0910001   /* Memory Error                                       */
#define E_ASN1_FLAG                      0xB0910002   /* Parameter flag is incorrect                        */
#define E_ASN1_TAB_OVL                   0xB0910003   /* ASN1_ITEM table overflow                           */
#define E_ASN1_BAD_ZKA                   0xB0910004   /* bad ZKA format                                     */
#define E_ASN1_DATASIZE                  0xB0910005   /* ASN1 data overrun                                  */
#define E_ASN1_TAGSIZE                   0xB0910006   /* tag too big                                        */
#define E_ASN1_INDEF_LEN                 0xB0910007   /* indefinite length not supportet                    */
#define E_ASN1_LENSIZE                   0xB0910008   /* lenght field too big                               */
#define E_ASN1_STACK_OVL                 0xB0910009   /* internal stack overflow                            */
#define E_ASN1_NOT_FOUND                 0xB091000A   /* item not found                                     */
#define E_ASN1_BUFF_OVL                  0xB091000B   /* ASN1 buffer overflow                               */
#define E_ASN1_ITEMCOUNT                 0xB091000C   /* bad value of 'nitems' in ITEM table                */
#define E_ASN1_BADTAG                    0xB091000D   /* zero tag                                           */
#define E_ASN1_BAD_PKCS1                 0xB091000E   /* bad PKCS#1 format                                  */
#define E_ASN1_DECODE_ERR                0xB091000F   /* decoding error                                     */
#define E_ASN1_SIZE_EXCEEDED             0xB0910010   /* calculated size exceeds given datasize             */
#define E_MBK                            0xB096       /* CryptoServer module MBK                            */
#define E_MBK_PARA                       0xB0960001   /* Parameter mismatch                                 */
#define E_MBK_DB_NO_SERVICE              0xB0960002   /* MBK database is suspended                          */
#define E_MBK_NULL_PTR                   0xB0960003   /* Unexpected null pointer                            */
#define E_MBK_PERMISSION                 0xB0960004   /* Permission denied                                  */
#define E_MBK_ISO_HASH_FAIL              0xB0960005   /* ISO hash check of key failed                       */
#define E_MBK_IG_KEY_TYPES_NM            0xB0960006   /* Key types do not match                             */
#define E_MBK_IG_KEY_DATE_NM             0xB0960007   /* Key generation date do not match                   */
#define E_MBK_IG_KEY_TIME_NM             0xB0960008   /* Key generation time do not match                   */
#define E_MBK_IG_KEY_NAME_NM             0xB0960009   /* Key names do not match                             */
#define E_MBK_EX_KEY_CHK_FAIL            0xB096000A   /* Verify of existing master key failed               */
#define E_MBK_SLOT_EMPTY                 0xB096000B   /* Slot is empty                                      */
#define E_MBK_KEY_NO                     0xB096000C   /* Slot number not valid                              */
#define E_MBK_REC_NO                     0xB096000D   /* Record number not valid                            */
#define E_MBK_KEY_LB                     0xB096000E   /* Key length not valid                               */
#define E_MBK_TIME_WRONG_FORMAT          0xB096000F   /* Wrong format in time structure detected            */
#define E_MBK_BCD_LB                     0xB0960010   /* BCD coded time length mismatch                     */
#define E_MBK_KEY_NAME                   0xB0960011   /* No key name or NULL pointer for key name           */
#define E_MBK_ACTION_CANCELED            0xB0960012   /* Action canceled by user                            */
#define E_MBK_MODE_INV                   0xB0960013   /* Invalid mode for AES key passed                    */
#define E_MBK_DB_VERSION                 0xB0960014   /* Both versions of the MBK database exists           */
#define E_MBK_EI_PARA_SET_EXT            0xB0960015   /* External parameter already set from extern and overwrite flag is not set */
#define E_MBK_AES_NA                     0xB0960016   /* The AES Module is not available                    */
#define E_MBK_KEY_TYPE                   0xB0960017   /* Invalid key type                                   */
#define E_MBK_ALLOC                      0xB0960018   /* memory allocation failed                           */
#define E_MBK_BAD_DB_FORMAT              0xB0960019   /* bad database format                                */
#define E_MBK_RECORD_EMPTY               0xB096001A   /* smartcard record is empty                          */
#define E_MBK_SC_EMPTY                   0xB096001B   /* smartcard only contains empty records              */
#define E_MBK_SEMA_REQ                   0xB096001C   /* unable to require semaphore                        */
#define E_MBK_MAX_KEK                    0xB096001D   /* maximum numbers of key exchange keys reached       */
#define E_MBK_FLAGS_INV                  0xB096001E   /* invalid flags value                                */
#define E_MBK_INFO_LB                    0xB096001F   /* info length not valid                              */
#define E_MBK_KEY_EXISTS                 0xB0960020   /* key alread exists                                  */
#define E_MBK_SHARE_LB                   0xB0960021   /* invalid length of key share                        */
#define E_MBK_SHARE_CNT                  0xB0960022   /* invalid number of key shares                       */
#define E_MBK_ECA_NA                     0xB0960023   /* the ECA module is not available                    */
#define E_MBK_IG_KEY_SHARE_CNT_NM        0xB0960024   /* number of key shares doesn't match                 */
#define E_MBK_KEY_ID_INV                 0xB0960025   /* invalid key ID                                     */
#define E_MBK_KEY_ID_SAME                0xB0960026   /* multiple occurence of same key ID                  */
#define E_MBK_KEK_NOT_FOUND              0xB0960027   /* no kek found with given hash                       */
#define E_MBK_NOT_SUPPORTED              0xB0960028   /* function is not supported                          */
#define E_MBK_NO_PP                      0xB0960029   /* no PIN pad module found                            */
#define E_MBK_NO_SC                      0xB096002A   /* no smartcard module found                          */
#define E_MBK_FIPS_BLOCKED               0xB096002B   /* function not available in FIPS mode                */
#define E_MBK_CC_BLOCKED                 0xB096002C   /* not allowed in CC Endorsed Mode                    */
#define E_MBK_DEPRECATED                 0xB096002D   /* function is deprecated                             */
#define E_PIN                            0xB099       /* CryptoServer module PIN                            */
#define E_PIN_BAD_FMT                    0xB0990001   /* bad PIN block format                               */
#define E_PIN_BAD_PARA                   0xB0990002   /* bad parameter                                      */
#define E_PIN_NO_MEM                     0xB0990003   /* can't allocate memory                              */
#define E_PIN_BAD_LENGTH                 0xB0990004   /* bad PIN length                                     */
#define E_PIN_LESS_DIGITS                0xB0990005   /* not enaugh digits found                            */
#define E_PIN_BAD_XTAB                   0xB0990006   /* bad translation table                              */
#define E_PIN_BAD_COND                   0xB0990007   /* bad PIN conditions                                 */
#define E_PIN_REJECT                     0xB0990008   /* PIN does not meet conditions                       */
#define E_NTP                            0xB09A       /* CryptoServer module NTP                            */
#define E_NTP_CMD_LEN                    0xB09A0001   /* NTP: Command with invalid data length              */
#define E_NTP_INVALID_TIME_DELAY         0xB09A0002   /* NTP: requested time delay too big                  */
#define E_NTP_DAILY_TIME_DELAY_EXCEEDED   0xB09A0003   /* NTP: daily time delay exceeded                     */
#define E_NTP_DEPRECATED_FUNCTION_CALL   0xB09A0004   /* NTP: old function call; use new one                */
#define E_NTP_NEGATIVE_TIME_SET          0xB09A0005   /* NTP: negative time set; use flag to set backward   */
#define E_NTP_NOT_ACTIVATED              0xB09A0006   /* NTP: ntp module is not activated                   */
#define E_NTP_DB_ERROR                   0xB09A0007   /* NTP: database error                                */
#define E_NTP_PERMISSION_DENIED          0xB09A0008   /* NTP: permission denied                             */
#define E_ECDSA                          0xB09C       /* CryptoServer module ECDSA                          */
#define E_ECDSA_MEM                      0xB09C0001   /* cannot allocate memory                             */
#define E_ECDSA_R_S_IS_NULL              0xB09C0002   /* null component in signature (r,s)                  */
#define E_ECDSA_INV_FLAG                 0xB09C0003   /* value for flags is invalid                         */
#define E_ECDSA_BAD_KEY                  0xB09C0004   /* private and public key do not correspond           */
#define E_ECDSA_BAD_PKEY                 0xB09C0005   /* bad public key                                     */
#define E_ECDSA_BAD_SKEY                 0xB09C0006   /* bad private key                                    */
#define E_ECDSA_VERIFY_FAILED            0xB09C0007   /* signature verification failed                      */
#define E_ECDSA_BAD_SIGN_FMT             0xB09C0008   /* bad format of signature                            */
#define E_ECDSA_NO_ASN1                  0xB09C0009   /* no ASN.1 module loaded                             */
#define E_ECDSA_BUFF_TOO_SMALL           0xB09C000A   /* buffer for result is to small                      */
#define E_ECDSA_BAD_KEY_FMT              0xB09C000B   /* malformed ASN.1 coded key pair                     */
#define E_ECDSA_ECIES_PARAM              0xB09C000C   /* bad parameter                                      */
#define E_ECDSA_ECIES_MAC_CHECK          0xB09C000D   /* mac check of ecies encrypted data failed           */
#define E_ECDSA_NO_AES                   0xB09C000E   /* no AES module loaded                               */
#define E_ECDSA_KEYGEN_TEST              0xB09C000F   /* pairwise consistency check failed on keygen        */
#define E_ECDSA_ZERO_LEN                 0xB09C0010   /* Zero length not allowed                            */
#define E_ECDSA_NO_SEC_MODE              0xB09C0011   /* secure mode of curve not available                 */
#define E_ECDSA_BULK_MAX                 0xB09C0012   /* count of signatures per command exceeds limit      */
#define E_CSA                            0xB900       /* CryptoServer API                                   */
#define E_CSA_CORE                       0xB90000     /* CryptoServer API core functions                    */
#define E_CSA_CORE_BAD_TAG               0xB9000000   /* bad tag in data block                              */
#define E_CSA_CORE_HANDLE                0xB9000001   /* invalid handle                                     */
#define E_CSA_CORE_INVAL                 0xB9000002   /* invalid argument                                   */
#define E_CSA_CORE_MEM                   0xB9000003   /* can't alloc memory                                 */
#define E_CSA_CORE_STACK                 0xB9000004   /* malformed protocol stack                           */
#define E_CSA_CORE_SIZE                  0xB9000005   /* data block too big                                 */
#define E_CSA_CORE_V24_DEV               0xB9000007   /* bad V24 device                                     */
#define E_CSA_CORE_V24_PARAM             0xB9000008   /* bad V24 parameter                                  */
#define E_CSA_CORE_BLK_LEN               0xB9000009   /* can't calculate block length                       */
#define E_CSA_CORE_EMPTY                 0xB900000A   /* empty command block                                */
#define E_CSA_CORE_BAD_ANSW              0xB900000B   /* malformed answer block from CSLAN                  */
#define E_CSA_CORE_V24_CTRL              0xB900000C   /* can't set V24 device                               */
#define E_CSA_CORE_NO_V24                0xB900000D   /* V24 mode not activated                             */
#define E_CSA_CORE_V24_CRC               0xB900000E   /* V24 crc error on read                              */
#define E_CSA_CORE_FMT_LEN               0xB9000010   /* bad length within format string (scanf)            */
#define E_CSA_CORE_BAD_CMD               0xB9000011   /* bad format of command block                        */
#define E_CSA_CORE_BAD_OUT               0xB9000012   /* bad parameter structure (scanf)                    */
#define E_CSA_CORE_BAD_FMT               0xB9000013   /* bad format string (scanf)                          */
#define E_CSA_CORE_SCANF                 0xB9000014   /* cs_scanf not supported                             */
#define E_CSA_CORE_HDL_IN_USE            0xB9000015   /* CSAPI handle still in use                          */
#define E_CSA_KS                         0xB90001     /* command layer for old KryptoServer                 */
#define E_CSA_KS_ALEN                    0xB9000100   /* length error of answer block                       */
#define E_CSA_KS_CLEN                    0xB9000101   /* bad length error of command data                   */
#define E_CSA_KS_PARAM                   0xB9000102   /* missing parameter structure                        */
#define E_CSA_CMDS                       0xB90002     /* command layer CMDS for CryptoServer                */
#define E_CSA_CMDS_ALEN                  0xB9000200   /* length error of answer block                       */
#define E_CSA_CMDS_CLEN                  0xB9000201   /* bad length of command data                         */
#define E_CSA_CMDS_PARAM                 0xB9000202   /* missing parameter structure                        */
#define E_CSA_CMDS_TAG                   0xB9000203   /* bad tag of answer block                            */
#define E_CSA_CHNL                       0xB90003     /* command layer CHNL for CryptoServer                */
#define E_CSA_CHNL_ALEN                  0xB9000300   /* length error of answer block                       */
#define E_CSA_CHNL_TAG                   0xB9000301   /* bad tag of answer block                            */
#define E_CSA_AUTH                       0xB90004     /* authentication layer for CryptoServer              */
#define E_CSA_AUTH_ALEN                  0xB9000400   /* length error of answer block                       */
#define E_CSA_AUTH_BAD_FC                0xB9000401   /* invalid function code                              */
#define E_CSA_AUTH_BAD_ANSW              0xB9000402   /* malformed answer block                             */
#define E_CSA_AUTH_BAD_MECH              0xB9000403   /* invalid authentication mechanism                   */
#define E_CSA_AUTH_HASH_ERR              0xB9000404   /* error in hash function                             */
#define E_CSA_AUTH_SIGN_ERR              0xB9000405   /* error in signature function                        */
#define E_CSA_AUTH_HMAC_ERR              0xB9000406   /* error in HMAC function                             */
#define E_CSA_BL                         0xB90005     /* command layer BL for CryptoServer                  */
#define E_CSA_BL_ALEN                    0xB9000500   /* length error of answer block                       */
#define E_CSA_BL_CLEN                    0xB9000501   /* bad length error of command data                   */
#define E_CSA_BL_PARAM                   0xB9000502   /* missing parameter structure                        */
#define E_CSA_BL_TAG                     0xB9000503   /* bad tag of answer block                            */
#define E_CSA_SM                         0xB90006     /* secure messaging layer for CryptoServer            */
#define E_CSA_SM_ALEN                    0xB9000600   /* length error of answer block                       */
#define E_CSA_SM_BAD_ANSW                0xB9000601   /* malformed answer block                             */
#define E_CSA_SM_BAD_MECH                0xB9000602   /* invalid SM mechanism                               */
#define E_CSA_SM_NO_DATA                 0xB9000603   /* zero length data                                   */
#define E_CSA_SM_DES_ERR                 0xB9000604   /* en- / decryption / MAC error                       */
#define E_CSA_SM_UNWRAP                  0xB9000605   /* secure messaging unwrap error                      */
#define E_CSA_CDI                        0xB9000A     /* command layer CDI for CryptoServer                 */
#define E_CSA_CDI_ALEN                   0xB9000A00   /* length error of answer block                       */
#define E_CSA_CDI_CLEN                   0xB9000A01   /* bad length error of command data                   */
#define E_CSA_CDI_PARAM                  0xB9000A02   /* missing parameter structure                        */
#define E_CSA_CDI_TAG                    0xB9000A03   /* bad tag of answer block                            */
#define E_CSA_TL                         0xB9000C     /* command layer TL for CryptoServer                  */
#define E_CSA_TL_ALEN                    0xB9000C00   /* length error of answer block                       */
#define E_CSA_TL_TAG                     0xB9000C01   /* bad tag of answer block                            */
#define E_CSA_DUMY                       0xB9000E     /* command layer DUMY for CryptoServer                */
#define E_CSA_DUMY_ALEN                  0xB9000E00   /* length error of answer block                       */
#define E_CSA_DUMY_CLEN                  0xB9000E01   /* bad length error of command data                   */
#define E_CSA_DUMY_PARAM                 0xB9000E02   /* missing parameter structure                        */
#define E_CSA_LX                         0xB901       /* CryptoServer API LINUX                             */
#define E_CSA_LX_PATH                    0xB9010001   /* path name too long                                 */
#define E_CSA_LX_PORT                    0xB9010002   /* bad port number                                    */
#define E_CSA_LX_ADDR                    0xB9010003   /* bad IP address                                     */
#define E_CSA_LX_HOSTNAME                0xB9010004   /* bad host name                                      */
#define E_CSA_LX_TERM                    0xB9010005   /* connection terminated by remote host               */
#define E_CSA_LX_MEM                     0xB9010006   /* can't alloc memory                                 */
#define E_CSA_LX_TIMEOUT                 0xB9010007   /* timeout occured                                    */
#define E_CSA_LX_INVAL                   0xB9010008   /* invalid argument                                   */
#define E_CSA_LX_ADDRLEN                 0xB9010009   /* no space for sockaddr (internal error)             */
#define E_CSA_LX_BLKSIZE                 0xB901000A   /* bad block size received                            */
#define E_CSA_LX_NOT_RDY                 0xB901000B   /* no ready message from CMDS                         */
#define E_CSA_LX_CRIT_TEMP               0xB901000C   /* cs2 exceeds critical temperature                   */
#define E_CSA_LX_PROC                    0xB901000D   /* error on /proc file                                */
#define E_CSA_LX_DEV                     0xB901000E   /* can't stat device file                             */
#define E_CSA_LX_BUF_SIZE                0xB901000F   /* buffer size too small                              */
#define E_CSA_LX_OPEN                    0xB9011      /* can't open device                                  */
#define E_CSA_LX_SOCKET                  0xB9012      /* can't creat socket                                 */
#define E_CSA_LX_CONNECT                 0xB9013      /* can't get connection                               */
#define E_CSA_LX_POLL                    0xB9014      /* error while polling                                */
#define E_CSA_LX_READ                    0xB9015      /* read error                                         */
#define E_CSA_LX_READ_701                0xB9015701   /* timeout                                            */
#define E_CSA_LX_READ_706                0xB9015706   /* operation interruptet by reset                     */
#define E_CSA_LX_READ_707                0xB9015707   /* high temperature                                   */
#define E_CSA_LX_READ_70A                0xB901570A   /* CryptoServer halted                                */
#define E_CSA_LX_READ_70B                0xB901570B   /* panic message from CryptoServer                    */
#define E_CSA_LX_WRITE                   0xB9016      /* write error                                        */
#define E_CSA_LX_WRITE_701               0xB9016701   /* timeout                                            */
#define E_CSA_LX_WRITE_703               0xB9016703   /* request rejectet by CS2                            */
#define E_CSA_LX_WRITE_706               0xB9016706   /* operation interruptet by reset                     */
#define E_CSA_LX_WRITE_707               0xB9016707   /* high temperature                                   */
#define E_CSA_LX_WRITE_70A               0xB901670A   /* CryptoServer halted                                */
#define E_CSA_LX_WRITE_70B               0xB901670B   /* panic message from CryptoServer                    */
#define E_CSA_LX_IOCTL                   0xB9017      /* ioctl error                                        */
#define E_CSA_LX_IOCTL_701               0xB9017701   /* timeout                                            */
#define E_CSA_LX_IOCTL_706               0xB9017706   /* operation interrupted by reset                     */
#define E_CSA_LX_IOCTL_707               0xB9017707   /* high temperature                                   */
#define E_CSA_LX_IOCTL_70A               0xB901770A   /* CryptoServer halted                                */
#define E_CSA_LX_IOCTL_70B               0xB901770B   /* panic message from CryptoServer                    */
#define E_CSA_LX_IOCTL_73                0xB901773    /* reset of CryptoServer failed                       */
#define E_CSA_LX_LOCK                    0xB9018      /* ioctl error (locking)                              */
#define E_CSA_LX_LOCK_706                0xB9018706   /* operation interruptet by reset                     */
#define E_CSA_LX_RECV                    0xB9019      /* tcp receive error                                  */
#define E_CSA_LX_SEND                    0xB901A      /* tcp send error                                     */
#define E_CSA_WIN                        0xB902       /* CryptoServer API Windows                           */
#define E_CSA_WIN_PATH                   0xB9020001   /* path name too long                                 */
#define E_CSA_WIN_PORT                   0xB9020002   /* bad port number                                    */
#define E_CSA_WIN_ADDR                   0xB9020003   /* bad IP address                                     */
#define E_CSA_WIN_HOSTNAME               0xB9020004   /* bad host name                                      */
#define E_CSA_WIN_TERM                   0xB9020005   /* connection terminated by remote host               */
#define E_CSA_WIN_MEM                    0xB9020006   /* can't alloc memory                                 */
#define E_CSA_WIN_TIMEOUT                0xB9020007   /* timeout occured                                    */
#define E_CSA_WIN_INVAL                  0xB9020008   /* invalid argument                                   */
#define E_CSA_WIN_ADDRLEN                0xB9020009   /* no space for sockaddr (internal error)             */
#define E_CSA_WIN_BLKSIZE                0xB902000A   /* bad block size received                            */
#define E_CSA_WIN_CMDS_NOT_RDY           0xB902000B   /* no ready message from CMDS                         */
#define E_CSA_WIN_CRIT_TEMP              0xB902000C   /* cs2 exceeds critical temperature                   */
#define E_CSA_WIN_INVALID_PARAM          0xB9020010   /* invalid parameter                                  */
#define E_CSA_WIN_INVALID_HANDLE         0xB9020011   /* invalid handle value                               */
#define E_CSA_WIN_CREATE_MUTEX           0xB9020013   /* error creating mutex                               */
#define E_CSA_WIN_LOCK                   0xB9020014   /* unable to set lock                                 */
#define E_CSA_WIN_LOCK_TIMEOUT           0xB9020015   /* timeout while waiting for mutex                    */
#define E_CSA_WIN_LOCK_HANDLE            0xB9020016   /* no valid mutex object                              */
#define E_CSA_WIN_OPEN                   0xB90201     /* tcp: can't open device                             */
#define E_CSA_WIN_SOCKET                 0xB90202     /* tcp: can't create socket                           */
#define E_CSA_WIN_CONNECT                0xB90203     /* tcp: can't get connection                          */
#define E_CSA_WIN_POLL                   0xB90204     /* tcp: error while polling                           */
#define E_CSA_WIN_CONNECT_FAIL           0xB90204F0   /* can't get connection                               */
#define E_CSA_WIN_READ                   0xB90205     /* tcp: read error                                    */
#define E_CSA_WIN_WRITE                  0xB90206     /* tcp: write error                                   */
#define E_CSA_WIN_INIT                   0xB90207     /* tcp: init error                                    */
#define E_CSA_WIN_IOCTL                  0xB90208     /* tcp: ioctl error                                   */
#define E_CSA_WIN_DCI_OPEN               0xB9021      /* dci: can't open device                             */
#define E_CSA_WIN_DCI_READ               0xB9022      /* read error                                         */
#define E_CSA_WIN_DCI_READ_RLEN          0xB9022001   /* read returned wrong length                         */
#define E_CSA_WIN_DCI_READ_TMOUT         0xB90220B5   /* read timeout                                       */
#define E_CSA_WIN_DCI_READ_706           0xB9022706   /* operation interruptet by reset                     */
#define E_CSA_WIN_DCI_READ_707           0xB9022707   /* high temperature                                   */
#define E_CSA_WIN_DCI_READ_73            0xB902273    /* reset failed                                       */
#define E_CSA_WIN_DCI_WRITE              0xB9023      /* dci: write error                                   */
#define E_CSA_WIN_DCI_WRITE_RLEN         0xB9023001   /* write returned wrong length                        */
#define E_CSA_WIN_DCI_WRITE_TMOUT        0xB90230B5   /* write timeout                                      */
#define E_CSA_WIN_DCI_WRITE_706          0xB9023706   /* operation interrupted by reset                     */
#define E_CSA_WIN_DCI_WRITE_707          0xB9023707   /* high temperature                                   */
#define E_CSA_WIN_DCI_WRITE_73           0xB902373    /* reset failed                                       */
#define E_CSA_WIN_DCI_IOCTL              0xB9024      /* dci: ioctl error                                   */
#define E_CSA_WIN_DCI_IOCTL_NOT_RDY      0xB9024001   /* no ready message from CMDS                         */
#define E_CSA_WIN_DCI_IOCTL_TMOUT        0xB90240B5   /* ioctl timeout                                      */
#define E_CSA_WIN_DCI_IOCTL_706          0xB9024706   /* operation interruptet by reset                     */
#define E_CSA_WIN_DCI_IOCTL_707          0xB9024707   /* high temperature                                   */
#define E_CSA_WIN_DCI_IOCTL_73           0xB902473    /* reset failed                                       */
#define E_CSA_WIN_MTX                    0xB9025      /* mutex section                                      */
#define E_CSA_WIN_TCP_STARTUP            0xB9028      /* tcp: startup error                                 */
#define E_CSA_WIN_TCP_ADDR               0xB9029      /* tcp: address error                                 */
#define E_CSA_WIN_TCP_SOCKET             0xB902A      /* tcp: can't create socket                           */
#define E_CSA_WIN_TCP_CONNECT            0xB902B      /* tcp: can't get connection                          */
#define E_CSA_WIN_TCP_CONNECT_TIMEOUT    0xB902B03C   /* connection attempt timed out                       */
#define E_CSA_WIN_TCP_CONNECT_REFUSED    0xB902B03D   /* connection attempt refused                         */
#define E_CSA_WIN_TCP_SELECT             0xB902C      /* tcp: error on select                               */
#define E_CSA_WIN_TCP_RECV               0xB902D      /* tcp: receive error                                 */
#define E_CSA_WIN_TCP_SEND               0xB902E      /* tcp: send error                                    */
#define E_CSA_WIN_TCP_IOCTL              0xB902F      /* tcp: ioctl error                                   */
#define E_YACL                           0xB904       /* yacl library                                       */
#define E_YACL_DES                       0xB90400     /* DES modul                                          */
#define E_YACL_DES_KEY_LEN               0xB9040000   /* length of DES-Key is not 8, 16 or 24 byte          */
#define E_YACL_DES_DATA_LEN              0xB9040001   /* length of input data is not a multiple of 8        */
#define E_YACL_ECA_BAD_POLYNOM           0xB9040013   /* invalid irreducible polynomial                     */
#define E_YACL_RSA                       0xB90401     /* RSA modul                                          */
#define E_YACL_RSA_RESULT_TOO_LONG       0xB9040100   /* effective length of result is greater              */
#define E_YACL_RSA_OPERAND_TOO_LONG      0xB9040101   /* effective length of on input operand               */
#define E_YACL_RSA_RESULT_NEGATIV        0xB9040102   /* result of subtraction would be negativ             */
#define E_YACL_RSA_DIVISOR_ZERO          0xB9040103   /* divisor/modulus is zero with division              */
#define E_YACL_RSA_BAD_OPERAND           0xB9040104   /* operand for 'esm' is greater than modulus          */
#define E_YACL_LNA                       0xB90402     /* Long Number Arithmetic                             */
#define E_YACL_LNA_OVL                   0xB9040201   /* result overflow                                    */
#define E_YACL_LNA_NEG                   0xB9040202   /* result negativ                                     */
#define E_YACL_LNA_MOD_LEN               0xB9040203   /* modulus too short                                  */
#define E_YACL_LNA_DATA_LEN              0xB9040204   /* data greater than modulus                          */
#define E_YACL_LNA_MEM                   0xB9040205   /* can't alloc memory                                 */
#define E_YACL_LNA_EXP0                  0xB9040206   /* exponent is 0                                      */
#define E_YACL_LNA_DIV0                  0xB9040207   /* division by zero                                   */
#define E_YACL_LNA_NUM_LEN               0xB9040208   /* number too short                                   */
#define E_YACL_LNA_PARAM                 0xB9040209   /* bad parameter                                      */
#define E_YACL_LNA_NOT_FOUND             0xB904020A   /* no prime found                                     */
#define E_YACL_LNA_MOD_EVEN              0xB904020B   /* modulus is even                                    */
#define E_YACL_VRSA                      0xB90403     /* RSA functions                                      */
#define E_YACL_VRSA_MEM                  0xB9040301   /* cannot allocate memory                             */
#define E_YACL_VRSA_BUFF_TOO_SMALL       0xB9040302   /* buffer for result is to small                      */
#define E_YACL_VRSA_DATA_LEN             0xB9040303   /* data size too big (greater than modulus)           */
#define E_YACL_VRSA_BAD_MODULUS          0xB9040304   /* modulus is not p * q                               */
#define E_YACL_VRSA_P_GREATER_Q          0xB9040305   /* p is greater then q                                */
#define E_YACL_VRSA_BAD_U                0xB9040306   /* u is not (1/q) mod p                               */
#define E_YACL_VRSA_BAD_DP               0xB9040307   /* dp is not d mod (p-1)                              */
#define E_YACL_VRSA_BAD_DQ               0xB9040308   /* dq is not d mod (q-1)                              */
#define E_YACL_VRSA_BAD_PEXP             0xB9040309   /* gcd(p-1,e) != 1 or gcd(q-1,e) != 1                 */
#define E_YACL_VRSA_BAD_SEXP             0xB904030A   /* d * e != 1 mod (p-1)(q-1)                          */
#define E_YACL_VRSA_KEY_TOO_SMALL        0xB904030B   /* Key length too small                               */
#define E_YACL_VRSA_MOD_TOO_SMALL        0xB904030C   /* modulus to small                                   */
#define E_YACL_VRSA_BAD_KEY              0xB904030D   /* bad key components                                 */
#define E_YACL_VRSA_INV_PARAM            0xB904030E   /* invalid parameter                                  */
#define E_YACL_VRSA_KGEN_FAILED          0xB904030F   /* key generation failed                              */
#define E_YACL_VRSA_HASH_ALGO            0xB9040310   /* Invalid hash algorithm                             */
#define E_YACL_VRSA_VERIFY_FAILED        0xB9040311   /* Signature verification failed                      */
#define E_YACL_VRSA_DECRYPT_FAILED       0xB9040312   /* PKCS#1 decryption failed                           */
#define E_YACL_VRSA_ENCODING             0xB9040313   /* PKCS#1 encoding error                              */
#define E_YACL_VRSA_INV_PEXP             0xB9040314   /* invalid public exponent                            */
#define E_YACL_SAFER                     0xB90404     /* SAFER module                                       */
#define E_YACL_SAFER_KEY_LEN             0xB9040400   /* length of SAFER-Key is not 8 or 16                 */
#define E_YACL_SAFER_DATA_LEN            0xB9040401   /* length of input data is not a multiple of 8        */
#define E_YACL_RND                       0xB90405     /* Pseudo Random Number Generator                     */
#define E_YACL_RND_NULL_POINTER          0xB9040501   /* Null pointer in argument                           */
#define E_YACL_RND_WRONG_SEED_LENGTH     0xB9040502   /* Wrong length of seed                               */
#define E_YACL_RND_AUTO_INIT             0xB9040503   /* Can't auto initialize rnd generator                */
#define E_YACL_AES                       0xB90406     /* AES module                                         */
#define E_YACL_AES_KEY_LEN               0xB9040600   /* length of AES-Key is not 16, 24 or 32              */
#define E_YACL_AES_DATA_LEN              0xB9040601   /* length of input data is not a multiple of 16       */
#define E_YACL_AES_PARAM                 0xB9040602   /* bad input parameter (eg. NULL pointer not allowed) */
#define E_YACL_ASN1                      0xB90408     /* ASN1 module                                        */
#define E_YACL_ASN1_MEM                  0xB9040821   /* Memory Error                                       */
#define E_YACL_ASN1_FLAG                 0xB9040822   /* Parameter flag is incorrect                        */
#define E_YACL_ASN1_TAB_OVL              0xB9040823   /* ASN1_ITEM table overflow                           */
#define E_YACL_ASN1_COMP_FLAG            0xB9040824   /* Component flag is not defined                      */
#define E_YACL_ASN1_DATASIZE             0xB9040825   /* ASN1 data overrun                                  */
#define E_YACL_ASN1_TAGSIZE              0xB9040826   /* tag too big                                        */
#define E_YACL_ASN1_INDEF_LEN            0xB9040827   /* indefinite length not supportet                    */
#define E_YACL_ASN1_LENSIZE              0xB9040828   /* lenght field too big                               */
#define E_YACL_ASN1_NOT_FOUND            0xB904082A   /* item not found                                     */
#define E_YACL_ASN1_BUFF_OVL             0xB904082B   /* ASN1 buffer overflow                               */
#define E_YACL_ASN1_ITEMCOUNT            0xB904082C   /* bad value of 'nitems' in ITEM table                */
#define E_YACL_ASN1_BADTAG               0xB904082D   /* zero tag                                           */
#define E_YACL_ASN1_DECODE_ERR           0xB904082F   /* decoding error                                     */
#define E_YACL_ASN1_SIZE_EXCEEDED        0xB9040830   /* calculated size exceeds given datasize             */
#define E_YACL_HASH                      0xB90409     /* Hash module                                        */
#define E_YACL_HASH_MODE                 0xB9040901   /* Invalid hash mode                                  */
#define E_YACL_HASH_LEN                  0xB9040902   /* Invalid length                                     */
#define E_YACL_HASH_PARAM                0xB9040903   /* Invalid parameter                                  */
#define E_YACL_ECA                       0xB9040A     /* module ECA                                         */
#define E_YACL_ECA_MEM                   0xB9040A01   /* can't alloc memory                                 */
#define E_YACL_ECA_NOT_SUPP              0xB9040A02   /* not supported                                      */
#define E_YACL_ECA_BAD_PARAM             0xB9040A03   /* bad parameter                                      */
#define E_YACL_ECA_NOT_FOUND             0xB9040A04   /* curve not found                                    */
#define E_YACL_ECA_EXISTS                0xB9040A05   /* curve already registered                           */
#define E_YACL_ECA_TOO_BIG               0xB9040A06   /* input number too big                               */
#define E_YACL_ECA_INFINITE              0xB9040A07   /* infinite result                                    */
#define E_YACL_ECA_PCP_INCOMP            0xB9040A08   /* incompatible precalculated point                   */
#define E_YACL_ECA_LEN                   0xB9040A09   /* bad length of argument                             */
#define E_YACL_ECA_BAD_TAG               0xB9040A0A   /* bad tag of point                                   */
#define E_YACL_ECA_NO_SQRT               0xB9040A0B   /* no square root found                               */
#define E_YACL_ECA_NO_NON_RESIDUE        0xB9040A0C   /* non-residue could not be found                     */
#define E_YACL_ECA_NO_ASN1               0xB9040A0D   /* no ASN.1 module found                              */
#define E_YACL_ECA_ECDP_DECODE           0xB9040A0E   /* error decoding ASN.1 EC domain parameter           */
#define E_YACL_ECA_BAD_POINT             0xB9040A0F   /* bad value of EC point                              */
#define E_YACL_ECA_BAD_VALUE             0xB9040A10   /* bad value of EC domain parameter                   */
#define E_YACL_ECA_ECDP_DIFFER           0xB9040A11   /* EC domain parameters differ                        */
#define E_YACL_ECA_BAD_DOMAIN_PARA       0xB9040A12   /* invalid domain parameter                           */
#define E_YACL_ECDSA                     0xB9040B     /* module ECDSA                                       */
#define E_YACL_ECDSA_MEM                 0xB9040B01   /* cannot allocate memory                             */
#define E_YACL_ECDSA_R_S_IS_NULL         0xB9040B02   /* null component in signature (r,s)                  */
#define E_YACL_ECDSA_INV_FLAG            0xB9040B03   /* value for flags is invalid                         */
#define E_YACL_ECDSA_BAD_KEY             0xB9040B04   /* private and public key do not correspond           */
#define E_YACL_ECDSA_BAD_PKEY            0xB9040B05   /* bad public key                                     */
#define E_YACL_ECDSA_BAD_SKEY            0xB9040B06   /* bad private key                                    */
#define E_YACL_ECDSA_VERIFY_FAILED       0xB9040B07   /* signature verification failed                      */
#define E_YACL_ECDSA_BAD_SIGN_FMT        0xB9040B08   /* bad format of signature                            */
#define E_YACL_ECDSA_NO_ASN1             0xB9040B09   /* no ASN.1 module loaded                             */
#define E_YACL_ECDSA_BUFF_TOO_SMALL      0xB9040B0A   /* buffer for result is to small                      */
#define E_YACL_ECDSA_BAD_KEY_FMT         0xB9040B0B   /* malformed ASN.1 coded key pair                     */
#define E_YACL_DSA                       0xB9040C     /* module DSA                                         */
#define E_YACL_DSA_P_TOO_SMALL           0xB9040C01   /* prime P is too small                               */
#define E_YACL_DSA_Q_TOO_SMALL           0xB9040C02   /* prime Q is too small                               */
#define E_YACL_DSA_GEN_FAILED            0xB9040C03   /* domain parameter generation failed                 */
#define E_YACL_DSA_BAD_G                 0xB9040C04   /* invalid generator value G                          */
#define E_YACL_DSA_BAD_PRIMES            0xB9040C05   /* bad primes P and Q                                 */
#define E_YACL_DSA_HASH_LEN              0xB9040C06   /* hash value too long                                */
#define E_YACL_DSA_BAD_KEY               0xB9040C07   /* private and public key do not correspond           */
#define E_YACL_DSA_INV_PARAM             0xB9040C08   /* invalid parameter                                  */
#define E_YACL_DSA_BAD_PKEY              0xB9040C09   /* bad public key                                     */
#define E_YACL_DSA_BAD_SKEY              0xB9040C0A   /* bad private key                                    */
#define E_YACL_DSA_VERIFY_FAILED         0xB9040C0B   /* signature verification failed                      */
#define E_YACL_DSA_BAD_SIGN_FMT          0xB9040C0C   /* bad format of signature                            */
#define E_YACL_DSA_BUFF_TOO_SMALL        0xB9040C0D   /* buffer for result is to small                      */
#define E_YACL_PK                        0xB9040D     /* PK module                                          */
#define E_YACL_PK_PARAMETER              0xB9040D01   /* invalid parameter                                  */
#define E_YACL_PK_MEMORY                 0xB9040D02   /* memory allocation failed                           */
#define E_YACL_PK_UNKNOWN_DN_TYPE        0xB9040D03   /* unknown distinguished name type                    */
#define E_YACL_PK_INVALID_DN             0xB9040D04   /* invalid distinguished name (value or length)       */
#define E_YACL_PK_INVALID_TIME_FORMAT    0xB9040D05   /* invalid time format                                */
#define E_YACL_PK_UNKNOWN_KEY_TYPE       0xB9040D06   /* unknown / unsupported key type                     */
#define E_YACL_PK_UNKNOWN_SIGN_ALGO      0xB9040D07   /* unknown / unsupported signature algorithm          */
#define E_YACL_PK_UNKNOWN_HASH_ALGO      0xB9040D08   /* unknown / unsupported hash algorithm               */
#define E_YACL_PK_INVALID_VERSION        0xB9040D09   /* invalid / unsupported version                      */
#define E_YACL_PK_P7_UNKNOWN_CONTENT_TYPE   0xB9040D0A   /* unknown / unsupported PKCS7 content type           */
#define E_YACL_PK_P7_NO_VERSION_FOUND    0xB9040D0B   /* no PKCS7 version found                             */
#define E_YACL_PK_P7_UNKNOWN_ELEM_TYPE   0xB9040D0C   /* unknown PKCS7 element type                         */
#define E_YACL_PK_P7_ELEM_TYPE_SIGNATURE   0xB9040D0D   /* element type SIGNATURE not found                   */
#define E_YACL_PK_P7_ELEM_TYPE_ENVELOPED   0xB9040D0E   /* element type ENVELOPED not found                   */
#define E_YACL_PK_P7_ELEM_TYPE_CERT      0xB9040D0F   /* element type CERT not found                        */
#define E_YACL_PK_P7_ELEM_TYPE_AUTH_ATT   0xB9040D10   /* element type AUTH_ATT not found                    */
#define E_YACL_PK_P7_ELEM_TYPE_UNAUTH_ATT   0xB9040D11   /* element type UNAUTH_ATT not found                  */
#define E_YACL_PK_P7_ELEM_TYPE_SIG_TIME   0xB9040D12   /* element type SIG_TIME not found                    */
#define E_YACL_PK_P7_ELEM_TYPE_DATA      0xB9040D13   /* element type DATA not found                        */
#define E_YACL_PK_P7_SIGNER_CERTIFICATE   0xB9040D14   /* no signer certificate given                        */
#define E_YACL_PK_P7_NO_DATA_OR_HASH     0xB9040D15   /* no data or hash given to perform sign / verify operation */
#define E_YACL_PK_P7_INVALID_CONTENT_TYPE   0xB9040D16   /* invalid PKCS7 content type                         */
#define E_YACL_PK_P7_NO_DIGEST_ALGORITHM   0xB9040D17   /* no digest algorithm in PKCS7 data found            */
#define E_YACL_PK_P7_NO_SIGNER_INFOS     0xB9040D18   /* no signer infos found                              */
#define E_YACL_PK_P7_NO_ISSUER           0xB9040D19   /* no issuer / serial number found                    */
#define E_YACL_PK_P7_NO_OF_ELEM          0xB9040D1A   /* number of PK_P7_ELEM too small                     */
#define E_YACL_PK_P7_SIGNER_REF          0xB9040D1B   /* invalid signer reference                           */
#define E_YACL_PK_P7_CONTENT_TYPE_NOT_SD   0xB9040D1C   /* content type is not SignedData                     */
#define E_YACL_PK_P7_CONTENT_TYPE_NOT_ENV   0xB9040D1D   /* content type is not Enveloped                      */
#define E_YACL_PK_P7_KEY_TYPE_MISMATCH   0xB9040D1E   /* digestEncryptionAlgorithm doesn't match signer certificate key type */
#define E_YACL_PK_P7_VERIFICATION        0xB9040D1F   /* signature verfication failed                       */
#define E_YACL_PK_P7_RECIPIENT_CERT      0xB9040D20   /* no recipient certificate given                     */
#define E_YACL_PK_P7_UNKNOWN_ENC_KEY_TYPE   0xB9040D21   /* unknown / unsupported encryption key type          */
#define E_YACL_PK_P7_MULTIPLE_RCPTS      0xB9040D22   /* multiple recipients not supported                  */
#define E_YACL_PK_P7_CERT_MISMATCH       0xB9040D23   /* given certificate doesn't match certificate in PKCS7 structure */
#define E_YACL_PK_P7_KEK_ALGO            0xB9040D24   /* given key doesn't match key encryption algorithm   */
#define E_YACL_PK_P7_NO_ENC_KEY_ALGO     0xB9040D25   /* no key encryption algorithm identifier found       */
#define E_YACL_PK_P7_NO_CONTENT_TYPE     0xB9040D26   /* no content type found                              */
#define E_YACL_PK_P7_NO_CONTENT_KEY_ALGO   0xB9040D27   /* no content encryption algorithm identifier found   */
#define E_YACL_PK_P7_ATTRIBUTE           0xB9040D28   /* invalid attribute structure                        */
#define E_YACL_PK_P7_NEED_MORE_SPACE     0xB9040D29   /* given buffer / struct doesn't contain enough space for this operation */
#define E_YACL_PK_TIME_ERROR             0xB9040D30   /* Unable to retrieve system time / convert time;     */
#define E_YACL_PK_UNKNOWN_ATT_TYPE       0xB9040D31   /* unknown attribute type                             */
#define E_YACL_PK_CRL_ISSUER_MISMATCH    0xB9040D32   /* CRL issuer doesn't match certificate's subject / issuer */
#define E_YACL_PK_CRL_ATTR_NOT_AVAILABLE   0xB9040D33   /* requested attribute not available (optional)       */
#define E_YACL_PK_CRL_BAD_FORMAT         0xB9040D34   /* bad CRL format                                     */
#define E_YACL_PK_CRL_NOT_VALID          0xB9040D35   /* CRL is not yet valid                               */
#define E_YACL_PK_CRL_INIT_NOT_CALLED    0xB9040D36   /* partial CRL verification not initialized           */
#define E_YACL_PK_UNSUPPORTED_TIME_FORMAT   0xB9040D40   /* unsupported time format                            */
#define E_YACL_PK_UNSUPPORTED_CENTURY    0xB9040D41   /* given time format contains century < 1900          */
#define E_YACL_PK_INDEF_LEN              0xB9040D42   /* indefinite length not supportet                    */
#define E_YACL_PK_P7_INVALID_SIGNER      0xB9040D50   /* invalid signer / invalid signer information        */
#define E_YACL_PK_P7_INVALID_SIGNER_STRUCT   0xB9040D51   /* invalid signer structure (ASN.1 error)             */
#define E_YACL_CRYPT                     0xB9040E     /* crypt module                                       */
#define E_YACL_OLD_CRYPT_VERSION         0xB9040E01   /* Old Crypt Version                                  */
#define E_SL                             0xB905       /* Serial Driver                                      */
#define E_SL_TOOMANY                     0xB9050001   /* too many lines open                                */
#define E_SL_TCATTR                      0xB9050002   /* error setting line parameters                      */
#define E_SL_OPEN                        0xB9050003   /* can't open device                                  */
#define E_SL_NOT_OPEN                    0xB9050004   /* handle not open                                    */
#define E_SL_NO_VALID_HDL                0xB9050005   /* invalid handle                                     */
#define E_SL_NO_VALID_PARA_VALUE         0xB9050006   /* invalid parameter value                            */
#define E_SL_NO_VALID_PARA_TYPE          0xB9050007   /* invalid parameter type                             */
#define E_SL_READ_ERROR                  0xB9050008   /* error on read                                      */
#define E_SL_READ_TIME_OUT               0xB9050009   /* timeout on read                                    */
#define E_SL_WRITE_ERROR                 0xB905000A   /* error on write                                     */
#define E_SL_WRITE_TIME_OUT              0xB905000B   /* timeout on write                                   */
#define E_SL_CTRL_ERROR                  0xB905000C   /* error on ioctl                                     */
#define E_SL_NO_VALID_NAME               0xB9050010   /* no valid device name                               */
#define E_SL_NO_VALID_BUF_SLCT           0xB9050011   /* no valid Buffer selected                           */
#define E_SL_NO_VALID_LINE_STATE         0xB9050012   /* line state parameter incorrect                     */
#define E_SL_NO_VALID_LINE_SLCT          0xB9050013   /* line select parameter incorrect                    */
#define E_SL_COM_STATE                   0xB9050014   /* error in comunication driver                       */
#define E_SL_PARITY                      0xB9050015   /* Parity Error                                       */
#define E_SL_FRAME                       0xB9050016   /* Frame Error                                        */
#define E_SL_FLUSH_FAILED                0xB9050017   /* Flush failed                                       */
#define E_SL_READ_EOF                    0xB9050018   /* EOF on read                                        */
#define E_CAL                            0xB906       /* CryptoServer admin library                         */
#define E_CAL_BAD_MEM                    0xB9060001   /* malloc() failed                                    */
#define E_CAL_PPAPP_LIST                 0xB9060002   /* malformed PIN-Pad application list                 */
#define E_CAL_UTL                        0xB9061      /* Utility Functions                                  */
#define E_CAL_UTL_FILE_OPEN              0xB9061001   /* File Open Error                                    */
#define E_CAL_UTL_KEY_INIT               0xB9061002   /* Key Structure has not been initialized             */
#define E_CAL_UTL_KEY_FILE_OPEN          0xB9061003   /* unable to open Keyfile                             */
#define E_CAL_UTL_KEY_FILE_TYPE          0xB9061004   /* unknown Type of Keyfile                            */
#define E_CAL_UTL_KEY_FILE_READ          0xB9061005   /* Error reading Keyfile                              */
#define E_CAL_UTL_KEY_FILE_WRITE         0xB9061006   /* Error writing Keyfile                              */
#define E_CAL_UTL_KEY_TOK_FORMAT         0xB9061007   /* Wrong Keyfile Format in .tok file                  */
#define E_CAL_UTL_KEY_ASC_FORMAT         0xB9061008   /* Wrong Keyfile Format in .key file                  */
#define E_CAL_UTL_KEY_WRONG_FILENAME     0xB9061009   /* Wrong File Name                                    */
#define E_CAL_UTL_KEY_SOURCE             0xB906100A   /* invalid Key Source (file or smartcard)             */
#define E_CAL_UTL_KEY_TYPE               0xB906100B   /* invalid Key Type (private or public)               */
#define E_CAL_UTL_KEY_INVALID_DATA_LEN   0xB906100C   /* invalid Data Length                                */
#define E_CAL_UTL_KEY_INVALID_LEN        0xB906100D   /* invalid Key Length                                 */
#define E_CAL_UTL_KEY_DECRYPT            0xB906100E   /* can't decrypt keyfile                              */
#define E_CAL_UTL_KEY_PASSFCT            0xB906100F   /* no get_pass function specified (or twice)          */
#define E_CAL_UTL_TIME_WRONG_FORMAT      0xB9061010   /* Wrong Time Format YYYYMMDDHHMMSS                   */
#define E_CAL_UTL_FILE_NOT_FOUND         0xB9061011   /* file not found                                     */
#define E_CAL_UTL_INVALID_PARAM          0xB9061012   /* invalid parameter                                  */
#define E_CAL_UTL_NOT_SUPPORTED          0xB9061013   /* function not supported                             */
#define E_CAL_BL                         0xB9062      /* Bootloader Command Interface                       */
#define E_CAL_BL_SHA1                    0xB9062001   /* Error calculating Hash with SHA1                   */
#define E_CAL_BL_RSA                     0xB9062002   /* error executing RSA                                */
#define E_CAL_BL_NO_RND                  0xB9062003   /* no random value present                            */
#define E_CAL_BL_INVALID_PARAM           0xB9062004   /* invalid parameter                                  */
#define E_CAL_BL_INVALID_KEY             0xB9062005   /* invalid key format                                 */
#define E_CAL_BL_FILE_OPEN               0xB9062006   /* file open error                                    */
#define E_CAL_BL_FILE_READ               0xB9062007   /* file read error                                    */
#define E_CAL_BL_MALLOC                  0xB9062008   /* memory allocation error                            */
#define E_CAL_BL_RESPONSE_ERR            0xB9062009   /* response error from Cryptoserver                   */
#define E_CAL_BL_WRONG_FILE_NAME         0xB906200A   /* Module Name Syntax incorrect                       */
#define E_CAL_BL_WRONG_RSP_LENGTH        0xB906200B   /* Wrong Response Length from CS2                     */
#define E_CAL_BL_NO_FILE                 0xB906200C   /* file does not exist                                */
#define E_CAL_BL_TIME_CONVERT            0xB906200D   /* unable to convert time                             */
#define E_CAL_BL_KEY_SIZE                0xB906200E   /* invalid key size                                   */
#define E_CAL_BL_NO_EXT_ERASE            0xB906200F   /* no external erase prevailing                       */
#define E_CAL_ADM                        0xB9063      /* Admin Module Command Interface                     */
#define E_CAL_ADM_INVALID_PARAM          0xB9063001   /* invalid Parameter                                  */
#define E_CAL_ADM_WRONG_NAME             0xB9063002   /* File Name Syntax incorrect                         */
#define E_CAL_ADM_FILE_OPEN              0xB9063003   /* File Open Error                                    */
#define E_CAL_ADM_FILE_READ              0xB9063004   /* File Read Error                                    */
#define E_CAL_ADM_WRONG_PATH             0xB9063005   /* File Path incorrect                                */
#define E_CAL_ADM_MALLOC                 0xB9063006   /* Memory Allocation Error                            */
#define E_CAL_ADM_WRONG_RSP_LENGTH       0xB9063007   /* wrong response length from CS2                     */
#define E_CAL_ADM_NO_FILE                0xB9063008   /* file does not exist                                */
#define E_CAL_ADM_BATT_STATE             0xB9063009   /* unknown battery state                              */
#define E_CAL_ADM_TIME_CONVERT           0xB906300A   /* unable to convert time                             */
#define E_CAL_ADM_AUDIT_BAD              0xB906300B   /* malformed audit log file                           */
#define E_CAL_ADM_NO_EXT_ERASE           0xB906300C   /* no external erase prevailing                       */
#define E_CAL_ADM_AUDITCFG_SVM           0xB906300D   /* struct version mismatch (binary length)            */
#define E_CAL_ADM_INVALID_NO_ARGS        0xB906300E   /* invalid number of arguments returning              */
#define E_CAL_ADM_MODEL_NOT_SUITABLE     0xB906300F   /* file not suitable for cryptoserver model           */
#define E_CAL_ADM_FILE_WRITE             0xB9063010   /* File Write Error                                   */
#define E_CAL_MXC                        0xB9064      /* MMC / MTC tools                                    */
#define E_CAL_MXC_MALLOC                 0xB9064001   /* Memory Allocation Error                            */
#define E_CAL_MXC_FILE_OPEN              0xB9064002   /* unable to open file                                */
#define E_CAL_MXC_FILE_READ              0xB9064003   /* Error reading file                                 */
#define E_CAL_MXC_FILE_WRITE             0xB9064004   /* Error writing file                                 */
#define E_CAL_MXC_FILE_TYPE              0xB9064005   /* unknown file type                                  */
#define E_CAL_MXC_INVALID_ENC_MODE       0xB9064006   /* invalid encryption mode                            */
#define E_CAL_MXC_NO_MDL_INFO            0xB9064007   /* Module does not contain mdl_info                   */
#define E_CAL_MXC_READ_MMC_HEADER        0xB9064008   /* Error reading mmc-header                           */
#define E_CAL_MXC_READ_MTC_HEADER        0xB9064009   /* Error reading mtc-header                           */
#define E_CAL_MXC_DES_KEYGEN_DIV8        0xB906400A   /* key length isn't divisible by 8                    */
#define E_CAL_MXC_DES_DECRYPT            0xB906400B   /* Error executing DES Decryption                     */
#define E_CAL_MXC_DES_ENCRYPT            0xB906400C   /* Error executing DES Encryption                     */
#define E_CAL_MXC_HASH_SHA1              0xB906400D   /* Error executing SHA1 Hash                          */
#define E_CAL_MXC_HASH_INVALID_ALGO      0xB906400E   /* invalid Hash algo                                  */
#define E_CAL_MXC_INVALID_SIG_KEY        0xB906400F   /* invalid Signature Key                              */
#define E_CAL_MXC_PARAM_NULL_POINTER     0xB9064010   /* Null Pointer in Parameter                          */
#define E_CAL_MXC_NO_SIG                 0xB9064011   /* Container is without Signature                     */
#define E_CAL_MXC_NO_SIG_INFO            0xB9064012   /* MTC is without Signature Info                      */
#define E_CAL_MXC_INVALID_MMC_HDR        0xB9064013   /* invalid MMC header                                 */
#define E_CAL_MXC_INVALID_MTC_HDR        0xB9064014   /* invalid MTC header                                 */
#define E_CAL_MXC_INVALID_SIG_HDR        0xB9064015   /* invalid signature header                           */
#define E_CAL_MXC_ENC_NOT_SUPPORTED      0xB9064016   /* encryption not supported                           */
#define E_CAL_MXC_NO_CPU_INFO            0xB9064017   /* unknown target CPU of Module                       */
#define E_CAL_MXC_NO_FW_DEC_KEY          0xB9064018   /* firmware decryption key required                   */
#define E_CAL_MXC_NO_FW_DEC_ERR          0xB9064019   /* error decrypting firmware module                   */
#define E_CAL_MXC_SIGN_TYPE              0xB906401A   /* invalid sign type                                  */
#define E_CAL_MXC_NO_DATA                0xB906401B   /* write operation with zero data blocks              */
#define E_CAL_MXC_SIG_INVALID_ALGO       0xB9064020   /* invalid signature algo                             */
#define E_CAL_MXC_SIG_CMP_RESULT         0xB9064021   /* calculated Hash doesn't match with decrypted Hash  */
#define E_CAL_MXC_SIG_INVALID_MODULUS    0xB9064022   /* invalid RSA Modulus to en-/decrypt signature       */
#define E_CAL_MXC_SIG_INVALID_PUBEXP     0xB9064023   /* invalid RSA Public Exponent to decrypt signature   */
#define E_CAL_MXC_SIG_INVALID_PRVEXP     0xB9064024   /* invalid RSA Modulus Exponent to encrypt signature  */
#define E_CAL_MXC_SIG_RSA_DECRYPT        0xB9064025   /* Error RSA-decryption signature                     */
#define E_CAL_MXC_SIG_RSA_ENCRYPT        0xB9064026   /* Error RSA-encrypting signature                     */
#define E_CAL_MXC_SIG_READ_HEADER        0xB9064027   /* Error reading header of signature                  */
#define E_CAL_MXC_SIG_INVALID_HASH_ALGO   0xB9064028   /* invlaid Hash algo for signature                    */
#define E_CAL_MXC_SIG_INVALID_KEY_LEN    0xB9064029   /* invalid Key Length                                 */
#define E_CAL_MXC_SIG_INVALID_BTYPE      0xB906402A   /* invalid block type                                 */
#define E_CAL_MXC_SIG_INVALID_PKCS1      0xB906402B   /* invalid pkcs#1 format                              */
#define E_CAL_MXC_SIG_BAD_HASH           0xB906402C   /* bad hash value                                     */
#define E_CAL_MXC_NO_HW_INFO             0xB906402D   /* unknown target hardware of Module                  */
#define E_CAL_MXC_DOUBLE_SIGNED          0xB906402E   /* cannot sign an already signed SCF file             */
#define E_CAL_MXC_PARSE                  0xB9064040   /* parse error found in licence file                  */
#define E_CAL_MXC_NO_LICFILE             0xB9064041   /* not a licence file                                 */
#define E_CAL_MXC_NO_FILES               0xB9064050   /* package archive contains no files                  */
#define E_CAL_AUTH                       0xB9066      /* Authentication / Session layer                     */
#define E_CAL_AUTH_BAD_USERNAME          0xB9066001   /* Bad user name                                      */
#define E_CAL_AUTH_BAD_MEM               0xB9066002   /* malloc failed                                      */
#define E_CAL_AUTH_BAD_LIST              0xB9066003   /* bad user list returned from CS2                    */
#define E_CAL_AUTH_ALEN                  0xB9066004   /* bad length of answer from CS2                      */
#define E_CAL_AUTH_KEY_SIZE              0xB9066006   /* specified keysize does not match smartcard         */
#define E_CAL_AUTH_INVAL                 0xB9066008   /* invalid parameter                                  */
#define E_CAL_AUTH_USER_EXIST            0xB9066009   /* user already exists                                */
#define E_CAL_AUTH_FILE_EXIST            0xB906600A   /* file already exists                                */
#define E_CAL_AUTH_FILE_OPEN             0xB906600B   /* file open error                                    */
#define E_CAL_AUTH_FILE_READ             0xB906600C   /* file read error                                    */
#define E_CAL_AUTH_FILE_WRITE            0xB906600D   /* file write error                                   */
#define E_CAL_AUTH_BAD_BACKUP            0xB906600E   /* bad user backup data                               */
#define E_CAL_AUTH_USER_SKIPPED          0xB906600F   /* at least one user has been skipped                 */
#define E_CAL_AUTH_NO_LONG_NAME          0xB9066010   /* long username not supported                        */
#define E_CAL_AUTH_NOT_SUPPORTED         0xB9066011   /* function not supported                             */
#define E_CAL_AUTH_BAD_HALGO             0xB9066012   /* unknown hash algorithm                             */
#define E_CAL_AUTH_RSA_MODE              0xB9066013   /* only CRT sign supported                            */
#define E_CAL_AUTH_SM_MECH               0xB9066014   /* illegal SM mechanism                               */
#define E_CAL_AUTH_DEC_SKEY              0xB9066015   /* error decrypting session key                       */
#define E_CAL_AUTH_SIG_BUFF              0xB9066016   /* buffer too small for signature                     */
#define E_CAL_AUTH_SMC_ID                0xB9066017   /* too many concurrent SC authentications             */
#define E_CAL_AUTH_NO_PUBKEY             0xB9066018   /* no public key found on smartcard                   */
#define E_CAL_AUTH_SM_BAD_MODE           0xB9066019   /* illegal SM mode                                    */
#define E_CAL_AUTH_SM_BAD_SIGNATURE      0xB906601A   /* CryptoServer's signature could not be verified     */
#define E_CAL_AUTH_SM_BAD_KEY_FILE       0xB906601B   /* illegal format in auth keys file                   */
#define E_CAL_AUTH_KEY_NOT_FOUND         0xB906601C   /* auth keys file does not contain key for this CryptoServer */
#define E_CAL_AUTH_KEY_TYPE_UNSUPPORTED   0xB906601D   /* HSM auth key type not supported                    */
#define E_CAL_AUTH_KEY_MODE_UNSUPPORTED   0xB906601E   /* HSM auth key mode not supported                    */
#define E_CAL_CSL                        0xB9067      /* CSL Command Interface                              */
#define E_CAL_CSL_INVALID_REC_LEN        0xB9067001   /* invalid record length returned                     */
#define E_CAL_CSL_MALLOC                 0xB9067002   /* memory allocation error                            */
#define E_CAL_CSL_INVALID_DATA_LEN       0xB9067003   /* invalid data length returned                       */
#define E_CAL_CSL_CRYPT                  0xB9067004   /* password encryption failed                         */
#define E_CAL_CSL_INVAL_PARAM            0xB9067005   /* invalid parameter                                  */
#define E_CAL_CSL_BFSIZE                 0xB9067006   /* buffer size too small                              */
#define E_CAL_CSL_ANSW_DATA              0xB9067007   /* invalid answer data                                */
#define E_CAL_PKG                        0xB9068      /* PKG Command Interface                              */
#define E_CAL_PKG_FOP                    0xB9068001   /* accessing directory failed                         */
#define E_CAL_PKG_FNAME_LEN              0xB9068002   /* filename too long                                  */
#define E_CAL_PKG_FOPEN                  0xB9068003   /* open file failed                                   */
#define E_CAL_PKG_FREAD                  0xB9068004   /* read file failed                                   */
#define E_CAL_PKG_FWRITE                 0xB9068005   /* write file failed/                                 */
#define E_CAL_PKG_MEMORY                 0xB9068006   /* memory allocation failed                           */
#define E_CAL_PKG_NO_FILES               0xB9068007   /* directory contains no files                        */
#define E_CAL_PKG_INVALID_FILE           0xB9068008   /* invalid package file                               */
#define E_CAL_PKG_INVALID_NAME           0xB9068009   /* invalid package name                               */
#define E_CAL_PKG_DIR_EXISTS             0xB906800A   /* directory already exist                            */
#define E_CAL_PKG_CREATE_DIR             0xB906800B   /* creating directory failed                          */
#define E_CAL_PKG_PARAM                  0xB906800C   /* Invalid parameter                                  */
#define E_CAL_PKG_KEY                    0xB906800D   /* No key specifier given                             */
#define E_CAL_PKG_SLF_NAME               0xB906800E   /* Invalid SingedLicenseFile name                     */
#define E_CAL_PKG_LOOP                   0xB9068010   /* Possible loop in state machine detected            */
#define E_CAL_PKG_LOAD_FILE              0xB9068011   /* Load file failed                                   */
#define E_CAL_PKG_FW_CONFIG              0xB9068012   /* different module names with the same id /abbrev - config mismatch */
#define E_CAL_PKG_MDL_START_NOK          0xB9068013   /* could not start firmware module(s)                 */
#define E_CAL_PKG_MDL                    0xB9068014   /* CryptoServer firmware module(s) differs from archive content */
#define E_CAL_PKG_FLAGS_BLCLEAR          0xB9068015   /* Given flag forbids to perform a BLClear            */
#define E_CAL_PKG_BASE_FIRMWARE          0xB9068016   /* base firmware is missing / incomplete              */
#define E_CAL_PKG_FW_NO_ARCHIVE          0xB9068017   /* firmware module not contained in archive           */
#define E_CAL_PKG_FW_CPU_TYPE            0xB9068018   /* firmware module is contained in archive but with different CPU type */
#define E_CAL_PKG_ALARM                  0xB9068019   /* CryptoServer in alarm state                        */
#define E_CAL_PKG_UNDEF_STATE            0xB906801A   /* cryptoserver remains in an undefined state         */
#define E_CAL_PKG_TMP_DIR                0xB906801B   /* creating temporary directory failed                */
#define E_CAL_PKG_OLD_SDK                0xB906801C   /* old CryptoServer SDK version not supported         */
#define E_CAL_PKG_VERIFICATION           0xB906801D   /* verification of firmware package failed            */
#define E_CAL_PKG_AUTH_PARAM             0xB9068020   /* bad auth/sm parameter                              */
#define E_CAL_PKG_SESSION                0xB9068021   /* bad session                                        */
#define E_CAL_PKG_FLAGS                  0xB9068022   /* illegal flag parameter                             */
#define E_CAL_PKG_MODEL                  0xB9068023   /* package loader <--> CryptoServer model mismatch    */
#define E_CAL_MBK                        0xB9069      /* MBK tools                                          */
#define E_CAL_MBK_PKCS1_FORMAT           0xB9069001   /* bad pkcs1 format                                   */
#define E_CAL_MBK_BUF_SIZE               0xB9069002   /* buffer size too small                              */
#define E_CAL_MBK_RESP_LEN               0xB9069003   /* invalid response length                            */
#define E_CAL_MBK_ALLOC                  0xB9069004   /* memory allocation failed                           */
#define E_CAL_MBK_FILE_OPEN              0xB9069005   /* unable to open file                                */
#define E_CAL_MBK_FILE_FORMAT            0xB9069006   /* invalid file format                                */
#define E_CAL_MBK_PARAM_INVAL            0xB9069007   /* invalid parameter                                  */
#define E_CAL_MBK_ACTION_CANCELED        0xB9069008   /* aborted by user                                    */
#define E_CAL_MBK_RESP_DATA              0xB9069009   /* invalid answer data                                */
#define E_CAL_MBK_KEY_LEN                0xB906900A   /* invalid key length                                 */
#define E_CAL_MBK_NO_PWD                 0xB906900B   /* no password given                                  */
#define E_CAL_MBK_NO_SESSION             0xB906900C   /* no session                                         */
#define E_CAL_MBK_SC_ERR                 0xB9069010   /* smartcard responds error                           */
#define E_CAL_MBK_SC_NO_RECORD           0xB9069011   /* record not found                                   */
#define E_CAL_MBK_SC_NO_FILE             0xB9069012   /* file not found                                     */
#define E_CAL_MBK_SC_DENIED              0xB9069013   /* access denied                                      */
#define E_CAL_MBK_SC_SM                  0xB9069014   /* secure messaging failed                            */
#define E_CAL_MBK_SC_RECLEN              0xB9069015   /* invalid record length                              */
#define E_CAL_MBK_SC_VERIFY_FAILED       0xB9069016   /* password verification failed                       */
#define E_CAL_MBK_SC_CARD_LOCKED         0xB9069017   /* smartcard is locked                                */
#define E_CAL_MBK_SC_PIN_REPETITION      0xB9069018   /* bad pin repetition                                 */
#define E_CAL_MBK_SC_NULL_PIN            0xB9069019   /* null pin still active                              */
#define E_CAL_MBK_SC_INVALID_PIN         0xB906902    /* invalid pin                                        */
#define E_CAL_SMC                        0xB906A      /* cs2adm smartcard tools                             */
#define E_CAL_SMC_ALLOC                  0xB906A001   /* memory allocation failed                           */
#define E_CAL_SMC_BAD_DEV_NAME           0xB906A002   /* bad device name                                    */
#define E_CAL_SMC_TOOMANY                0xB906A003   /* too many open handles                              */
#define E_CAL_SMC_ID_IN_USE              0xB906A004   /* requested smc_id already in use                    */
#define E_CAL_SMC_CHANNEL_NOT_OPEN       0xB906A005   /* channel is not open                                */
#define E_CAL_SMC_DATA_LEN               0xB906A006   /* invalid data length                                */
#define E_CAL_SMC_BUF_SIZE               0xB906A007   /* buffer size too small                              */
#define E_CAL_SMC_LOCKED                 0xB906A008   /* smartcard is locked                                */
#define E_CAL_SMC_BAD_RESPONSE           0xB906A009   /* bad response from smartcard                        */
#define E_CAL_SMC_CARD_UNKNOWN           0xB906A00A   /* unknown smartcard                                  */
#define E_CAL_SMC_FCT_NOT_SUPP           0xB906A00B   /* function not supported for given cardtype          */
#define E_CAL_SMC_EXTD_APDU_N_SUPP       0xB906A00C   /* function not supported for given cardtype          */
#define E_CAL_SMC_PARAMETER              0xB906A00D   /* bad parameter given                                */
#define E_CAL_SMC_LOGIN_MISS             0xB906A00E   /* login condition for this function not supplied     */
#define E_CAL_SMC_BAD_KEYSIZE            0xB906A00F   /* keylength not suitable for given card              */
#define E_CAL_SMC_PIN_LEN                0xB906A010   /* invalid PIN length                                 */
#define E_CAL_SMC_FILE_NOT_FOUND         0xB906A011   /* PIN file doesn't exist                             */
#define E_CAL_SMC_NULLPIN                0xB906A012   /* Null-PIN is still active                           */
#define E_CAL_SMC_INVALID_PIN            0xB906A01C   /* PIN is invalid, no tries left                      */
#define E_CAL_SMC_INVALID_PIN1           0xB906A01D   /* PIN is invalid, 1 try left                         */
#define E_CAL_SMC_INVALID_PIN2           0xB906A01E   /* PIN is invalid, 2 tries left                       */
#define E_CAL_SMC_INVALID_PIN3           0xB906A01F   /* PIN is invalid, 3 or more tries left               */
#define E_CAL_SMC_RECOVER_BAD_DATA       0xB906A020   /* bad data from backup card                          */
#define E_CAL_SMC_RECOVER_TOO_MANY       0xB906A021   /* more keyhalfs given than existing                  */
#define E_CAL_SMC_COS_BAD_DATA           0xB906A022   /* bad data structure on Siemens CardOS card          */
#define E_CAL_NTP                        0xB906B      /* NTP Module Command Interface                       */
#define E_CAL_NTP_INVALID_PARAM          0xB906B001   /* invalid Parameter                                  */
#define E_CAL_NTP_WRONG_RSP_LENGTH       0xB906B002   /* wrong response length from CS2                     */
#define E_CAL_NTP_TIME_CONVERT           0xB906B003   /* unable to convert time                             */
#define E_CAL_CLONE_FILE_EMPTY           0xB906C001   /* there are no database entries in the given file    */
#define E_CAL_CLONE                      0xB906F      /* Clone Database Command Interface                   */
#define E_CAL_CLONE_FILE_STRUCTURE       0xB906F002   /* incorrect structure of backup file                 */
#define E_CAL_CLONE_FILE_OPEN            0xB906F003   /* unable to open backup file                         */
#define E_CAL_CLONE_MALLOC               0xB906F004   /* memory allocation failed                           */
#define E_CAL_CLONE_FILE_LEN             0xB906F005   /* incorrect length of backup file                    */
#define E_CAL_CLONE_SEARCH_KEY1          0xB906F006   /* cannot find search_key1                            */
#define E_CAL_CLONE_SEARCH_KEY2          0xB906F007   /* cannot find search_key2                            */
#define E_CAL_CLONE_SNIPPET_LEN          0xB906F008   /* invalid length of snippet                          */
#define E_DSP                            0xB908       /* LCD Display module                                 */
#define E_DSP_DATALEN                    0xB9080001   /* string too long                                    */
#define E_DSP_MAXDSP                     0xB9080002   /* Cannot open another display                        */
#define E_DSP_TIMEOUT                    0xB9080003   /* timeout reached                                    */
#define E_DSP_MEM                        0xB9080004   /* memory allocation failed                           */
#define E_DSP_HDL                        0xB9080005   /* display not open                                   */
#define E_DSP_CANCEL                     0xB9080006   /* dsp_getexp cancelled                               */
#define E_DSP_PARAM                      0xB9080007   /* parameter out of range                             */
#define E_CSLAN                          0xB90A       /* CSLAN                                              */
#define E_CSLAN_CTRL                     0xB90A01     /* CSLAN Control Module                               */
#define E_CSLAN_CTRL_BADCMD              0xB90A0101   /* wrong parameter                                    */
#define E_CSLAN_CTRL_FAILED              0xB90A0102   /* system call failure                                */
#define E_CSLAN_CTRL_DENIED              0xB90A0103   /* wrong permission for file operations               */
#define E_CSLAN_CTRL_NO_ROUTE            0xB90A0104   /* no relation between port and cs device             */
#define E_CSLAN_CTRL_FILE                0xB90A0105   /* no such file                                       */
#define E_CSLAN_CTRL_BADSIZE             0xB90A0106   /* length mismatch for vchar parameter                */
#define E_CSLAN_CTRL_RESET               0xB90A0107   /* operation aborted because cs has been reset        */
#define E_CSLAN_CTRL_AUTH                0xB90A0108   /* authentication failed                              */
#define E_CSLAN_CTRL_MEM                 0xB90A0109   /* memory allocation failed                           */
#define E_CSLAN_CTRL_NO_SER              0xB90A010A   /* no serial number available                         */
#define E_CSLAN_CTRL_LOCKED              0xB90A010B   /* CryptoServer is locked                             */
#define E_CSLAN_CTRL_ALREADY_LOCKED      0xB90A010C   /* CryptoServer is already locked                     */
#define E_CSLAN_CTRL_LOCK_DENIED         0xB90A010D   /* CryptoServer lock denied (on loadbalancing ports)  */
#define E_CSLAN_CTRL_NO_SPACE            0xB90A010E   /* No space left on device for this operation         */
#define E_CSLAN_CTRL_TO_MANY_ROUTES      0xB90A010F   /* To many routes for the state device(s)             */
#define E_CSLAN_CTRL_NO_KSAPI            0xB90A0120   /* ksapi compatibility listener not found             */
#define E_CSLAN_CTRL_INVALID_SFC         0xB90A0121   /* nonexistent subfunction code                       */
#define E_CSLAN_CTRL_CONFIG              0xB90A0201   /* illegal configuration file                         */
#define E_CSLAN_QUEUE                    0xB90A0301   /* queue full                                         */
#define E_CSLAN_AVAIL                    0xB90A0302   /* no cryptoserver online                             */
#define E_CSLAN_LEN_MISMATCH             0xB90A0303   /* mismatch between real packet length and data length */
#define E_CSLAN_NO_CONN                  0xB90A0304   /* connection table full                              */
#define E_CSLAN_MAPPING                  0xB90A0305   /* ksapi compatibility mapping not found              */
#define E_CSADM                          0xB90B       /* csadm Tool                                         */
#define E_CSADM_MEM                      0xB90B0001   /* memory allocation failed                           */
#define E_CSADM_PWD_NULL                 0xB90B0002   /* NULL passphrase                                    */
#define E_CSADM_PWD_DIFF                 0xB90B0003   /* passphrase repetition wrong                        */
#define E_CSADM_BUF_SIZE                 0xB90B0004   /* buffer size to small                               */
#define E_CSADM_CMD_WRONGCALL            0xB90B0005   /* command wrongly called                             */
#define E_CSADM_ARG_CNT                  0xB90B0010   /* invalid number of arguments                        */
#define E_CSADM_ARG_FMT                  0xB90B0011   /* invalid argument format                            */
#define E_CSADM_ABORT                    0xB90B0012   /* aborted by user                                    */
#define E_CSADM_ARG_LEN                  0xB90B0013   /* invalid argument length                            */
#define E_CSADM_RESP_LEN                 0xB90B0014   /* invalid response length                            */
#define E_CSADM_RESP_DATA                0xB90B0015   /* invalid response data                              */
#define E_CSADM_KEY_PART_CNT             0xB90B0020   /* invalid number of key parts                        */
#define E_CSXAPI                         0xB90C       /* CSXAPI                                             */
#define E_CSXAPI_ALLOC                   0xB90C0001   /* memory allocation failed                           */
#define E_CSXAPI_DATA_LEN                0xB90C0002   /* invalid data length                                */
#define E_CSXAPI_RESP_LEN                0xB90C0003   /* invalid response length                            */
#define E_CSXAPI_BUF_SIZE                0xB90C0004   /* buffer size too small                              */
#define E_CSXAPI_PARAM                   0xB90C0005   /* invalid parameter value                            */
#define E_CSXAPI_MAX_PIN                 0xB90C0006   /* maximum number of cached pins reached              */
#define E_CSXAPI_SESSION_INVALID         0xB90C0007   /* invalid session                                    */
#define E_CSXAPI_CLUSTER                 0xB90C01     /* Cluster API                                        */
#define E_CSXAPI_CLUSTER_OPEN            0xB90C0101   /* unable to open any device                          */
#define E_CSXAPI_CLUSTER_LOGON           0xB90C0102   /* unable to logon to any device                      */
#define E_CSXAPI_CLUSTER_EXEC            0xB90C0103   /* unable to execute command on any device            */
#define E_CSXAPI_CLUSTER_NAME            0xB90C0104   /* unknown device name                                */
#define E_CSXAPI_CLUSTER_CON_PARAM       0xB90C0105   /* invalid connection parameter                       */
#define E_CSXAPI_CLUSTER_HDL_IN_USE      0xB90C0106   /* handle still in use                                */
#define E_CSXAPI_WIN                     0xB90C1      /* windows system error                               */
#define E_CSXAPI_UNIX                    0xB90C2      /* unix system error                                  */
#define E_ULOG                           0xB90D       /* ulog library                                       */
#define E_ULOG_TMOUT                     0xB90D0001   /* timeout reading socket                             */
#define E_ULOG_SOCKET                    0xB90D1      /* socket failed                                      */
#define E_ULOG_BIND                      0xB90D2      /* bind failed                                        */
#define E_ULOG_SEND                      0xB90D3      /* send failed                                        */
#define E_ULOG_POLL                      0xB90D4      /* poll failed                                        */
#define E_ULOG_RECV                      0xB90D5      /* recv failed                                        */
#define E_SDB                            0xB90E       /* Simple Database library                            */
#define E_SDB_NO_MEM                     0xB90E0001   /* memory allocation failed                           */
#define E_SDB_NO_DB                      0xB90E0002   /* database file does not exist                       */
#define E_SDB_NOT_FOUND                  0xB90E0003   /* record not found                                   */
#define E_SDB_EXISTS                     0xB90E0004   /* record already exists                              */
#define E_SDB_COR_FILE                   0xB90E0005   /* corrupted database file                            */
#define E_SDB_BAD_HANDLE                 0xB90E0006   /* bad database handle                                */
#define E_SDB_BAD_INFO                   0xB90E0007   /* bad info structure                                 */
#define E_SDB_LENGTH                     0xB90E0008   /* bad data length                                    */
#define E_SDB_LOCK                       0xB90E0009   /* locking failed                                     */
#define E_SDB_FILE_NAME                  0xB90E000A   /* invalid file name                                  */
#define E_SDB_SYS_OPEN                   0xB90E1      /* open failed                                        */
#define E_SDB_SYS_CREAT                  0xB90E2      /* creat failed                                       */
#define E_SDB_SYS_SEEK                   0xB90E3      /* lseek failed                                       */
#define E_SDB_SYS_READ                   0xB90E4      /* read failed                                        */
#define E_SDB_SYS_WRITE                  0xB90E5      /* write failed                                       */
#define E_SDB_MTX_CREATE                 0xB90E6      /* creating mutex failed                              */
#define E_SDB_MTX_LOCK                   0xB90E7      /* locking mutex failed                               */
#define E_SDB_FILE_LOCK                  0xB90E8      /* locking file failed                                */
#define E_P11ADM                         0xB90F       /* P11 admin library                                  */
#define E_P11ADM_ALLOC                   0xB90F0001   /* memory allocation error                            */
#define E_P11ADM_PARAM                   0xB90F0002   /* invalid parameter                                  */
#define E_P11ADM_BUF_SIZE                0xB90F0003   /* insufficient buffer size                           */
#define E_P11ADM_KEY_TYPE                0xB90F0004   /* invalid key type                                   */
#define E_P11ADM_FILE_OPEN               0xB90F0005   /* unable to open / create file                       */
#define E_P11ADM_MECHANISM               0xB90F0006   /* invalid mechanism                                  */
#define E_P11ADM_KEY_LEN                 0xB90F0007   /* invalid key length                                 */
#define E_P11ADM_OSSL                    0xB90F1      /* OpenSSL section                                    */
#define E_P11ADM_PKCS11                  0xB90F2      /* PKCS#11 section                                    */
#define E_HSD                            0xB912       /* Host Service Daemon                                */
#define E_HSD_MALLOC                     0xB9120001   /* memory allocation error                            */
#define E_HSD_WSASTARTUP                 0xB9120002   /* error on WSAStartup                                */
#define E_HSD_WSACLEANUP                 0xB9120003   /* error on WSACleanup                                */
#define E_HSD_CREATEMUTEX                0xB9120004   /* err creating mutex                                 */
#define E_HSD_NO_DEVICES                 0xB9120005   /* error creating socket                              */
#define E_HSD_CREATESOCKET               0xB9120006   /* socket creating error                              */
#define E_HSD_TIMEOUT                    0xB9120007   /* timeout                                            */
#define E_HSD_TERM                       0xB9120008   /* connection was terminated                          */
#define E_HSD_INVALID_DATA_LEN           0xB9120009   /* invalid cmds data length                           */
#define E_HSD_INVALID_HDR_LEN            0xB912000A   /* invalid cmds header length                         */
#define E_HSD_INVALID_ARG                0xB912000B   /* invalid argument                                   */
#define E_HSD_BINDSOCKET                 0xB912000C   /* binding socket failed                              */
#define E_HSD_LISTEN                     0xB912000D   /* listen failed                                      */
#define E_HSD_SETSOCKOPT                 0xB912000E   /* setsockopt failed                                  */
#define E_HSD_BAD_CONFIG                 0xB912000F   /* bad configuration                                  */
#define E_HSD_PROTOCOL                   0xB9120010   /* protocol error                                     */
#define E_HSD_LOAD_LIBRARY               0xB9120011   /* unable to load auxiliary library                   */
#define E_HSD_MUTEX_CREATE               0xB9120012   /* unable to create mutex                             */
#define E_HSD_MUTEX_LOCK                 0xB9120013   /* unable to lock mutex                               */
#define E_HSD_MUTEX_UNLOCK               0xB9120014   /* unable to unlock mutex                             */
#define E_HSD_MUTEX_LOCK_TIMEOUT         0xB9120015   /* timeout while trying to lock mutex                 */
#define E_HSD_SELECT                     0xB9121      /* select error                                       */
#define E_HSD_RECV                       0xB9122      /* receive error                                      */
#define E_HSD_SEND                       0xB9123      /* send error                                         */
#define E_HSD_CTRL                       0xB9124      /* control module                                     */
#define E_HSD_CTRL_WRONG_SFC             0xB9124001   /* wrong subfunction code                             */
#define E_HSD_CTRL_BADCMD                0xB9124002   /* bad control command                                */
#define E_HSD_CTRL_AUTH                  0xB9124003   /* authentication failed                              */
#define E_HSD_CTRL_CS2_BAD_ANSW          0xB9124004   /* bad CryptoServer answer                            */
#define E_HSD_INIT                       0xB9125      /* init failed                                        */
#define E_DSPA                           0xB915       /* dsp_admin3 - DSP Daemon on CSLAN                   */
#define E_DSPA_PARAM                     0xB9150001   /* wrong parameter or parameter usage                 */
#define E_DSPA_TIME_CONV                 0xB9150002   /* some of the manyfold time conversions failed (w/o userinteraction) */
#define E_DSPA_TIME_CONV_USER            0xB9150003   /* some of the manyfold time conversions failed (w/ userinteraction) */
#define E_DSPA_BUFFERSIZE                0xB9150004   /* some provided buffer was too small                 */
#define E_DSPA_INTERNAL_PARSE            0xB9150042   /* some data struct could not be parsed internally    */
#define E_DSPA_CS                        0xB91501     /* CryptoServer Administration section                */
#define E_DSPA_CS_NO_ALARM               0xB9150101   /* No Alarm prevailing                                */
#define E_DSPA_CS_FNA_FIPS               0xB9150102   /* Function not available in FIPS mode                */
#define E_DSPA_LAN                       0xB91502     /* CSLAN Administration section                       */
#define E_DSPA_LAN_UPDATE                0xB91503     /* CSLAN Administration - Update                      */
#define E_DSPA_LAN_UPDATE_BASE           0xB9150300   /* CSLAN Administration - Update - calcbase           */
#define E_DSPA_LAN_UPDATE_NOTGZ          0xB9150301   /* Extraction of archive failed                       */
#define E_DSPA_LAN_UPDATE_NOLANAR        0xB9150302   /* Not a CSLAN OS archive file.                       */
#define E_DSPA_LAN_UPDATE_NOINDI         0xB9150303   /* Did not find expected indicator in archive.        */
#define E_DSPA_LAN_UPDATE_NOTARGPAR      0xB9150304   /* Wrong/missing <partition> argument                 */
#define E_DSPA_LAN_UPDATE_CANTMOUNT      0xB9150305   /* Can't mount user1/user2                            */
#define E_DSPA_LAN_UPDATE_CANTTOUCH      0xB9150306   /* Could not touch INIT-COPY-CONFIG ActionFile        */
#define E_DSPA_LAN_UPDATE_POSTUPSCR      0xB9150307   /* Post update script returned error                  */
#define E_DSPA_LAN_UPDATE_SHNOTEXEC      0xB915037F   /* sh could not be executed                           */
#define E_DSPA_LAN_UPDATE_NO_TGZ_O       0xB91503FF   /* file was no .tar.gz (old msg)                      */
#define E_DSPA_LAN_ACTIONF               0xB91504     /* CSLAN Administration - ActionFiles                 */
#define E_DSPA_LAN_ACTIONF_BASE          0xB9150400   /* CSLAN Administration - ActionFiles - calcbase      */
#define E_DSPA_LAN_ACTIONF_COMMAND       0xB9150401   /* Wrong/missing <command> argument                   */
#define E_DSPA_LAN_ACTIONF_ACTIONFLE     0xB9150402   /* Wrong/missing <ActionFile> argument                */
#define E_DSPA_LAN_ACTIONF_PARTITION     0xB9150403   /* Wrong/missing <partition> argument                 */
#define E_DSPA_LAN_ACTIONF_PREVAILIN     0xB9150404   /* prevailing actionFile                              */
#define E_DSPA_LAN_ACTIONF_MNTTARGET     0xB9150405   /* can't mount target user1/user2                     */
#define E_DSPA_LAN_ACTIONF_SHNOTEXEC     0xB915047F   /* sh could not be executed                           */
#define E_DSPA_LAN_SNMP                  0xB91505     /* CSLAN Administration - SNMP                        */
#define E_DSPA_LAN_SNMP_BASE             0xB9150500   /* CSLAN Administration - SNMP - calcbase             */
#define E_DSPA_LAN_SNMP_COMMAND          0xB9150501   /* Wrong/missing <command> argument                   */
#define E_DSPA_LAN_SNMP_SYSCSNMPD        0xB9150502   /* Failed to write /etc/sysconfig/snmpd               */
#define E_DSPA_LAN_SNMP_SYSCTRAPD        0xB9150503   /* Failed to write /etc/sysconfig/trapd               */
#define E_DSPA_LAN_SNMP_ETCSNMPD         0xB9150504   /* Failed to write /etc/snmp/snmpd.conf               */
#define E_DSPA_LAN_SNMP_SHNOTEXEC        0xB915057F   /* sh could not be executed                           */
#define E_DSPA_LAN_SNMP_FORKFAILED       0xB91505FF   /* fork(2) failed                                     */
#define E_DSPA_LINUXERROR                0xB91506     /* Error Code from Linux:                             */
#define E_CTS_API                        0xB916       /* Host API CTS - Crypto Timestamp                    */
#define E_CTS_API_DEVICE_ENV             0xB9164001   /* Environment variable CRYPTOSERVER not set          */
#define E_CTS_API_DEVICE_TCP             0xB9164002   /* Environment variable CRYPTOSERVER not configured for TCP */
#define E_CTS_API_ARGS                   0xB9164003   /* Incorrect function arguments given                 */
#define E_CTS_API_ASN_ENCODE             0xB9164004   /* Error occurred while encoding the timestamp request */
#define E_CTS_API_ASN_ENCODE_LEN         0xB9164005   /* Given input buffer is too small to copy encoded data */
#define E_CTS_API_RECV                   0xB9164006   /* Incorrect data received from TimestampServer       */
#define E_CTS_API_TS                     0xB9164007   /* Error returned from the TimestampServer            */
#define E_CTS_API_FOPEN                  0xB9164008   /* Cannot open file                                   */
#define E_CTS_API_PKCS7_INVALID_OBJECT   0xB9164009   /* given data is not pkcs7 encoded                    */
#define E_CTS_API_PKCS7_UNSUPPORTED_TYPE   0xB916400A   /* only signed and signedAndEnveloped PKCS7 types supported */
#define E_CTS_API_PKCS7_MULTIPLE_CERTS   0xB916400B   /* given data contains more than one certificate      */
#define E_CTS_API_PKCS7_NO_CERTS         0xB916400C   /* given data contains no certificate                 */
#define E_CTS_API_X509_NO_CERT           0xB916400D   /* given data contains no plain certificate           */
#define E_CTS_API_INVALID_TS_STRUCT      0xB916400E   /* Given TimeStamp structure is not a valid ASN.1 format */
#define E_CTS_API_HASH_ALGO              0xB916400F   /* Unsupported hash algorithm                         */
#define E_CTS_API_INVALID_HASH           0xB9164010   /* Calculated hash value does not match with the hash value contained in the TimeStamp */
#define E_CTS_API_OUT_OVL                0xB9164011   /* given memory buffer too small or invalid length returned from the CSLAN */
#define E_CTS_API_MALLOC                 0xB9164012   /* can't allocate memory                              */
#define E_CTS_API_PKCS7_RW               0xB9164013   /* Error while reading/writing PKCS7 data             */
#define E_CTS_API_ASN_NO_TS              0xB9164014   /* Given timestamp contains no timestamp token (maybe error in request?) */
#define E_CTS_API_HASH_LENGTH            0xB9164015   /* invalid hash length                                */
#define E_CTS_API_HTTP_BAD_RESP          0xB9164016   /* invalid http response                              */
#define E_CTS_API_TCP_INIT               0xB9164100   /* tcp: init error                                    */
#define E_CTS_API_TCP_ADDR               0xB9164101   /* tcp: incorrect IP address                          */
#define E_CTS_API_TCP_HOSTNAME           0xB9164102   /* tcp: incorrect hostname                            */
#define E_CTS_API_TCP_PORT               0xB9164103   /* tcp: incorrect port number                         */
#define E_CTS_API_TCP_TIMEOUT            0xB9164104   /* tcp: connection timeout                            */
#define E_CTS_API_TCP_CLOSED             0xB9164105   /* tcp: connection closed by remote host              */
#define E_CTS_API_TCP_SOCKET             0xB91642     /* tcp: can't create socket                           */
#define E_CTS_API_TCP_CONNECT            0xB91643     /* tcp: can't get connection                          */
#define E_CTS_API_TCP_RECV               0xB91644     /* tcp: recv error                                    */
#define E_CTS_API_TCP_SEND               0xB91645     /* tcp: send error                                    */
#define E_CTS_API_TCP_SELECT             0xB91646     /* tcp: select error                                  */
#define E_CTS_API_HTTP                   0xB9164800   /* HTTP error                                         */
#define E_CTS_API_HTTP_BAD_REQUEST       0xB9164990   /* HTTP error 400: Bad Request                        */
#define E_CTS_API_HTTP_FORBIDDEN         0xB9164993   /* HTTP error 403: Forbidden                          */
#define E_CTS_API_HTTP_NOT_FOUND         0xB9164994   /* HTTP error 404: Not Found                          */
#define E_CTS_API_HTTP_METHOD_NOT_ALLOWED   0xB9164995   /* HTTP error 405: Method not allowed                 */
#define E_CTS_API_HTTP_SERVER_ERROR      0xB91649F4   /* HTTP error 500: Server error                       */
#define E_CTS_API_HTTP_SERVICE_UNAVAIL   0xB91649F7   /* HTTP error 503: Service unavailable                */
#define E_CSPD                           0xB917       /* CryptoServer Protocol Daemon                       */
#define E_CSPD_MALLOC                    0xB9170001   /* memory allocation error                            */
#define E_CSPD_PARAM                     0xB9170002   /* invalid parameter                                  */
#define E_CSPD_BAD_CONFIG                0xB9170003   /* bad configuration                                  */
#define E_CSPD_NO_DEVICE                 0xB9170004   /* can't open any device                              */
#define E_CSPD_TIMEOUT                   0xB9170005   /* timeout                                            */
#define E_CSPD_TERM                      0xB9170006   /* connection was terminated                          */
#define E_CSPD_INVALID_DATA_LEN          0xB9170007   /* invalid command data length                        */
#define E_CSPD_PROTOCOL                  0xB9170008   /* protocol error                                     */
#define E_CSPD_MAX_CONNECTIONS           0xB9170009   /* maximum number of connections reached              */
#define E_CSPD_FILE_OPEN                 0xB917000A   /* can't open file                                    */
#define E_CSPD_BUF_SIZE                  0xB917000B   /* buffer size too small                              */
#define E_CSPD_MUTEX                     0xB917001    /* mutex section                                      */
#define E_CSPD_MUTEX_CREATE              0xB9170012   /* unable to create mutex                             */
#define E_CSPD_MUTEX_DELETE              0xB9170013   /* timeout while trying to lock mutex                 */
#define E_CSPD_MUTEX_LOCK                0xB9170014   /* unable to lock mutex                               */
#define E_CSPD_MUTEX_LOCK_TIMEOUT        0xB9170015   /* atempt to lock mutex timed out                     */
#define E_CSPD_MUTEX_UNLOCK              0xB9170016   /* unable to unlock mutex                             */
#define E_CSPD_CTRL                      0xB917002    /* control module                                     */
#define E_CSPD_CTRL_WRONG_SFC            0xB9170021   /* wrong subfunction code                             */
#define E_CSPD_CTRL_BAD_CMD              0xB9170022   /* bad control command                                */
#define E_CSPD_CTRL_AUTH                 0xB9170023   /* authentication failed                              */
#define E_CSPD_CTRL_BAD_ANSW             0xB9170024   /* bad CryptoServer answer                            */
#define E_CSPD_CTRL_PARAM                0xB9170025   /* invalid parameter                                  */
#define E_CSPD_TCP                       0xB9171      /* TCP error                                          */
#define E_CSPD_SYS                       0xB9172      /* system error                                       */
#define E_PPD                            0xB918       /* CryptoServer Protocol Daemon                       */
#define E_PPD_MALLOC                     0xB9180001   /* memory allocation error                            */
#define E_PPD_PARAM                      0xB9180002   /* invalid parameter                                  */
#define E_PPD_BAD_CONFIG                 0xB9180003   /* bad configuration                                  */
#define E_PPD_NO_DEVICE                  0xB9180004   /* can't open any device                              */
#define E_PPD_TIMEOUT                    0xB9180005   /* timeout                                            */
#define E_PPD_TERM                       0xB9180006   /* connection was terminated                          */
#define E_PPD_INVALID_DATA_LEN           0xB9180007   /* invalid command data length                        */
#define E_PPD_PROTOCOL                   0xB9180008   /* protocol error                                     */
#define E_PPD_MAX_CONNECTIONS            0xB9180009   /* maximum number of connections reached              */
#define E_PPD_FILE_OPEN                  0xB918000A   /* can't open file                                    */
#define E_PPD_BUF_SIZE                   0xB918000B   /* buffer size too small                              */
#define E_PPD_AUTH_FAILED                0xB918000C   /* authentication failed                              */
#define E_PPD_CMD_LEN                    0xB9180010   /* invalid command length                             */
#define E_PPD_CMD_FC                     0xB9180011   /* invalid function code                              */
#define E_PPD_CMD_SFC                    0xB9180012   /* invalid sub-function code                          */
#define E_PPD_MUTEX                      0xB918002    /* mutex section                                      */
#define E_PPD_MUTEX_CREATE               0xB9180022   /* unable to create mutex                             */
#define E_PPD_MUTEX_DELETE               0xB9180023   /* timeout while trying to lock mutex                 */
#define E_PPD_MUTEX_LOCK                 0xB9180024   /* unable to lock mutex                               */
#define E_PPD_MUTEX_LOCK_TIMEOUT         0xB9180025   /* atempt to lock mutex timed out                     */
#define E_PPD_MUTEX_UNLOCK               0xB9180026   /* unable to unlock mutex                             */
#define E_PPD_TCP                        0xB9181      /* TCP error                                          */
#define E_PPD_SYS                        0xB9182      /* system error                                       */
#define E_P11_API                        0xB91C       /* CryptoServer PKCS11 API                            */
#define E_P11_CMD_SIZE                   0xB91C0000   /* CryptoServer command size exceeded                 */
#define E_P11_AUTH_METHOD                0xB91C0001   /* Unknown authentication method                      */
#define E_P11_AUTH_CREDENTIALS           0xB91C0002   /* Invalid authentication credentials                 */
#define E_P11_HASH_ALGO                  0xB91C0003   /* Unknown hash algorithm                             */
#define E_P11_ANSW                       0xB91C0004   /* Malformed answer of CryptoServer                   */
#define E_P11_LOGIN_STRING_COUNT         0xB91C0005   /* Number of login strings < 2                        */
#define E_P11_LOGIN_STRING               0xB91C0006   /* Login string too long                              */
#define E_P11_LOGIN_STRING_INVALID       0xB91C0007   /* Invalid login string                               */
#define E_P11_HANDLE_LOST                0xB91C0008   /* CryptoServer handle lost                           */
#define E_PPA                            0xB91D       /* PIN pad API                                        */
#define E_PPA_ALLOC                      0xB91D0001   /* memory allocation failed                           */
#define E_PPA_TYPE                       0xB91D0002   /* invalid PIN pad type                               */
#define E_PPA_NO_DEVICE                  0xB91D0003   /* no device found                                    */
#define E_PPA_BAD_DEV_NAME               0xB91D0004   /* bad device name                                    */
#define E_PPA_TOOMANY                    0xB91D0005   /* too may open connections                           */
#define E_PPA_BAD_HANDLE                 0xB91D0006   /* bad handle                                         */
#define E_PPA_PARAM                      0xB91D0007   /* invalid parameter                                  */
#define E_PPA_NOT_SUPPORTED              0xB91D0008   /* requested feature is not supported                 */
#define E_PPA_NOT_OPEN                   0xB91D0009   /* connection is not open                             */
#define E_PPA_TIMEOUT                    0xB91D000A   /* timeout occurred                                   */
#define E_PPA_ABORT                      0xB91D000B   /* action canceled                                    */
#define E_PPA_DATA_LEN                   0xB91D000C   /* invalid data length                                */
#define E_PPA_PIN_REPETITION             0xB91D000D   /* bad PIN repetition                                 */
#define E_PPA_BUF_SIZE                   0xB91D000E   /* invalid buffer size                                */
#define E_PPA_PROTOCOL                   0xB91D000F   /* protocol error                                     */
#define E_PPA_ICC_STATE                  0xB91D0010   /* bad ICC state                                      */
#define E_PPA_ICC_DATA_LEN               0xB91D0011   /* bad data length returned from ICC                  */
#define E_PPA_ICC_BAD_RESPONSE           0xB91D0012   /* bad response recieved from ICC                     */
#define E_PPA_ICC_NO_CARD                0xB91D0013   /* no smartcard inserted                              */
#define E_PPA_USB_DRIVER                 0xB91D0020   /* USB driver is not running                          */
#define E_PPA_USB_OPEN                   0xB91D0021   /* USB open failed                                    */
#define E_PPA_USB_WRITE                  0xB91D0022   /* USB write failed                                   */
#define E_PPA_USB_READ                   0xB91D0023   /* USB read failed                                    */
#define E_PPA_USB_NOT_AVAIL              0xB91D0024   /* USB is not available                               */
#define E_PPA_BAD_INPUT                  0xB91D0030   /* bad input                                          */
#define E_PPA_ACCESS_DENIED              0xB91D0031   /* access denied                                      */
#define E_PPA_CONNECT                    0xB91D0032   /* no reader connected                                */
#define E_PPA_JCOP_TIMEOUT               0xB91D0041   /* JCOP simulator send/receive timeout                */
#define E_PPA_JCOP_OTHER                 0xB91D0044   /* JCOP simulator unknown error                       */
#define E_PPA_PCSC                       0xB91D1      /* PC/SC                                              */
#define E_PPA_MKT                        0xB91D2      /* MKT                                                */
#define E_PPA_CP8                        0xB91D3      /* CP8                                                */
#define E_PPA_ACR80                      0xB91D4      /* ACR80                                              */
#define E_PPA_LIBUSB                     0xB91D5      /* USB                                                */
#define E_PPA_CCID                       0xB91D6      /* CCID                                               */
#define E_PPA_CYBERJACK                  0xB91D7      /* cyberJack                                          */
#define E_PPA_JCOP                       0xB91D8      /* JCOP                                               */
#define E_COPA                           0xB91E       /* copa Config Parser                                 */
#define E_COPA_FILE                      0xB91E0000   /* Cant open/access configuration file                */
#define E_COPA_LINE_TO_LONG              0xB91E0100   /* line from input file to long                       */
#define E_COPA_NO_MATCHING_BRACKET       0xB91E0101   /* No matching ] found                                */
#define E_COPA_NO_EQUAL_FOUND            0xB91E0102   /* No = after variable found                          */
#define E_COPA_NO_VALUE_FOR_VAL_FOUND    0xB91E0103   /* No value for variable after = found                */
#define E_COPA_NO_MATCHING_QUOTE         0xB91E0104   /* No Matching \" or' found                           */
#define E_COPA_INVALID_HEXNUMBER         0xB91E0105   /* No valid Hex Number after $                        */
#define E_COPA_NO_TWO_BYTE_HEXNUMBER     0xB91E0106   /* not all hex codes are two byte                     */
#define E_COPA_NO_VALUES_IN_LIST         0xB91E0107   /* No Value in List found                             */
#define E_COPA_SECOND_CHAR_NO_HEX        0xB91E0108   /* second char after $ is no valid hex value          */
#define E_COPA_LIST_NOT_IN_FILE          0xB91E0109   /* One of the list elements it not in the config file */
#define E_COPA_FILE_NOT_IN_LIST          0xB91E0110   /* One of the config file elements it not in the list */
#define E_COPA_VALUE_NOT_BOOL            0xB91E0111   /* Value is not a Boolean value                       */
#define E_COPA_INVALID_INTEGER           0xB91E0112   /* Value is not an Integer number                     */
#define E_COPA_NON_PRINTABLE_CHAR        0xB91E0113   /* Char in String is non printable                    */
#define E_COPA_LONG_DOESNT_FIT_IN_INT    0xB91E0114   /* strol returns long, the result does not fit in int */
#define E_COPA_OUT_OF_RANGE              0xB91E0115   /* strol returns variable is out of range             */
#define E_CXI_API                        0xB920       /* CryptoServer Core API Cxi                          */
#define E_CXI_API_ALLOC                  0xB9200001   /* memory allocation failed                           */
#define E_CXI_API_PARAM                  0xB9200002   /* invalid parameter                                  */
#define E_CXI_API_PARAM_LEN              0xB9200003   /* invalid parameter length                           */
#define E_CXI_API_PARAM_RANGE            0xB9200004   /* parameter out of range                             */
#define E_CXI_API_BUF_SIZE               0xB9200005   /* buffer size too small                              */
#define E_CXI_API_ANSW_LEN               0xB9200006   /* invalid answer length                              */
#define E_CXI_API_ANSW_DATA              0xB9200007   /* invalid format of answer data                      */
#define E_CXI_API_STRING_TERM            0xB9200008   /* unterminated string                                */
#define E_CXI_API_STRING_CONV            0xB9200009   /* string conversion failed                           */
#define E_CXI_API_NOT_FOUND              0xB920000A   /* object/item not found                              */
#define E_CXI_API_COMPARE                0xB920000B   /* compare failed                                     */
#define E_CXI_API_ALGO                   0xB920000C   /* invalid algorithm                                  */
#define E_CXI_API_STATE                  0xB920000D   /* invalid state                                      */
#define E_CXI_API_FILE                   0xB920000E   /* file error                                         */
#define E_CXI_API_USER_NOT_FOUND         0xB920000F   /* user does not exist                                */
#define E_CXI_API_NOT_SUPPORTED          0xB9200010   /* operation not supported                            */
#define E_CXI_API_INVALID_KEY            0xB9200011   /* invalid key                                        */
#define E_CXI_API_IO                     0xB9200012   /* I/O error                                          */
#define E_CXI_API_LOG                    0xB9200013   /* log access error                                   */
#define E_CXI_API_DB                     0xB9200014   /* database access error                              */
#define E_CXI_API_ASN1_FORMAT            0xB9200015   /* invalid ASN.1 format                               */
#define E_CXI_API_MEM_CORR               0xB9200016   /* memory corruption                                  */
#define E_CXI_API_MECHS_LENGTH           0xB9200017   /* invalid number of mechs                            */
#define E_CXI_API_SYSTEM                 0xB9201      /* system error                                       */
#define E_OSTESTTOOL                     0xB921       /* OS test tool                                       */
#define E_OSTESTTOOL_MALLOC              0xB9210001   /* memory allocation failed                           */
#define E_OSTESTTOOL_INVALID_PARAM       0xB9210002   /* invalid parameter                                  */
#define E_OSTESTTOOL_ANSW_LEN            0xB9210003   /* invalid length of answer data                      */
#define E_OSTESTTOOL_ERROR_EXPECTED      0xB9210004   /* actual error doesn't match expected error          */
#define E_OSTESTTOOL_DATA_COMPARE        0xB9210005   /* data compare error                                 */
#define E_OSTESTTOOL_FILE                0xB9210006   /* file error                                         */
#define E_OSTESTTOOL_RANGE               0xB9210007   /* value exceeds expected range                       */
#define E_JCSA                           0xB980       /* java CryptoServer API                              */
#define E_JCSA_TERM                      0xB9800001   /* Connection terminated by remote host               */
#define E_JCSA_BLK_LEN                   0xB9800002   /* Bad block length received                          */
#define E_JCSA_BAD_ANSW                  0xB9800003   /* Bad answer length                                  */
#define E_JCSA_BAD_TAG                   0xB9800004   /* Bad tag of answer block                            */
#define E_JCSA_AUTH_MAX                  0xB9800005   /* Too many authentications                           */
#define E_JCSA_PWD_LEN                   0xB9800006   /* Bad length of password                             */
#define E_JCSA_TRANS_NAME                0xB9800007   /* Can't translate user name                          */
#define E_JCSA_JCE_ALGO                  0xB9800008   /* Hash algo not available                            */
#define E_JCSA_GET_CH                    0xB9800009   /* Could not get challenge                            */
#define E_JCSA_JCE_PROV                  0xB980000A   /* JCE Provider not found                             */
#define E_JCSA_JCE_KEY                   0xB980000B   /* JCE Key Exception (Jurisdiction files installed?)  */
#define E_JCSA_JCE_EXC                   0xB980000C   /* JCE Exception                                      */
#define E_JCSA_SM_FAIL                   0xB980000D   /* Secure Messaging failed                            */
#define E_JCSA_SM_MODE                   0xB980000E   /* Unknown SM mode                                    */
#define E_JCSA_SK_DEC                    0xB980000F   /* Bad session key decryption                         */
#define E_JCSA_JNI_ERR                   0xB9800010   /* JNI Interface Error                                */
#define E_JCSA_BAD_PARA                  0xB9800011   /* Bad parameter                                      */
#define E_JCSA_NO_AUTH                   0xB9800012   /* Missung authentication                             */
#define E_JCSA_CHARSET                   0xB9800013   /* Unsupported encoding                               */
#define E_JCSA_DATALEN                   0xB9800014   /* Invalid data length                                */
#define E_JCSA_KEY_DECRYPT               0xB9800015   /* Can't decrypt key file                             */
#define E_JCSA_IO                        0xB9800016   /* I/O Error                                          */
#define E_JCSA_NO_DEV                    0xB9800017   /* No device specified                                */
#define E_JCSA_AUTH_MECH                 0xB9800018   /* Invalid authentication mechanism                   */
#define E_JCSA_CLUSTER                   0xB980002    /* CryptoServer Cluster API                           */
#define E_JCSA_CLUSTER_OPEN              0xB9800021   /* Unable to open any CryptoServer                    */
#define E_JCSA_CLUSTER_LOGON             0xB9800022   /* Unable to logon to any CryptoServer                */
#define E_JCSA_CLUSTER_EXEC              0xB9800023   /* Unable to execute command on any CryptoServer      */
#define E_JCSA_KEY                       0xB98001     /* RSA Key class                                      */
#define E_JCSA_KEY_BAD_FILE              0xB9800101   /* Malformed RSA Key file                             */
#define E_JCSA_KEY_DEC                   0xB9800102   /* Decryption failed                                  */
#define E_JCSA_SMC                       0xB98002     /* CryptoServer Smartcard API                         */
#define E_JCSA_SMC_STATUS                0xB9800200   /* Smartcard returned error status                    */
#define E_JCSA_SMC_PADDING               0xB9800201   /* bad padding                                        */
#define E_JCSA_SMC_SPEC                  0xB9800202   /* invalid specifier                                  */
#define E_JCSA_DB                        0xB98003     /* CryptoServer Database API                          */
#define E_JCSA_DB_JNI_ERR                0xB9800300   /* JNI Interface Error                                */
#define E_JCXI                           0xB981       /* Java CryptoServer API CXI                          */
#define E_JCXI_PARAM                     0xB9810000   /* invalid parameter                                  */
#define E_JCXI_BAD_NAME                  0xB9810001   /* bad key name                                       */
#define E_JCXI_NAME_REQ                  0xB9810002   /* key name required for internal storage             */
#define E_JCXI_CHARSET                   0xB9810003   /* internal charset converting error                  */
#define E_JCXI_BAD_KTOK                  0xB9810004   /* bad key token                                      */
#define E_JCXI_BAD_ANSW                  0xB9810005   /* malformed answer block of CryptoServer             */
#define E_JCXI_KEY_ATTR                  0xB9810006   /* bad key attributes from CryptoServer               */
#define E_JCXI_BAD_ALGO                  0xB9810007   /* bad algorithm                                      */
#define E_JCXI_USER_NAME                 0xB9810008   /* bad user name                                      */
#define E_JCXI_NO_DEVICE                 0xB9810009   /* missing device entry                               */
#define E_JCXI_NO_KEY_COMP               0xB981000A   /* key component not found                            */
#define E_JCXI_NO_KEY                    0xB981000B   /* key not found                                      */
#define E_JCXI_CSA_VERSION               0xB981000C   /* version of CryptoServerAPI too small               */
#define E_JCXI_NO_EC_PARAM               0xB981000D   /* no EC parameter data available                     */
#define E_JCXI_NO_IV_OUT                 0xB981000E   /* no output IV available                             */
#define E_JCXI_FW_VER                    0xB981000F   /* firmware version too small                         */
#define E_JCXI_ASN1_DECODE               0xB9810010   /* ASN.1 decoding error                               */
#define E_JCXI_AES_DECRYPT               0xB9810011   /* JCE AES decrypt error                              */
#define E_JCXI_ECC_PARAM                 0xB9810020   /* bad ECC parameter                                  */
#define E_JCXI_CONFIG                    0xB9810030   /* config item missing                                */
#define E_JCXI_DATA_LENGTH               0xB9810040   /* invalid data length                                */
#define E_JCXI_MECHS_LENGTH              0xB9810050   /* invalid number of mechs                            */
#define E_JSDB                           0xB982       /* Database API Java                                  */
#define E_JSDB_JNI_ERR                   0xB9820000   /* JNI Interface Error                                */
#define E_JPPA                           0xB983       /* PinPad API Java                                    */
#define E_JPPA_JNI_ERR                   0xB9830000   /* JNI Interface Error                                */
#define E_JPPA_SPEC                      0xB9830001   /* invalid specifier                                  */
#define E_JCE                            0xB984       /* JCA/JCE provider                                   */
#define E_JCE_MISSING_KEYSTOREPATH       0xB9840002   /* KeyStorePath                                       */
#define E_CSAN                           0xB985       /* CryptoServerAPI.NET                                */
#define E_CSAN_PARAM                     0xB9850001   /* Invalid parameter                                  */
#define E_CSAN_AUTH_MECH                 0xB9850002   /* Invalid authentication mechanism                   */
#define E_CSAN_CLUSTER                   0xB985002    /* CryptoServer Cluster API                           */
#define E_CSAN_CLUSTER_OPEN              0xB9850021   /* Unable to open any CryptoServer                    */
#define E_CSAN_CLUSTER_LOGON             0xB9850022   /* Unable to logon to any CryptoServer                */
#define E_CSAN_CLUSTER_EXEC              0xB9850023   /* Unable to execute command on any CryptoServer      */
#define E_CXIN                           0xB986       /* CryptoServer API CXI.NET                           */
#define E_CXIN_PARAM                     0xB9860000   /* invalid parameter                                  */
#define E_CXIN_MALLOC                    0xB9860001   /* memory allocation failed                           */
#define E_CXIN_STATE                     0xB9860002   /* invalid state                                      */
#define E_CXIN_BAD_ANSW                  0xB9860005   /* malformed answer block of CryptoServer             */
#define E_CXIN_NO_KEY                    0xB986000B   /* key not found                                      */
#define E_CXIN_NO_IV_OUT                 0xB986000E   /* no output IV available                             */
#define E_CXIN_CONFIG                    0xB9860030   /* config item missing                                */
