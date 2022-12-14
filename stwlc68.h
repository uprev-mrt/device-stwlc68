/**
  * @file stwlc68.h
  * @author generated by mrt-device utility 
  * @link [https://github.com/uprev-mrt/mrtutils/wiki/mrt-device]
  * @brief Device driver for stwlc68 device
  *
  *
  */

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include <stdbool.h>
#include "Devices/RegDevice/register_device.h"
#include "stwlc68_regs.h"

/*user-block-top-start*/
/*user-block-top-end*/


/*******************************************************************************
  Sruct                                                                                
*******************************************************************************/

typedef struct{
    mrt_regdev_t mRegDev;            //ptr to base register-device 
    mrt_reg_t mChipId;               //Chip Identifier
    mrt_reg_t mChipRev;              //Chip Revision
    mrt_reg_t mRomId;                //ROM Identifier
    mrt_reg_t mCfgId;                //OTP memory configuration ID
    mrt_reg_t mTrimId;               //Production trimming version ID
    mrt_reg_t mPatchId;              //OTP patch version ID
    mrt_reg_t mIntEn;                //Int En
    mrt_reg_t mIntClr;               //Int Clr
    mrt_reg_t mIntLatch;             //Int Latch
    mrt_reg_t mIntSta;               //Int Sta
    mrt_reg_t mOtpLatch;             //OTP Latch
    mrt_reg_t mOvpLatch;             //OVP Latch
    mrt_reg_t mOcpLatch;             //OCP Latch
    mrt_reg_t mSysErr0;              //SYS Err0
    mrt_reg_t mSysErr1;              //SYS Err1
    mrt_reg_t mSysErr2;              //SYS Err2
    mrt_reg_t mDirCmd;               //Dir Cmd
    mrt_reg_t mAcFreq;               //Rectifier Operating Frequency (in kHz)
    mrt_reg_t mSStrTx;               //Signal Strength Level sent to transmitter
    mrt_reg_t mVoutSet;              //Output Voltage setting 25 mV to 22 V (25 mV/step)
    mrt_reg_t mVthAoe;               //Voltage threshold for Automatic Output Enable 240 mV to 1049 mV (16 mV/step)
    mrt_reg_t mLcrThr;               //Normal-Current Range (NCR) to Low-Current Range (LCR) threshold (4 mA/step)
    mrt_reg_t mLcrHyst;              //Low-Current Range (LCR) to Normal-Current Range (NCR) hysteresis (4 mA/step)
    mrt_reg_t mModCfg;               //Mod Cfg
    mrt_reg_t mIdmylSet;             //IDMYL Set
    mrt_reg_t mVrectMin;             //VRECT Min
    mrt_reg_t mVdropV0;              //Linear regulator target drop-out voltage setpoint 0
    mrt_reg_t mVdropV1;              //Linear regulator target drop-out voltage setpoint 1
    mrt_reg_t mVdropV2;              //Linear regulator target drop-out voltage setpoint 2
    mrt_reg_t mVdropV3;              //Linear regulator target drop-out voltage setpoint 3
    mrt_reg_t mVdropC1;              //Linear regulator target drop-out voltage current threshold 1
    mrt_reg_t mVdropC2;              //Linear regulator target drop-out voltage current threshold 2
    mrt_reg_t mVdropC3;              //Linear regulator target drop-out voltage current threshold 3
    mrt_reg_t mMsgTx0;               //Message packet content to be sent to transmitter via ASK modulation (see DIR_CMG register)
    mrt_reg_t mMsgTx1;               //Message packet content to be sent to transmitter via ASK modulation (see DIR_CMG register)
    mrt_reg_t mMsgTx2;               //Message packet content to be sent to transmitter via ASK modulation (see DIR_CMG register)
    mrt_reg_t mMsgTx3;               //Message packet content to be sent to transmitter via ASK modulation (see DIR_CMG register)
    mrt_reg_t mMsgTx4;               //Message packet content to be sent to transmitter via ASK modulation (see DIR_CMG register)
    mrt_reg_t mMsgTx5;               //Message packet content to be sent to transmitter via ASK modulation (see DIR_CMG register)
    mrt_reg_t mMsgTx6;               //Message packet content to be sent to transmitter via ASK modulation (see DIR_CMG register)
    mrt_reg_t mMsgTx7;               //Message packet content to be sent to transmitter via ASK modulation (see DIR_CMG register)
    mrt_reg_t mMsgTx8;               //Message packet content to be sent to transmitter via ASK modulation (see DIR_CMG register)
    mrt_reg_t mEptMsg;               //EPT Message (root cause event) added to EPT packet (see DIR_CMD register)
    mrt_reg_t mFodCtc;               //FOD Current Threshold Calibration
    mrt_reg_t mFodGsc;               //FOD Gain Scaler Calibration
    mrt_reg_t mFodOlc;               //FOD Offset Level Calibration
    mrt_reg_t mFodDcr;               //Coil DC-Resistance for FOD calculation
    mrt_reg_t mVrectRe;              //Voltage Regulation Error (difference in mV) between actual and target VRECT used to calculate CEP for 0x0091 the transmitter
    mrt_reg_t mRppTx;                //Received Power (comprehensive of losses) level Packet sent to transmitter
    mrt_reg_t mSsMinTx;              //Minimum Signal-Strength level for proceeding to PING phase
    mrt_reg_t mCsOffs;               //Current sensor offset adjustment (in mA)
    mrt_reg_t mIdleCc;               //Chip idle current consumption (in mA)
    mrt_reg_t mPmaxPtc;              //Maximum power capability established during Power Transfer Contract
    mrt_reg_t mTrectOtp;             //Over-Temperature detection Threshold related to Rectifier Temperature sensor
    mrt_reg_t mTlrOtp;               //Over-Temperature detection Threshold related to main Linear Regulator Temperature sensor
    mrt_reg_t mVntcOtp;              //Over-Temperature detection Threshold related to external NTC pin
    mrt_reg_t mVrectOvp;             //VRECT Over-Voltage detection Threshold (Adjustable OVP-Clamper)
    mrt_reg_t mIrectOcp;             //IRECT Over-Current detection Threshold
    mrt_reg_t mProtEn0;              //Prot En
    mrt_reg_t mProtEn1;              //Prot En
    mrt_reg_t mProtEn2;              //Prot En
    mrt_reg_t mProtEpt0;             //Prot Ept
    mrt_reg_t mProtEpt1;             //Prot Ept
    mrt_reg_t mProtEpt2;             //Prot Ept
    mrt_reg_t mProtOd0;              //Prot Ed
    mrt_reg_t mProtOd1;              //Prot Ed
    mrt_reg_t mProtOd2;              //Prot Ed
    mrt_reg_t mMfrId1;               //Manufacturer ID (MSByte)
    mrt_reg_t mMfrId0;               //Manufacturer ID (LSByte)
    mrt_reg_t mBdevId3;              //Basic Device ID (MSByte)
    mrt_reg_t mBdevId2;              //Basic Device ID
    mrt_reg_t mBdevId1;              //Basic Device ID
    mrt_reg_t mBdevId0;              //Basic Device ID (LSByte)
    mrt_reg_t mXdevId7;              //Extended Device ID (MSByte)
    mrt_reg_t mXdevId6;              //Extended Device ID
    mrt_reg_t mXdevId5;              //Extended Device ID
    mrt_reg_t mXdevId4;              //Extended Device ID
    mrt_reg_t mXdevId3;              //Extended Device ID
    mrt_reg_t mXdevId2;              //Extended Device ID
    mrt_reg_t mXdevId1;              //Extended Device ID
    mrt_reg_t mXdevId0;              //Extended Device ID (LSByte)
    mrt_reg_t mGpio0Fs;              //GPIO0 pin Function Selector
    mrt_reg_t mGpio1Fs;              //GPIO1 pin Function Selector
    mrt_reg_t mGpio2Fs;              //GPIO2 pin Function Selector
    mrt_reg_t mGpio3Fs;              //GPIO3 pin Function Selector
    mrt_reg_t mGpio4Fs;              //GPIO4 pin Function Selector
    mrt_reg_t mGpio5Fs;              //GPIO5 pin Function Selector
    mrt_reg_t mGpio6Fs;              //GPIO6 (INT pin) pin Function Selector
    mrt_reg_t mVrectAdc;             //VRECT voltage ADC reading (in mV)
    mrt_reg_t mVoutAdc;              //VOUT voltage ADC reading (in mV)
    mrt_reg_t mIrectAdc;             //IRECT current ADC reading (in mA)
    mrt_reg_t mTrectAdc;             //Rectifier Temperature sensor ADC reading (in ??C)
    mrt_reg_t mTlrAdc;               //Main Linear Regulator Temperature sensor ADC reading (in ??C)
    mrt_reg_t mVntcAdc;              //External NTC pin Voltage ADC reading (in mV)
/*user-block-struct-start*/
/*user-block-struct-end*/
}stwlc68_t;

/**
 * @brief initializes stwlc68 device for i2c bus
 * @param dev ptr to stwlc68 device
 * @param i2c handle for i2c bus
 */
mrt_status_t stw_init_i2c(stwlc68_t* dev, mrt_i2c_handle_t i2c);

/**
  *@brief tests interface with device
  *@param dev ptr to stwlc68 device
  *@return MRT_STATUS_OK if test is passed 
  *@return MRT_STATUS_ERROR if test fails
  */
mrt_status_t stw_test(stwlc68_t* dev);

/**
  *@brief writes register of device
  *@param dev ptr to stwlc68 device
  *@param reg ptr to register definition
  *@param data data to be write
  *@return status (type defined by platform)
  */
#define stw_write_reg(dev, reg, data) regdev_write_reg(&(dev)->mRegDev, (reg), (data))

/**
  *@brief reads register of device
  *@param dev ptr to stwlc68 device
  *@param reg ptr to register definition
  *@param data ptr to store data
  *@return value of register
  */
#define stw_read_reg(dev, reg) regdev_read_reg(&(dev)->mRegDev, (reg))


/*user-block-bottom-start*/
/*user-block-bottom-end*/

#ifdef __cplusplus
}
#endif