// FUN_0096f2e0 @ 0096f2e0 body=[[0096f2e0, 0096f31e] [0096f320, 0096f511] [0096f517, 0096f52f] [0096f535, 0096f55d] [0096f561, 0096f58e]]


void FUN_0096f2e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_158 [8];
  byte abStack_150 [64];
  int local_110;
  undefined1 local_100 [8];
  byte abStack_f8 [64];
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  byte abStack_a0 [64];
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_2c;
  undefined4 local_28;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4a7b6;
  local_10 = ExceptionList;
  local_1c = 1;
  ExceptionList = &local_10;
  if (4 < (int)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) & 0xfffffffcU)) {
    do {
      iVar5 = DAT_012587f0;
      local_8 = 0xffffffff;
      iVar2 = *(int *)(*(int *)(param_1 + 0xc) + local_1c * 4);
      iVar3 = *(int *)(DAT_012588e8 + 0xbcc);
      FUN_0047db00(local_158,iVar2 + 0x110);
      local_8 = 0;
      FUN_0047db00(local_100,iVar2 + 0x168);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_0047db00(local_a8,iVar2 + 0x1c0);
      local_18 = iVar3 + 0x39c;
      FUN_0047dd30(local_18);
      FUN_0047dd30(local_18);
      FUN_0047dd30(local_18);
      iVar3 = *(int *)(DAT_012587f0 + 0x10);
      iVar4 = *(int *)(DAT_012587f0 + 0xc);
      iVar6 = 0;
      *(undefined4 *)(iVar2 + 0x350) = 0;
      *(undefined4 *)(iVar2 + 0x354) = 0;
      local_18 = iVar3 - iVar4 >> 2;
      *(undefined4 *)(iVar2 + 0x370) = 0;
      *(undefined4 *)(iVar2 + 0x374) = 0;
      *(undefined4 *)(iVar2 + 0x390) = 0;
      *(undefined4 *)(iVar2 + 0x394) = 0;
      if (0 < local_18) {
        do {
          iVar3 = *(int *)(*(int *)(iVar5 + 0xc) + iVar6 * 4);
          local_4c = *(undefined4 *)(iVar3 + 0x34);
          puVar1 = (undefined4 *)(local_110 + (uint)abStack_150[iVar6] * 8);
          lVar7 = __allmul(*puVar1,puVar1[1],*(undefined4 *)(iVar3 + 0x30),local_4c);
          local_48 = (int)(lVar7 >> 0xf);
          *(longlong *)(iVar2 + 0x350) = (lVar7 >> 0xf) + *(longlong *)(iVar2 + 0x350);
          iVar3 = *(int *)(*(int *)(iVar5 + 0xc) + iVar6 * 4);
          local_3c = *(undefined4 *)(iVar3 + 0x34);
          puVar1 = (undefined4 *)(local_b8 + (uint)abStack_f8[iVar6] * 8);
          lVar7 = __allmul(*puVar1,puVar1[1],*(undefined4 *)(iVar3 + 0x30),local_3c);
          local_28 = (int)(lVar7 >> 0xf);
          *(longlong *)(iVar2 + 0x370) = (lVar7 >> 0xf) + *(longlong *)(iVar2 + 0x370);
          iVar3 = *(int *)(*(int *)(iVar5 + 0xc) + iVar6 * 4);
          local_2c = *(undefined4 *)(iVar3 + 0x34);
          puVar1 = (undefined4 *)(local_60 + (uint)abStack_a0[iVar6] * 8);
          lVar7 = __allmul(*(undefined4 *)(iVar3 + 0x30),local_2c,*puVar1,puVar1[1]);
          local_38 = (int)(lVar7 >> 0xf);
          iVar6 = iVar6 + 1;
          *(longlong *)(iVar2 + 0x390) = (lVar7 >> 0xf) + *(longlong *)(iVar2 + 0x390);
        } while (iVar6 < local_18);
      }
      if (local_60 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_60);
      }
      local_60 = 0;
      local_5c = 0;
      local_58 = 0;
      if (local_b8 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_b8);
      }
      local_8 = 0xffffffff;
      local_b8 = 0;
      local_b4 = 0;
      local_b0 = 0;
      if (local_110 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_110);
      }
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2);
  }
  ExceptionList = local_10;
  return;
}

