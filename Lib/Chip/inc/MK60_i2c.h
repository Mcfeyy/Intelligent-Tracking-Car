/*!
 * @file       MK60_i2c.h
 * @brief      i2c����ͷ�ļ�
 */

#ifndef     __MK60_I2C_H__
#define     __MK60_I2C_H__
/**
 *  @brief I2Cģ����
 */
typedef enum I2Cn
{
    I2C0  = 0,
    I2C1  = 1
} I2Cn_e;

/**
 *  @brief ������дģʽѡ��
 */
typedef enum MSmode
{
    MWSR =   0x00,  /* ����дģʽ  */
    MRSW =   0x01   /* ������ģʽ  */
} MSmode;


uint32  i2c_init(I2Cn_e i2cn, uint32 baud);                               //��ʼ��I2C
void    i2c_write_reg(I2Cn_e, uint8 SlaveID, uint8 reg, uint8 Data);      //����ַ���д����
uint8   i2c_read_reg (I2Cn_e, uint8 SlaveID, uint8 reg);                  //�ӵ�ַ���ȡ����

#endif  //__MK60_I2C_H__