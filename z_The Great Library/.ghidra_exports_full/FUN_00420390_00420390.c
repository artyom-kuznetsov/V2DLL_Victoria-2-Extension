// FUN_00420390 @ 00420390 body=[[00420390, 00420510] [00420514, 0042053d] [00420541, 00420607] [0042060b, 0042062a] [0042062e, 00420676]]


undefined1 * FUN_00420390(undefined1 *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  byte *pbVar9;
  bool bVar10;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 *local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b60b11;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  iVar2 = DAT_01258a80;
  local_8 = 0;
  piVar8 = *(int **)(DAT_012588e8 + 0xb24);
  pbVar9 = (byte *)*param_2;
  local_14 = 1;
  if ((param_2[1] - (int)pbVar9) / 0x1c < 1) {
    (**(code **)(*piVar8 + 0x140))(1,0);
    FUN_00409350("Set tutorial chapter 0",0x16);
    ExceptionList = local_10;
    return param_1;
  }
  pbVar3 = pbVar9;
  if (0xf < *(uint *)(pbVar9 + 0x14)) {
    pbVar3 = *(byte **)pbVar9;
  }
  pcVar7 = "reload";
  do {
    bVar1 = *pbVar3;
    bVar10 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_00420430:
      iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_00420435;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar10 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_00420430;
    pbVar3 = pbVar3 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00420435:
  if (iVar4 == 0) {
    iVar4 = FUN_00aae9af(0x360);
    local_8 = 1;
    local_18 = iVar4;
    if (iVar4 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      FUN_00409350("UNNAMED_SESSION",0xf);
      local_8 = CONCAT31(local_8._1_3_,2);
      local_14 = 3;
      puVar5 = (undefined4 *)FUN_00aae9af(0x114);
      local_8 = 3;
      local_1c = puVar5;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        FUN_009885d0();
        local_8 = CONCAT31(local_8._1_3_,4);
        local_14 = 7;
        FUN_0098ffc0(local_54);
        *puVar5 = &PTR_FUN_00e37c3c;
        iVar4 = local_18;
      }
      local_8 = 5;
      puVar5 = (undefined4 *)FUN_009a0bf0(iVar4,puVar5,1);
    }
    if ((local_14 & 4) != 0) {
      local_14 = local_14 & 0xfffffffb;
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_54[0]);
      }
      local_40 = 0xf;
      local_44 = 0;
      local_54[0] = local_54[0] & 0xffffff00;
    }
    local_8 = 0;
    if ((local_14 & 2) != 0) {
      local_14 = local_14 & 0xfffffffd;
      if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_38[0]);
      }
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
    }
    if (iVar2 == 0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = (int *)(iVar2 + 4);
    }
    (**(code **)(*piVar8 + 0xc))(puVar5);
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(1);
    }
    FUN_009a4190();
    FUN_00409350("Tutorial reloaded",0x11);
    *param_1 = 1;
    ExceptionList = local_10;
    return param_1;
  }
  if (0xf < *(uint *)(pbVar9 + 0x14)) {
    pbVar9 = *(byte **)pbVar9;
  }
  uVar6 = FUN_00aaf0c5(pbVar9);
  (**(code **)(*piVar8 + 0x140))(1,uVar6);
  uVar6 = FUN_009888f0(local_38);
  local_8 = 8;
  uVar6 = FUN_00988fa0(uVar6);
  local_8 = CONCAT31(local_8._1_3_,9);
  FUN_00408ed0(uVar6,0,0xffffffff);
  if (local_40 < 0x10) {
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    if (local_24 < 0x10) {
      *param_1 = 1;
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_54[0]);
}

