// FUN_0041e750 @ 0041e750 body=[[0041e750, 0041e91c] [0041e925, 0041e9b4] [0041e9b8, 0041e9cb]]


undefined1 * FUN_0041e750(undefined1 *param_1,int *param_2)

{
  byte bVar1;
  byte ****ppppbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  byte ***local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b47d97;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  local_14 = 1;
  if ((param_2[1] - *param_2) / 0x1c < 1) {
    *param_1 = 0;
    FUN_00409350("Please specify the option (open/close)",0x26);
    ExceptionList = local_10;
    return param_1;
  }
  if ((DAT_013f272c & 1) == 0) {
    DAT_013f272c = DAT_013f272c | 1;
    local_8 = 1;
    FUN_0098b350(&DAT_013f25b0);
    _atexit((_func_4879 *)&LAB_00c7e210);
    local_8 = local_8 & 0xffffff00;
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (byte ***)((uint)local_30[0] & 0xffffff00);
  FUN_00408ed0(*param_2,0,0xffffffff);
  local_8 = 2;
  ppppbVar2 = (byte ****)local_30[0];
  if (local_1c < 0x10) {
    ppppbVar2 = local_30;
  }
  pbVar4 = &DAT_00df15a0;
  do {
    bVar1 = *(byte *)ppppbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_0041e857:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_0041e85c;
    }
    if (bVar1 == 0) break;
    bVar1 = *(byte *)((int)ppppbVar2 + 1);
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_0041e857;
    ppppbVar2 = (byte ****)((int)ppppbVar2 + 2);
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_0041e85c:
  if (iVar3 == 0) {
    if (1 < (param_2[1] - *param_2) / 0x1c) {
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      FUN_00408ed0(*param_2 + 0x1c,0,0xffffffff);
      local_8 = CONCAT31(local_8._1_3_,3);
      if (DAT_013f0808 != (int *)0x0) {
        (**(code **)(*DAT_013f0808 + 0x50))();
        DAT_013f0808 = (int *)0x0;
      }
      DAT_013f0808 = (int *)(**(code **)(*DAT_01258a80 + 0x2c))(local_4c,&DAT_013f25b0);
      if (DAT_013f0808 == (int *)0x0) {
        uVar7 = 0x1f;
        *param_1 = 0;
        pcVar6 = "Couldn\'t find such window name.";
      }
      else {
        (**(code **)(DAT_013f0808[6] + 0x34))();
        uVar7 = 0xd;
        *param_1 = 1;
        pcVar6 = "Window opened";
      }
      FUN_00409350(pcVar6,uVar7);
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_4c[0]);
      }
      goto LAB_0041e9a6;
    }
    uVar7 = 0x1f;
    pcVar6 = "Please specify the window name.";
LAB_0041e999:
    *param_1 = 0;
  }
  else {
    ppppbVar2 = (byte ****)local_30[0];
    if (local_1c < 0x10) {
      ppppbVar2 = local_30;
    }
    pcVar6 = "close";
    do {
      bVar1 = *(byte *)ppppbVar2;
      bVar5 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_0041e960:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_0041e965;
      }
      if (bVar1 == 0) break;
      bVar1 = *(byte *)((int)ppppbVar2 + 1);
      bVar5 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_0041e960;
      ppppbVar2 = (byte ****)((int)ppppbVar2 + 2);
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_0041e965:
    if (iVar3 != 0) {
      uVar7 = 0xe;
      pcVar6 = "Invalid option";
      goto LAB_0041e999;
    }
    if (DAT_013f0808 == (int *)0x0) goto LAB_0041e9a6;
    (**(code **)(*DAT_013f0808 + 0x50))();
    uVar7 = 0xd;
    *param_1 = 1;
    DAT_013f0808 = (int *)0x0;
    pcVar6 = "Window closed";
  }
  FUN_00409350(pcVar6,uVar7);
LAB_0041e9a6:
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

