// FUN_00401e80 @ 00401e80 body=[[00401e80, 00401fe2] [00401fe6, 0040205c] [00402060, 0040216b]]


void FUN_00401e80(int param_1,uint *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined1 local_518 [12];
  undefined4 uStack_50c;
  uint *local_508;
  char *local_504;
  undefined ***pppuStack_500;
  int local_4ec [66];
  undefined **local_3e4;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined1 local_3d4;
  undefined1 local_3d0;
  int *local_3c8;
  int local_3c4;
  char local_1b8 [256];
  undefined1 local_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_8c;
  undefined4 local_88;
  int local_48;
  char local_44 [4];
  undefined1 *local_40;
  int *local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  char local_16;
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b5c737;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffb04;
  local_8 = 0;
  pppuStack_500 = (undefined ***)0xf;
  local_504 = "UNNAMED_SESSION";
  local_16 = '\0';
  local_15 = '\0';
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  local_508 = (uint *)0x401ecb;
  ExceptionList = &local_10;
  FUN_00409350();
  pppuStack_500 = (undefined ***)0x114;
  local_8._0_1_ = 1;
  local_504 = (char *)0x401ed9;
  piVar2 = (int *)FUN_00aae9af();
  local_8._0_1_ = 2;
  local_3c = piVar2;
  if (piVar2 == (int *)0x0) {
    local_3c8 = (int *)0x0;
  }
  else {
    pppuStack_500 = (undefined ***)0x3c;
    local_504 = (char *)0x401ef0;
    iVar3 = FUN_00aae9af();
    local_8._0_1_ = 3;
    local_48 = iVar3;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      local_40 = local_518;
      local_504 = (char *)0xf;
      local_508 = (uint *)0x0;
      local_518[0] = 0;
      FUN_00409350(&DAT_00ded94d,0);
      iVar3 = FUN_00992740(iVar3,param_2,0);
    }
    local_8._0_1_ = 2;
    *piVar2 = (int)&PTR_FUN_00e37c30;
    piVar2[1] = iVar3;
    *(undefined2 *)(piVar2 + 0x44) = 0x100;
    pppuStack_500 = (undefined ***)0x401f4c;
    FUN_00990100();
    *piVar2 = (int)&PTR_FUN_00e37c3c;
    local_3c8 = piVar2;
  }
  local_3e4 = &PTR_FUN_00e38524;
  local_3e0 = 0;
  local_3dc = 0;
  local_3d8 = 0;
  local_3d4 = 0;
  pppuStack_500 = (undefined ***)0xffffffff;
  local_8._0_1_ = 4;
  local_504 = (char *)0x0;
  local_508 = local_34;
  local_3d0 = 0;
  local_a4 = 0xf;
  local_a8 = 0;
  local_b8 = 0;
  uStack_50c = 0x401fb1;
  FUN_00408ed0();
  piVar2 = local_3c8;
  local_9c = 0;
  local_98 = 0;
  local_94 = 0;
  local_8c = 1;
  local_88 = 0;
  local_8 = CONCAT31(local_8._1_3_,6);
  if (0xf < local_20) {
    pppuStack_500 = (undefined ***)local_34[0];
                    /* WARNING: Subroutine does not return */
    local_504 = &UNK_00401fe3;
    FUN_00aae91b();
  }
  piVar6 = local_3c8 + 0x44;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if ((char)*piVar6 == '\0') {
    pppuStack_500 = (undefined ***)0x402008;
    iVar3 = (**(code **)(*local_3c8 + 4))();
    piVar2[2] = iVar3;
    if (iVar3 == 0) {
      piVar2[3] = 0x13;
    }
    *(char *)piVar6 = '\x01';
  }
  piVar2 = piVar2 + 3;
  piVar6 = local_4ec;
  for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar6 = piVar6 + 1;
  }
  if (local_4ec[0] != 0x13) {
    pppuStack_500 = &local_3e4;
    local_504 = (char *)0x402042;
    FUN_009a1440();
    if (local_3c4 == 0x3e2) {
      pcVar4 = local_1b8;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      pppuStack_500 = (undefined ***)((int)pcVar4 - (int)(local_1b8 + 1));
      local_504 = local_1b8;
      local_508 = (uint *)0x40207f;
      FUN_00409350();
      piVar2 = local_3c8;
      if (*(int *)(param_1 + 0x1e4) != 0) {
        local_16 = '\x01';
      }
      piVar6 = local_3c8 + 0x44;
      if ((char)*piVar6 == '\0') {
        pppuStack_500 = (undefined ***)0x4020a4;
        iVar3 = (**(code **)(*local_3c8 + 4))();
        piVar2[2] = iVar3;
        if (iVar3 == 0) {
          piVar2[3] = 0x13;
        }
        *(char *)piVar6 = '\x01';
      }
      piVar2 = piVar2 + 3;
      piVar6 = local_4ec;
      for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar6 = *piVar2;
        piVar2 = piVar2 + 1;
        piVar6 = piVar6 + 1;
      }
      if (local_4ec[0] != 0x13) {
        pppuStack_500 = &local_3e4;
        local_504 = (char *)0x4020da;
        FUN_009a1440();
      }
    }
    if (local_3c4 == 0x2f0) {
      pppuStack_500 = (undefined ***)local_1b8;
      local_504 = local_44;
      local_508 = DAT_012587e4;
      uStack_50c = 0x4020fd;
      puVar5 = (undefined4 *)FUN_0055c6c0();
      *(undefined4 *)(param_1 + 0x214) = *puVar5;
      iVar3 = puVar5[1];
      *(int *)(param_1 + 0x218) = iVar3;
      if (iVar3 != 0) {
        local_15 = '\x01';
      }
    }
    if ((local_16 != '\0') && (local_15 != '\0')) {
      pppuStack_500 = (undefined ***)0xffffffff;
      local_504 = (char *)0x0;
      *(undefined1 *)(param_1 + 0x1f0) = 0;
      local_508 = param_2;
      uStack_50c = 0x402140;
      FUN_00408ed0();
      goto LAB_0040214b;
    }
  }
  *(undefined1 *)(param_1 + 0x210) = 0;
LAB_0040214b:
  local_8 = local_8 & 0xffffff00;
  pppuStack_500 = (undefined ***)0x402159;
  FUN_009a0dc0();
  ExceptionList = local_10;
  return;
}

