/**************************************************************
CAUTION : This file is Auto Generated by VBA based on *.xls.
          So, don't modify this file manually!
***************************************************************/
#ifndef  V711_UDP_IOS_PD_SAVE_H_
#define  V711_UDP_IOS_PD_SAVE_H_

/*���������ܽŸ��ù�ϵ���ڲ��������Լ���������*/
#define  V711_UDP_IOS_PD_CONFIG_SAVE \
do{\
\
/*����NANDFLASH(14��PIN)*/\
\
/*����BOOT_MODE,JTAG_MODE(6��PIN��*/\
    /*antpa_sel[17]�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_AF_CTRL1);\
    add_ios_list(IOS_PD_IOM_CTRL15);\
    /*antpa_sel[17]�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL15);\
\
    /*antpa_sel[18]�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_AF_CTRL1);\
    add_ios_list(IOS_PD_IOM_CTRL16);\
    /*antpa_sel[18]�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL16);\
\
    /*antpa_sel[19]�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_AF_CTRL1);\
    add_ios_list(IOS_PD_IOM_CTRL17);\
    /*antpa_sel[19]�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL17);\
\
    /*antpa_sel[20]�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_AF_CTRL1);\
    add_ios_list(IOS_PD_IOM_CTRL18);\
    /*antpa_sel[20]�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL18);\
\
    /*antpa_sel[21]�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_AF_CTRL1);\
    add_ios_list(IOS_PD_IOM_CTRL19);\
    /*antpa_sel[21]�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL19);\
\
\
/*����MMC1(6��PIN��*/\
    /*jtag1_rtck�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL1);\
    add_ios_list(IOS_PD_AF_CTRL3);\
    add_ios_list(IOS_PD_IOM_CTRL21);\
    /*jtag1_rtck�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL21);\
\
    /*jtag1_tck�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL1);\
    add_ios_list(IOS_PD_AF_CTRL3);\
    add_ios_list(IOS_PD_IOM_CTRL22);\
    /*jtag1_tck�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL22);\
\
    /*jtag1_trst_n�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL1);\
    add_ios_list(IOS_PD_AF_CTRL3);\
\
    /*jtag1_tms�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL1);\
    add_ios_list(IOS_PD_AF_CTRL3);\
    add_ios_list(IOS_PD_IOM_CTRL24);\
\
    /*jtag1_tdi�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL1);\
    add_ios_list(IOS_PD_AF_CTRL3);\
    add_ios_list(IOS_PD_IOM_CTRL25);\
\
    /*jtag1_tdo�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL1);\
    add_ios_list(IOS_PD_AF_CTRL3);\
    /*jtag1_tdo�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL26);\
\
\
/*����JTAG0��6��PIN��*/\
\
/*����GPIO/GSBI_0(20PIN��*/\
    /*uart2_txd�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL2);\
    add_ios_list(IOS_PD_AF_CTRL4);\
    add_ios_list(IOS_PD_IOM_CTRL30);\
    /*uart2_txd�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL30);\
\
    /*uart2_rxd�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL2);\
    add_ios_list(IOS_PD_AF_CTRL4);\
    add_ios_list(IOS_PD_IOM_CTRL31);\
    /*uart2_rxd�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL31);\
\
    /*uart1_txd�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL2);\
    add_ios_list(IOS_PD_AF_CTRL4);\
    add_ios_list(IOS_PD_IOM_CTRL32);\
    /*uart1_txd�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL32);\
\
    /*uart1_rxd�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL2);\
    add_ios_list(IOS_PD_AF_CTRL4);\
    add_ios_list(IOS_PD_IOM_CTRL33);\
    /*uart1_rxd�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL33);\
\
    /*hs_uart_rts_n�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL2);\
    add_ios_list(IOS_PD_AF_CTRL5);\
    add_ios_list(IOS_PD_IOM_CTRL34);\
    /*hs_uart_rts_n�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL34);\
\
    /*hs_uart_cts_n�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL2);\
    add_ios_list(IOS_PD_AF_CTRL5);\
    add_ios_list(IOS_PD_IOM_CTRL35);\
    /*hs_uart_cts_n�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL35);\
\
    /*hs_uart_txd�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL2);\
    add_ios_list(IOS_PD_AF_CTRL5);\
    add_ios_list(IOS_PD_IOM_CTRL36);\
    /*hs_uart_txd�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL36);\
\
    /*hs_uart_rxd�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL2);\
    add_ios_list(IOS_PD_AF_CTRL5);\
    add_ios_list(IOS_PD_IOM_CTRL37);\
    /*hs_uart_rxd�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL37);\
\
    /*i2c0_sda�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL2);\
    add_ios_list(IOS_PD_AF_CTRL4);\
    /*i2c0_sda�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL38);\
\
    /*i2c0_scl�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL2);\
    add_ios_list(IOS_PD_AF_CTRL4);\
    /*i2c0_scl�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL39);\
\
    /*zclk�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL2);\
    add_ios_list(IOS_PD_AF_CTRL4);\
    add_ios_list(IOS_PD_IOM_CTRL40);\
    /*zclk�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL40);\
\
    /*zsync�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL2);\
    add_ios_list(IOS_PD_AF_CTRL4);\
    add_ios_list(IOS_PD_IOM_CTRL41);\
    /*zsync�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL41);\
\
    /*zmosi�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL2);\
    add_ios_list(IOS_PD_AF_CTRL4);\
    add_ios_list(IOS_PD_IOM_CTRL42);\
    /*zmosi�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL42);\
\
    /*zmiso�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL2);\
    add_ios_list(IOS_PD_AF_CTRL4);\
    add_ios_list(IOS_PD_IOM_CTRL43);\
\
    /*uart3_txd�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL2);\
    add_ios_list(IOS_PD_AF_CTRL4);\
    add_ios_list(IOS_PD_IOM_CTRL46);\
    /*uart3_txd�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL46);\
\
    /*uart3_rxd�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL2);\
    add_ios_list(IOS_PD_AF_CTRL4);\
    add_ios_list(IOS_PD_IOM_CTRL47);\
    /*uart3_rxd�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL47);\
\
\
/*����GPIO/GSBI_1(7PIN��*/\
    /*pcie_perst_n�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL3);\
    add_ios_list(IOS_PD_AF_CTRL7);\
    /*pcie_perst_n�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL52);\
\
    /*pcie_clkreq_n�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL3);\
    add_ios_list(IOS_PD_AF_CTRL7);\
    /*pcie_clkreq_n�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL53);\
\
\
/*����RF�߿أ�CH0 FEM(7PIN��*/\
    /*ch0_apt_pdm�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL4);\
    add_ios_list(IOS_PD_AF_CTRL8);\
    add_ios_list(IOS_PD_IOM_CTRL58);\
    /*ch0_apt_pdm�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL58);\
\
    /*ch0_mipi_clk�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL4);\
    add_ios_list(IOS_PD_AF_CTRL8);\
    add_ios_list(IOS_PD_IOM_CTRL59);\
    /*ch0_mipi_clk�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL59);\
\
    /*ch0_mipi_data�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL4);\
    add_ios_list(IOS_PD_AF_CTRL8);\
\
\
/*����RF�߿أ�FEM(17��PIN��*/\
    /*antpa_sel[0]�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL5);\
    add_ios_list(IOS_PD_AF_CTRL10);\
    add_ios_list(IOS_PD_IOM_CTRL62);\
    /*antpa_sel[0]�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL62);\
\
    /*antpa_sel[1]�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL5);\
    add_ios_list(IOS_PD_AF_CTRL10);\
    add_ios_list(IOS_PD_IOM_CTRL63);\
    /*antpa_sel[1]�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL63);\
\
    /*antpa_sel[2]�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL5);\
    add_ios_list(IOS_PD_AF_CTRL10);\
    add_ios_list(IOS_PD_IOM_CTRL64);\
    /*antpa_sel[2]�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL64);\
\
    /*antpa_sel[3]�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL5);\
    add_ios_list(IOS_PD_AF_CTRL10);\
    add_ios_list(IOS_PD_IOM_CTRL65);\
    /*antpa_sel[3]�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL65);\
\
    /*antpa_sel[4]�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL5);\
    add_ios_list(IOS_PD_AF_CTRL10);\
    add_ios_list(IOS_PD_IOM_CTRL66);\
    /*antpa_sel[4]�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL66);\
\
    /*antpa_sel[5]�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL5);\
    add_ios_list(IOS_PD_AF_CTRL10);\
    add_ios_list(IOS_PD_IOM_CTRL67);\
    /*antpa_sel[5]�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL67);\
\
    /*antpa_sel[6]�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL5);\
    add_ios_list(IOS_PD_AF_CTRL10);\
    add_ios_list(IOS_PD_IOM_CTRL68);\
    /*antpa_sel[6]�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL68);\
\
    /*antpa_sel[7]�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL5);\
    add_ios_list(IOS_PD_AF_CTRL10);\
    add_ios_list(IOS_PD_IOM_CTRL69);\
    /*antpa_sel[7]�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL69);\
\
    /*antpa_sel[8]�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL5);\
    add_ios_list(IOS_PD_AF_CTRL10);\
    add_ios_list(IOS_PD_IOM_CTRL70);\
    /*antpa_sel[8]�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL70);\
\
    /*antpa_sel[9]�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL5);\
    add_ios_list(IOS_PD_AF_CTRL10);\
    add_ios_list(IOS_PD_IOM_CTRL71);\
    /*antpa_sel[9]�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL71);\
\
    /*antpa_sel[10]�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL5);\
    add_ios_list(IOS_PD_AF_CTRL10);\
    add_ios_list(IOS_PD_IOM_CTRL72);\
    /*antpa_sel[10]�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL72);\
\
    /*antpa_sel[11]�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL5);\
    add_ios_list(IOS_PD_AF_CTRL10);\
    add_ios_list(IOS_PD_IOM_CTRL73);\
    /*antpa_sel[11]�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL73);\
\
    /*antpa_sel[12]�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL5);\
    add_ios_list(IOS_PD_AF_CTRL10);\
    add_ios_list(IOS_PD_IOM_CTRL74);\
    /*antpa_sel[12]�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL74);\
\
    /*antpa_sel[13]�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL5);\
    add_ios_list(IOS_PD_AF_CTRL10);\
    add_ios_list(IOS_PD_IOM_CTRL75);\
    /*antpa_sel[13]�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL75);\
\
    /*antpa_sel[14]�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL5);\
    add_ios_list(IOS_PD_AF_CTRL10);\
    add_ios_list(IOS_PD_IOM_CTRL76);\
    /*antpa_sel[14]�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL76);\
\
    /*antpa_sel[15]�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL5);\
    add_ios_list(IOS_PD_AF_CTRL10);\
    add_ios_list(IOS_PD_IOM_CTRL77);\
    /*antpa_sel[15]�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL77);\
\
    /*antpa_sel[16]�ܽŸ������ñ���*/\
    add_ios_list(IOS_PD_MF_CTRL5);\
    add_ios_list(IOS_PD_AF_CTRL10);\
    add_ios_list(IOS_PD_IOM_CTRL78);\
    /*antpa_sel[16]�ܽ����������ñ���*/\
    add_ios_list(IOS_PD_IOM_CTRL78);\
\
\
/*����ABB�źţ�18��PIN��*/\
\
/*����LPDDR2�źţ�61��PIN�� CA�źţ�16��PIN��*/\
\
\
/*����LPDDR2�źţ�61��PIN�� DQ�źţ�45��PIN��*/\
\
\
/*����LPDDR2 KGD�źţ�1��PIN��*/\
\
/*����PCIE��7��PIN��*/\
\
/*����PCIE ���ʱ�ӣ�2��PIN��*/\
\
/*����HSIC��2��PIN��*/\
\
}while(0)

/*�ܽ����ú�for drv*/
#define  V711_UDP_IOS_CONFIG_SAVE \
do{\
     V711_UDP_IOS_AO_CONFIG_SAVE;\
     V711_UDP_IOS_PD_CONFIG_SAVE;\
}while(0)

#endif
