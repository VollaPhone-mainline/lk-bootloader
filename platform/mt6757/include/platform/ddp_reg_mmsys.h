/* Copyright Statement:
*
* This software/firmware and related documentation ("MediaTek Software") are
* protected under relevant copyright laws. The information contained herein
* is confidential and proprietary to MediaTek Inc. and/or its licensors.
* Without the prior written permission of MediaTek inc. and/or its licensors,
* any reproduction, modification, use or disclosure of MediaTek Software,
* and information contained herein, in whole or in part, shall be strictly prohibited.
*/
/* MediaTek Inc. (C) 2015. All rights reserved.
*
* BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
* THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
* RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
* AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
* NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
* SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
* SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
* THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
* THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
* CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
* SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
* STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
* CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
* AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
* OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
* MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*/

#ifndef _DDP_REG_MMSYS_H_
#define _DDP_REG_MMSYS_H_

/* field definition */
/* ------------------------------------------------------------- */
/* Config */
#define DISP_REG_CONFIG_MMSYS_INTEN			(DISPSYS_CONFIG_BASE + 0x0)
#define DISP_REG_CONFIG_MMSYS_INTSTA			(DISPSYS_CONFIG_BASE + 0x4)
#define DISP_REG_CONFIG_MFG_APB_TX_CON			(DISPSYS_CONFIG_BASE + 0xc)
#define DISP_REG_CONFIG_MMSYS_MOUT_RST			(DISPSYS_CONFIG_BASE + 0x048)

#define DISP_REG_CONFIG_MMSYS_MISC			(DISPSYS_CONFIG_BASE + 0x0F0)
#define DISP_REG_CONFIG_MMSYS_SMI_LARB_SEL		(DISPSYS_CONFIG_BASE + 0x0F4)
#define DISP_REG_CONFIG_MMSYS_SODI_REQ_MASK		(DISPSYS_CONFIG_BASE + 0x0F8)
#define DISP_REG_CONFIG_MMSYS_CG_CON0			(DISPSYS_CONFIG_BASE + 0x100)
#define DISP_REG_CONFIG_MMSYS_CG_SET0			(DISPSYS_CONFIG_BASE + 0x104)
#define DISP_REG_CONFIG_MMSYS_CG_CLR0			(DISPSYS_CONFIG_BASE + 0x108)
#define DISP_REG_CONFIG_MMSYS_CG_CON1			(DISPSYS_CONFIG_BASE + 0x110)
#define DISP_REG_CONFIG_MMSYS_CG_SET1			(DISPSYS_CONFIG_BASE + 0x114)
#define DISP_REG_CONFIG_MMSYS_CG_CLR1			(DISPSYS_CONFIG_BASE + 0x118)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_DIS0		(DISPSYS_CONFIG_BASE + 0x120)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_DIS_SET0		(DISPSYS_CONFIG_BASE + 0x124)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_DIS_CLR0		(DISPSYS_CONFIG_BASE + 0x128)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_DIS1		(DISPSYS_CONFIG_BASE + 0x130)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_DIS_SET1		(DISPSYS_CONFIG_BASE + 0x134)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_DIS_CLR1		(DISPSYS_CONFIG_BASE + 0x138)
#define DISP_REG_CONFIG_MMSYS_SW0_RST_B			(DISPSYS_CONFIG_BASE + 0x140)
#define DISP_REG_CONFIG_MMSYS_SW1_RST_B			(DISPSYS_CONFIG_BASE + 0x144)
#define DISP_REG_CONFIG_MMSYS_LCM_RST_B			(DISPSYS_CONFIG_BASE + 0x150)

#define DISP_REG_CONFIG_SMI_N21MUX_CFG_WR		(DISPSYS_CONFIG_BASE + 0x168)
#define DISP_REG_CONFIG_SMI_N21MUX_CFG_RD		(DISPSYS_CONFIG_BASE + 0x16c)
#define DISP_REG_CONFIG_ELA2GMC_BASE_ADDR		(DISPSYS_CONFIG_BASE + 0x170)
#define DISP_REG_CONFIG_ELA2GMC_BASE_ADDR_END		(DISPSYS_CONFIG_BASE + 0x174)
#define DISP_REG_CONFIG_ELA2GMC_FINAL_ADDR		(DISPSYS_CONFIG_BASE + 0x178)
#define DISP_REG_CONFIG_ELA2GMC_STATUS			(DISPSYS_CONFIG_BASE + 0x17c)
#define DISP_REG_CONFIG_LARB6_AXI_ASIF_CFG_WD		(DISPSYS_CONFIG_BASE + 0x180)
#define DISP_REG_CONFIG_LARB6_AXI_ASIF_CFG_RD		(DISPSYS_CONFIG_BASE + 0x184)
#define DISP_REG_CONFIG_PROC_TRACK_EMI_BUSY_CON		(DISPSYS_CONFIG_BASE + 0x190)

#define DISP_REG_CONFIG_DISP_FAKE_ENG_EN		(DISPSYS_CONFIG_BASE + 0x200)
#define DISP_REG_CONFIG_DISP_FAKE_ENG_RST		(DISPSYS_CONFIG_BASE + 0x204)
#define DISP_REG_CONFIG_DISP_FAKE_ENG_CON0		(DISPSYS_CONFIG_BASE + 0x208)
#define DISP_REG_CONFIG_DISP_FAKE_ENG_CON1		(DISPSYS_CONFIG_BASE + 0x20c)
#define DISP_REG_CONFIG_DISP_FAKE_ENG_RD_ADDR		(DISPSYS_CONFIG_BASE + 0x210)
#define DISP_REG_CONFIG_DISP_FAKE_ENG_WR_ADDR		(DISPSYS_CONFIG_BASE + 0x214)
#define DISP_REG_CONFIG_DISP_FAKE_ENG_STATE		(DISPSYS_CONFIG_BASE + 0x218)
#define DISP_REG_CONFIG_DISP_FAKE2_ENG_EN		(DISPSYS_CONFIG_BASE + 0x220)
#define DISP_REG_CONFIG_DISP_FAKE2_ENG_RST		(DISPSYS_CONFIG_BASE + 0x224)
#define DISP_REG_CONFIG_DISP_FAKE2_ENG_CON0		(DISPSYS_CONFIG_BASE + 0x228)
#define DISP_REG_CONFIG_DISP_FAKE2_ENG_CON1		(DISPSYS_CONFIG_BASE + 0x22c)
#define DISP_REG_CONFIG_DISP_FAKE2_ENG_RD_ADDR		(DISPSYS_CONFIG_BASE + 0x230)
#define DISP_REG_CONFIG_DISP_FAKE2_ENG_WR_ADDR		(DISPSYS_CONFIG_BASE + 0x234)
#define DISP_REG_CONFIG_DISP_FAKE2_ENG_STATE		(DISPSYS_CONFIG_BASE + 0x238)


#define DISP_REG_CONFIG_MMSYS_MBIST_CON			(DISPSYS_CONFIG_BASE + 0x800)
#define DISP_REG_CONFIG_MMSYS_MBIST_DONE		(DISPSYS_CONFIG_BASE + 0x804)
#define DISP_REG_CONFIG_MMSYS_MBIST_HOLDB		(DISPSYS_CONFIG_BASE + 0x808)
#define DISP_REG_CONFIG_MMSYS_MBIST_MODE		(DISPSYS_CONFIG_BASE + 0x80c)
#define DISP_REG_CONFIG_MMSYS_MBIST_FAIL0		(DISPSYS_CONFIG_BASE + 0x810)
#define DISP_REG_CONFIG_MMSYS_MBIST_FAIL1		(DISPSYS_CONFIG_BASE + 0x814)
#define DISP_REG_CONFIG_MMSYS_MBIST_FAIL2		(DISPSYS_CONFIG_BASE + 0x818)
#define DISP_REG_CONFIG_MMSYS_MBIST_FAIL3		(DISPSYS_CONFIG_BASE + 0x81c)
#define DISP_REG_CONFIG_MMSYS_MBIST_DEBUG		(DISPSYS_CONFIG_BASE + 0x820)
#define DISP_REG_CONFIG_MMSYS_MBIST_DIAG_SCANOUT	(DISPSYS_CONFIG_BASE + 0x824)
#define DISP_REG_CONFIG_MMSYS_MBIST_PRE_FUSE		(DISPSYS_CONFIG_BASE + 0x828)

#define DISP_REG_CONFIG_MMSYS_MBIST_BSEL0		(DISPSYS_CONFIG_BASE + 0x82c)
#define DISP_REG_CONFIG_MMSYS_MBIST_BSEL1		(DISPSYS_CONFIG_BASE + 0x830)
#define DISP_REG_CONFIG_MMSYS_MBIST_BSEL2		(DISPSYS_CONFIG_BASE + 0x834)
#define DISP_REG_CONFIG_MMSYS_MBIST_BSEL3		(DISPSYS_CONFIG_BASE + 0x838)
#define DISP_REG_CONFIG_MMSYS_MBIST_HDEN		(DISPSYS_CONFIG_BASE + 0x83C)

#define DISP_REG_CONFIG_MDP_RDMA0_MEM_DELSEL		(DISPSYS_CONFIG_BASE + 0x840)
#define DISP_REG_CONFIG_MDP_RDMA1_MEM_DELSEL		(DISPSYS_CONFIG_BASE + 0x844)
#define DISP_REG_CONFIG_MDP_RSZ_MEM_DELSEL		(DISPSYS_CONFIG_BASE + 0x848)

#define DISP_REG_CONFIG_MDP_TDSHP_MEM_DELSEL		(DISPSYS_CONFIG_BASE + 0x84c)
#define DISP_REG_CONFIG_MDP_WDMA_MEM_DELSEL		(DISPSYS_CONFIG_BASE + 0x850)
#define DISP_REG_CONFIG_MDP_WROT0_MEM_DELSEL		(DISPSYS_CONFIG_BASE + 0x854)
#define DISP_REG_CONFIG_MDP_WROT1_MEM_DELSEL		(DISPSYS_CONFIG_BASE + 0x858)

#define DISP_REG_CONFIG_DISP_OVL_MEM_DELSEL		(DISPSYS_CONFIG_BASE + 0x85c)
#define DISP_REG_CONFIG_DISP_OVL_2L_MEM_DELSEL		(DISPSYS_CONFIG_BASE + 0x860)
#define DISP_REG_CONFIG_DISP_RDMA_MEM_DELSEL		(DISPSYS_CONFIG_BASE + 0x864)
#define DISP_REG_CONFIG_DISP_WDMA0_MEM_DELSEL		(DISPSYS_CONFIG_BASE + 0x868)
#define DISP_REG_CONFIG_DISP_WDMA1_MEM_DELSEL		(DISPSYS_CONFIG_BASE + 0x86c)
#define DISP_REG_CONFIG_DISP_GAMMA_MEM_DELSEL		(DISPSYS_CONFIG_BASE + 0x870)
#define DISP_REG_CONFIG_DSI_MEM_DELSEL			(DISPSYS_CONFIG_BASE + 0x874)
#define DISP_REG_CONFIG_DISP_UFOE_MEM_DELSEL		(DISPSYS_CONFIG_BASE + 0x878)
#define DISP_REG_CONFIG_DISP_DSC_MEM_DELSEL		(DISPSYS_CONFIG_BASE + 0x87C)
#define DISP_REG_CONFIG_DISP_OD_MEM_DELSEL0		(DISPSYS_CONFIG_BASE + 0x880)
#define DISP_REG_CONFIG_DISP_OD_MEM_DELSEL1		(DISPSYS_CONFIG_BASE + 0x884)
#define DISP_REG_CONFIG_DISP_OD_MEM_DELSEL2		(DISPSYS_CONFIG_BASE + 0x888)

#define DISP_REG_CONFIG_MMSYS_DEBUG_OUT_SEL		(DISPSYS_CONFIG_BASE + 0x88C)
#define DISP_REG_CONFIG_MMSYS_MBIST_RP_RST_B		(DISPSYS_CONFIG_BASE + 0x890)
#define DISP_REG_CONFIG_MMSYS_MBIST_RP_FAIL0		(DISPSYS_CONFIG_BASE + 0x894)
#define DISP_REG_CONFIG_MMSYS_MBIST_RP_FAIL1		(DISPSYS_CONFIG_BASE + 0x898)
#define DISP_REG_CONFIG_MMSYS_MBIST_RP_OK0		(DISPSYS_CONFIG_BASE + 0x89c)
#define DISP_REG_CONFIG_MMSYS_MBIST_RP_OK1		(DISPSYS_CONFIG_BASE + 0x8A0)

#define DISP_REG_CONFIG_MMSYS_DUMMY0			(DISPSYS_CONFIG_BASE + 0x8A4)
#define DISP_REG_CONFIG_MMSYS_DUMMY1			(DISPSYS_CONFIG_BASE + 0x8A8)
#define DISP_REG_CONFIG_MMSYS_DUMMY2			(DISPSYS_CONFIG_BASE + 0x8AC)
#define DISP_REG_CONFIG_MMSYS_DUMMY3			(DISPSYS_CONFIG_BASE + 0x8B0)

#define DISP_REG_CONFIG_DISP_DL_VALID_0			(DISPSYS_CONFIG_BASE + 0x8B4)
#define DISP_REG_CONFIG_DISP_DL_VALID_1			(DISPSYS_CONFIG_BASE + 0x8B8)
#define DISP_REG_CONFIG_DISP_DL_VALID_2			(DISPSYS_CONFIG_BASE + 0x8BC)

#define DISP_REG_CONFIG_DISP_DL_READY_0			(DISPSYS_CONFIG_BASE + 0x8C0)
#define DISP_REG_CONFIG_DISP_DL_READY_1			(DISPSYS_CONFIG_BASE + 0x8C4)
#define DISP_REG_CONFIG_DISP_DL_READY_2			(DISPSYS_CONFIG_BASE + 0x8C8)

#define DISP_REG_CONFIG_MDP_DL_VALID_0			(DISPSYS_CONFIG_BASE + 0x8CC)
#define DISP_REG_CONFIG_MDP_DL_VALID_1			(DISPSYS_CONFIG_BASE + 0x8D0)
#define DISP_REG_CONFIG_MDP_DL_READY_0			(DISPSYS_CONFIG_BASE + 0x8D4)
#define DISP_REG_CONFIG_MDP_DL_READY_1			(DISPSYS_CONFIG_BASE + 0x8D8)
#define DISP_REG_CONFIG_SMI_LARB0_GREQ			(DISPSYS_CONFIG_BASE + 0x8DC)

#define DISP_REG_CONFIG_DISP_MOUT_MASK			(DISPSYS_CONFIG_BASE + 0x8E0)
#define DISP_REG_CONFIG_MDP_MOUT_MASK			(DISPSYS_CONFIG_BASE + 0x8E4)
#define DISP_REG_CONFIG_POWER_READ			(DISPSYS_CONFIG_BASE + 0x8E8)

#define DISP_REG_CONFIG_DISP_OVL0_MOUT_EN		(DISPSYS_CONFIG_BASE + 0xF00)
#define DISP_REG_CONFIG_DISP_OVL0_PQ_MOUT_EN		(DISPSYS_CONFIG_BASE + 0xF04)
#define DISP_REG_CONFIG_DISP_OVL1_MOUT_EN		(DISPSYS_CONFIG_BASE + 0xF08)
#define DISP_REG_CONFIG_DISP_OVL1_PQ_MOUT_EN		(DISPSYS_CONFIG_BASE + 0xF0C)
#define DISP_REG_CONFIG_DISP_DITHER_MOUT_EN		(DISPSYS_CONFIG_BASE + 0xF10)
#define DISP_REG_CONFIG_DISP_DITHER1_MOUT_EN		(DISPSYS_CONFIG_BASE + 0xF14)
#define DISP_REG_CONFIG_DISP_UFOE_MOUT_EN		(DISPSYS_CONFIG_BASE + 0xF18)
#define DISP_REG_CONFIG_DISP_DSC_MOUT_EN		(DISPSYS_CONFIG_BASE + 0xF1C)
#define DISP_REG_CONFIG_DISP_COLOR0_SEL_IN		(DISPSYS_CONFIG_BASE + 0xF20)
#define DISP_REG_CONFIG_DISP_COLOR1_SEL_IN		(DISPSYS_CONFIG_BASE + 0xF24)
#define DISP_REG_CONFIG_DISP_WDMA0_SEL_IN		(DISPSYS_CONFIG_BASE + 0xF28)
#define DISP_REG_CONFIG_DISP_WDMA1_SEL_IN		(DISPSYS_CONFIG_BASE + 0xF2C)
#define DISP_REG_CONFIG_DISP_UFOE_SEL_IN		(DISPSYS_CONFIG_BASE + 0xF30)
#define DISP_REG_CONFIG_DISP_DSC_SEL_IN			(DISPSYS_CONFIG_BASE + 0xF34)
#define DISP_REG_CONFIG_DSI0_SEL_IN			(DISPSYS_CONFIG_BASE + 0xF38)
#define DISP_REG_CONFIG_DSI1_SEL_IN			(DISPSYS_CONFIG_BASE + 0xF3C)
#define DISP_REG_CONFIG_DPI0_SEL_IN			(DISPSYS_CONFIG_BASE + 0xF40)
#define DISP_REG_CONFIG_DISP_PATH0_SEL_IN		(DISPSYS_CONFIG_BASE + 0xF44)
#define DISP_REG_CONFIG_DISP_PATH1_SEL_IN		(DISPSYS_CONFIG_BASE + 0xF48)
#define DISP_REG_CONFIG_DISP_OVL0_SEL_IN		(DISPSYS_CONFIG_BASE + 0xF4C)
#define DISP_REG_CONFIG_DISP_OVL1_2L_SEL_IN		(DISPSYS_CONFIG_BASE + 0xF50)
#define DISP_REG_CONFIG_DISP_PATH0_SOUT_SEL_IN		(DISPSYS_CONFIG_BASE + 0xF54)
#define DISP_REG_CONFIG_DISP_PATH1_SOUT_SEL_IN		(DISPSYS_CONFIG_BASE + 0xF58)
#define DISP_REG_CONFIG_DISP_RDMA0_SOUT_SEL_IN		(DISPSYS_CONFIG_BASE + 0xF5C)
#define DISP_REG_CONFIG_DISP_RDMA1_SOUT_SEL_IN		(DISPSYS_CONFIG_BASE + 0xF60)
#define DISP_REG_CONFIG_DISP_OVL0_SOUT_SEL_IN		(DISPSYS_CONFIG_BASE + 0xF64)

/* SMI_LARB0 */
#define DISP_REG_SMI_LARB0_MMU_EN			 (DISPSYS_SMI_LARB0_BASE+0x380)
#define REG_FLD_MMU_EN					REG_FLD(1, 0)
/* SMI_LARB4 */
#define DISP_REG_SMI_LARB4_MMU_EN			 (DISPSYS_SMI_LARB4_BASE+0x380)

/* field definition */
/* ------------------------------------------------------------- */
#if 0 /* remove this, because no one uses it */
#define MMSYS_INTEN_FLD_MMSYS_INTEN                             REG_FLD(8, 0)
#define MMSYS_INSTA_FLD_MMSYS_INSTA                             REG_FLD(2, 0)
#define MFG_APB_TX_CON_FLD_MFG_APB_COUNTER_EN                   REG_FLD(1, 31)
#define MFG_APB_TX_CON_FLD_MFG_APB_ERR_ADDR                     REG_FLD(16, 0)
#define PWM_APB_ERR_ADDR_FLD_PWM0_APB_ERR_ADDR                  REG_FLD(12, 0)
#define ISP_MOUT_EN_FLD_ISP_MOUT_EN                             REG_FLD(2, 0)
#define MDP_RDMA0_MOUT_EN_FLD_MDP_RDMA0_MOUT_EN                 REG_FLD(2, 0)
#define MDP_PRZ0_MOUT_EN_FLD_MDP_PRZ0_MOUT_EN                   REG_FLD(3, 0)
#define MDP_PRZ1_MOUT_EN_FLD_MDP_PRZ1_MOUT_EN                   REG_FLD(3, 0)
#define MDP_TDSHP0_MOUT_EN_FLD_MDP_TDSHP0_MOUT_EN               REG_FLD(2, 0)
#define DISP_OVL0_MOUT_EN_FLD_DISP_OVL0_MOUT_EN                 REG_FLD(2, 0)
#define DISP_OVL1_MOUT_EN_FLD_DISP_OVL1_MOUT_EN                 REG_FLD(2, 0)
#define DISP_DITHER_MOUT_EN_FLD_DISP_DITHER_MOUT_EN             REG_FLD(3, 0)
#define DISP_UFOE_MOUT_EN_FLD_DISP_UFOE_MOUT_EN                 REG_FLD(3, 0)
#define MMSYS_MOUT_RST_FLD_MMSYS_MOUT_RST                       REG_FLD(9, 0)
#define MDP_PRZ0_SEL_IN_FLD_MDP_PRZ0_SEL_IN                     REG_FLD(1, 0)
#define MDP_PRZ1_SEL_IN_FLD_MDP_PRZ1_SEL_IN                     REG_FLD(2, 0)
#define MDP_TDSHP0_SEL_IN_FLD_MDP_TDSHP0_SEL_IN                 REG_FLD(1, 0)
#define MDP_WDMA0_SEL_IN_FLD_MDP_WDMA0_SEL_IN                   REG_FLD(2, 0)
#define MDP_WROT0_SEL_IN_FLD_MDP_WROT0_SEL_IN                   REG_FLD(2, 0)
#define DISP_COLOR0_SEL_IN_FLD_DISP_COLOR0_SEL_IN               REG_FLD(1, 0)
#define DISP_WDMA0_SEL_IN_FLD_DISP_WDMA0_SEL_IN                 REG_FLD(2, 0)
#define DISP_UFO_SEL_IN_FLD_DISP_UFO_SEL_IN                     REG_FLD(1, 0)
#define DSI0_SEL_IN_FLD_DSI0_SEL_IN                             REG_FLD(1, 0)
#define DPI0_SEL_IN_FLD_DPI0_SEL_IN                             REG_FLD(1, 0)
#define DISP_RDMA0_SOUT_SEL_IN_FLD_DISP_RDMA0_SOUT_SEL_IN       REG_FLD(1, 0)
#define DISP_RDMA1_SOUT_SEL_IN_FLD_DISP_RDMA1_SOUT_SEL_IN       REG_FLD(1, 0)
#define MMSYS_MISC_FLD_SMI_LARB0_TEST_MODE                      REG_FLD(1, 0)

#define MMSYS_CG_CON0_FLD_CG0                                   REG_FLD(32,0)
#define MMSYS_CG_SET0_FLD_CG0                                   REG_FLD(32,0)
#define MMSYS_CG_CLR0_FLD_CG0                                   REG_FLD(32,0)
#define MMSYS_CG_CON1_FLD_CG1                                   REG_FLD(32,0)
#define MMSYS_CG_SET1_FLD_CG1                                   REG_FLD(32,0)
#define MMSYS_CG_CLR1_FLD_CG0                                   REG_FLD(32,0)
#define MMSYS_HW_DCM_DIS0_FLD_DCM_DIS0                          REG_FLD(32,0)
#define MMSYS_HW_DCM_DIS_SET0_FLD_DCM_DIS0                      REG_FLD(32,0)
#define MMSYS_HW_DCM_DIS_CLR0_FLD_DCM_DIS0                      REG_FLD(32,0)
#define MMSYS_HW_DCM_DIS1_FLD_DCM_DIS1                          REG_FLD(32,0)
#define MMSYS_HW_DCM_DIS_SET0_FLD_DCM_DIS1                      REG_FLD(32,0)
#define MMSYS_HW_DCM_DIS_CLR0_FLD_DCM_DIS1                      REG_FLD(32,0)
#define MMSYS_SW0_RST_B_FLD_SW0_RST_B                           REG_FLD(32,0)
#define MMSYS_SW1_RST_B_FLD_SW1_RST_B                           REG_FLD(32,0)
#define MMSYS_LCM_RST_B_FLD_LCM_RST_B                           REG_FLD(1,0)
#define MM_VDEC_SLICE_CFG_FLD_MM_VDEC_SLICE_CFG_WD              REG_FLD(3,0)
#define MM_VDEC_SLICE_CFG_FLD_MM_VDEC_SLICE_CFG_RD              REG_FLD(4,4)
#define SMI_N21MUX_CFG_WR_FLD_SMI_N21MUX_CFG_WR                 REG_FLD(32,0)
#define SMI_N21MUX_CFG_RD_FLD_SMI_N21MUX_CFG_RD                 REG_FLD(32,0)
#define ELA2GMC_BASE_ADDR_FLD_ELA2GMC_BASE_ADDR                 REG_FLD(32, 0)
#define ELA2GMC_BASE_ADDR_END_FLD_ELA2GMC_BASE_ADDR_END         REG_FLD(32, 0)
#define ELA2GMC_FINAL_ADDR_FLD_ELA2GMC_FINAL_ADDR               REG_FLD(32, 0)
#define ELA2GMC_STATUS_FLD_ELA2GMC_STATUS                       REG_FLD(1, 0)
#define LARB4_AXI_ASIF_CFG_WD_FLD_LARB4_AXI_ASIF_CFG_WD         REG_FLD(32,0)
#define LARB4_AXI_ASIF_CFG_RD_FLD_LARB4_AXI_ASIF_CFG_RD         REG_FLD(32,0)
#define DISP_FAKE_ENG_EN_FLD_DFE_START                          REG_FLD(1, 1)
#define DISP_FAKE_ENG_EN_FLD_DFE_MUX_SEL                        REG_FLD(1, 0)
#define DISP_FAKE_ENG_RST_FLD_DISP_FAKE_ENG_RST                 REG_FLD(1, 0)
#define DISP_FAKE_ENG_CON0_FLD_DFE_DRE_EN                       REG_FLD(1, 23)
#define DISP_FAKE_ENG_CON0_FLD_DFE_LOOP_MODE                    REG_FLD(1, 22)
#define DISP_FAKE_ENG_CON0_FLD_DFE_TEST_LEN                     REG_FLD(20, 0)
#define DISP_FAKE_ENG_CON1_FLD_DFE_WR_DIS                       REG_FLD(1, 11)
#define DISP_FAKE_ENG_CON1_FLD_DFE_RD_DIS                       REG_FLD(1, 10)
#define DISP_FAKE_ENG_CON1_FLD_DFE_SLOW_DOWN                    REG_FLD(10, 0)
#define DISP_FAKE_ENG_RD_ADDR_FLD_DISP_FAKE_ENG_RD_ADDR         REG_FLD(32, 0)
#define DISP_FAKE_ENG_WR_ADDR_FLD_DISP_FAKE_ENG_WR_ADDR         REG_FLD(32, 0)
#define DISP_FAKE_ENG_STATE_FLD_DFE_RD_ST                       REG_FLD(3, 12)
#define DISP_FAKE_ENG_STATE_FLD_DFE_WR_ST                       REG_FLD(4, 8)
#define DISP_FAKE_ENG_STATE_FLD_DFE_BUSY                        REG_FLD(1, 0)

#define MMSYS_MBIST_CON_FLD_MMSYS_MBIST_BACKGROUND              REG_FLD(3, 16)
#define MMSYS_MBIST_CON_FLD_MMSYS_MBIST_RSTB                    REG_FLD(1, 15)
#define MMSYS_MBIST_CON_FLD_MMSYS_MBIST_SCANOUT_SEL             REG_FLD(4, 8)
#define MMSYS_MBIST_CON_FLD_MMSYS_MBIST_DEBUG                   REG_FLD(1, 7)
#define MMSYS_MBIST_CON_FLD_MMSYS_MBIST_FAILOUT_SEL             REG_FLD(6, 0)
#define MMSYS_MBIST_DONE_FLD_MMSYS_MBIST_DONE                   REG_FLD(14, 0)
#define MMSYS_MBIST_HOLDB_FLD_MMSYS_MBIST_HOLDB                 REG_FLD(14, 0)
#define MMSYS_MBIST_MODE_FLD_MMSYS_MBIST_MODE                   REG_FLD(14, 0)
#define MMSYS_MBIST_FAIL0_FLD_MMSYS_MBIST_FAIL0                 REG_FLD(32, 0)
#define MMSYS_MBIST_FAIL1_FLD_MMSYS_MBIST_FAIL1                 REG_FLD(32, 0)
#define MMSYS_MBIST_FAIL2_FLD_MMSYS_MBIST_FAIL2                 REG_FLD(24, 0)
#define MMSYS_MBIST_BSEL0_FLD_MDP_TDSHP_MBIST_BSEL              REG_FLD(16, 0)
#define MMSYS_MBIST_BSEL0_FLD_MDP_RDMA_MBIST_BSEL               REG_FLD(8, 16)
#define MMSYS_MBIST_BSEL0_FLD_MDP_WROT_MBIST_BSEL               REG_FLD(8, 24)
#define MMSYS_MBIST_BSEL1_FLD_MDP_RSZ0_MBIST_BSEL               REG_FLD(12, 0)
#define MMSYS_MBIST_BSEL1_FLD_MDP_RSZ1_MBIST_BSEL               REG_FLD(12, 12)
#define MMSYS_MBIST_BSEL1_FLD_DISP_UFOE_MBIST_BSEL              REG_FLD(6, 24)
#define MMSYS_MEM_DELSEL0_FLD_MDP_RSZ_MEM_DELSEL                REG_FLD(16, 0)
#define MMSYS_MEM_DELSEL0_FLD_MDP_RDMA_MEM_DELSEL               REG_FLD(14, 16)
#define MMSYS_MEM_DELSEL1_FLD_MDP_WROT_MEM_DELSEL               REG_FLD(22, 0)
#define MMSYS_MEM_DELSEL1_FLD_MDP_WDMA_MEM_DELSEL               REG_FLD(6, 22)
#define MMSYS_MEM_DELSEL1_FLD_MDP_TDSHP_MEM_DELSEL              REG_FLD(4, 28)


#define MMSYS_MEM_DELSEL2_FLD_DISP_OVL_MEM_DELSEL               REG_FLD(4, 0)
#define MMSYS_MEM_DELSEL2_FLD_DISP_RDMA_MEM_DELSEL              REG_FLD(4, 4)
#define MMSYS_MEM_DELSEL2_FLD_DISP_WDMA_MEM_DELSEL              REG_FLD(6, 8)
#define MMSYS_MEM_DELSEL2_FLD_DISP_GAMM_MEM_DELSEL              REG_FLD(4, 14)
#define MMSYS_MEM_DELSEL2_FLD_DISP_UFOE_MEM_DELSEL              REG_FLD(12,18)

#define MMSYS_MEM_DELSEL3_FLD_DSI_MEM_DELSEL                    REG_FLD(4, 0)

#define MMSYS_DEBUG_OUT_SEL_FLD_MMSYS_DEBUG_OUT_SEL             REG_FLD(5, 0)
#define MMSYS_DUMMY0_FLD_MMSYS_DUMMY0                           REG_FLD(32,0)
#define MMSYS_DUMMY1_FLD_MMSYS_DUMMY1                           REG_FLD(32,0)
#define MMSYS_DUMMY2_FLD_MMSYS_DUMMY2                           REG_FLD(32,0)
#define MMSYS_DUMMY3_FLD_MMSYS_DUMMY3                           REG_FLD(32,0)
#define DISP_DL_VALID_0_FLD_DISP_DL_VALID_0                     REG_FLD(32,0)
#define DISP_DL_VALID_1_FLD_DISP_DL_VALID_1                     REG_FLD(32,0)
#define DISP_DL_READY_0_FLD_DISP_DL_READY_0                     REG_FLD(32,0)
#define DISP_DL_READY_1_FLD_DISP_DL_READY_1                     REG_FLD(32,0)
#define MDP_DL_VALID_0_FLD_MDP_DL_VALID_0                       REG_FLD(32,0)
#define MDP_DL_READY_0_FLD_MDP_DL_READY_0                       REG_FLD(32,0)
#define SMI_LARB0_GREQ_FLD_SMI_LARB0_GREQ                       REG_FLD(14,0)
#endif

// field definition
//mms clock
#define MMSYS_CG_FLD_CG0_SMI_COMMON                            REG_FLD(1, 0)
#define MMSYS_CG_FLD_CG0_SMI_LARB0                             REG_FLD(1, 1)
#define MMSYS_CG_FLD_CG0_SMI_LARB4                             REG_FLD(1, 2)

#if 0 
#define MMSYS_CG_FLD_CG0_OVL0                                  REG_FLD(1, 15)
#define MMSYS_CG_FLD_CG0_OVL1                                  REG_FLD(1, 16)
#define MMSYS_CG_FLD_CG0_OVL0_2L                               REG_FLD(1, 17)
#define MMSYS_CG_FLD_CG0_OVL1_2L                               REG_FLD(1, 18)
#define MMSYS_CG_FLD_CG0_RDMA0                                 REG_FLD(1, 19)
#define MMSYS_CG_FLD_CG0_RDMA1                                 REG_FLD(1, 20)
#define MMSYS_CG_FLD_CG0_WDMA0                                 REG_FLD(1, 22)
#define MMSYS_CG_FLD_CG0_WDMA1                                 REG_FLD(1, 23)
#define MMSYS_CG_FLD_CG0_COLOR0                                REG_FLD(1, 24)
#define MMSYS_CG_FLD_CG0_CCORR                                 REG_FLD(1, 24)
#define MMSYS_CG_FLD_CG0_AAL                                   REG_FLD(1, 25)
#define MMSYS_CG_FLD_CG0_GAMMA                                 REG_FLD(1, 26)
#define MMSYS_CG_FLD_CG0_OD				       REG_FLD(1, 27)
#define MMSYS_CG_FLD_CG0_DITHER                                REG_FLD(1, 28)
#define MMSYS_CG_FLD_CG0_UFOE                                  REG_FLD(1, 29)
#define MMSYS_CG_FLD_CG0_DSC                                   REG_FLD(1, 30)
#define MMSYS_CG_FLD_CG0_SPLIT                                 REG_FLD(1, 31)
#endif
//#define MMSYS_CG_FLD_CG1_PWM0_MM                               REG_FLD(1, 0)
//#define MMSYS_CG_FLD_CG1_PWM0_26M                              REG_FLD(1, 1)
#define MMSYS_CG_FLD_CG1_DSI0_MM                              REG_FLD(1, 6)
#define MMSYS_CG_FLD_CG1_DSI0_IF                              REG_FLD(1, 7)
#define MMSYS_CG_FLD_CG1_DSI1_MM                              REG_FLD(1, 8)
#define MMSYS_CG_FLD_CG1_DSI1_IF                              REG_FLD(1, 9)
#define MMSYS_CG_FLD_CG1_DPI_MM                              REG_FLD(1, 10)
#define MMSYS_CG_FLD_CG1_DPI_IF                              REG_FLD(1, 11)

#define MMSYS_CG_FLD_LARB4_AXI_ASIF_MM				REG_FLD(1, 12)
#define MMSYS_CG_FLD_LARB4_AXI_ASIF_MJC				REG_FLD(1, 13)

#define MMSYS_CG_FLD_CG1_DSI0_ANALOG                          REG_FLD(2, 24)
#define MMSYS_CG_FLD_CG1_DSI1_ANALOG                          REG_FLD(2, 26)
#define MMSYS_CG_FLD_CG1_DPI_ANALOG                          REG_FLD(2, 28)


#endif