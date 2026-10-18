// FUN_0041a7f0 @ 0041a7f0 body=[[0041a7f0, 0041a9a7] [0041a9ab, 0041aa11] [0041aa15, 0041aa4c] [0041aa50, 0041aa9d] [0041aaa1, 0041aabb] [0041aabf, 0041aade] [0041aae2, 0041aaff] [0041ab03, 0041ab15]]


undefined1 * FUN_0041a7f0(undefined1 *param_1,int *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 *puVar11;
  char local_ac [32];
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  uint local_70;
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  undefined4 local_38;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  LARGE_INTEGER local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00ba2504;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  local_78 = 0xf;
  local_38 = 1;
  local_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 1;
  if (0 < (param_2[1] - *param_2) / 0x1c) {
    FUN_00408ed0(*param_2,0,0xffffffff);
  }
  iVar7 = *param_2;
  if ((param_2[1] - iVar7) / 0x1c < 2) {
    QueryPerformanceCounter(&local_18);
    uVar9 = local_18.s.LowPart;
  }
  else {
    piVar5 = (int *)(iVar7 + 0x1c);
    if (0xf < *(uint *)(iVar7 + 0x30)) {
      piVar5 = (int *)*piVar5;
    }
    local_18.s.HighPart = FUN_00aaf0c5(piVar5);
    uVar9 = local_18.s.HighPart;
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  local_18.s.LowPart = uVar9;
  FUN_00409350("Generating Fakes:",0x11);
  iVar7 = DAT_012586f4;
  *param_1 = 1;
  puVar2 = *(undefined4 **)(iVar7 + 0x140);
  puVar11 = (undefined4 *)*puVar2;
  while (puVar11 != puVar2) {
    local_8._0_1_ = 2;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00408ed0(puVar11 + 3,0,0xffffffff);
    local_8._0_1_ = 3;
    if (*(char *)((int)puVar11 + 0x2d) == '\0') {
      puVar3 = (undefined4 *)puVar11[2];
      if (*(char *)((int)puVar3 + 0x2d) == '\0') {
        cVar1 = *(char *)((int)*puVar3 + 0x2d);
        puVar11 = puVar3;
        puVar3 = (undefined4 *)*puVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0x2d);
          puVar11 = puVar3;
          puVar3 = (undefined4 *)*puVar3;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar11[1] + 0x2d);
        puVar4 = (undefined4 *)puVar11[1];
        puVar3 = puVar11;
        while ((puVar11 = puVar4, cVar1 == '\0' && (puVar3 == (undefined4 *)puVar11[2]))) {
          cVar1 = *(char *)((int)puVar11[1] + 0x2d);
          puVar4 = (undefined4 *)puVar11[1];
          puVar3 = puVar11;
        }
      }
    }
    uVar6 = FUN_00988fa0(local_34);
    local_8._0_1_ = 4;
    FUN_00448aa0(uVar6,0,0xffffffff);
    local_8 = CONCAT31(local_8._1_3_,3);
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70);
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70 = local_70 & 0xffffff00;
    iVar7 = FUN_00458480(*(undefined4 *)(DAT_012588e8 + 0xcf4),local_34,local_8c,&local_18);
    if (iVar7 == 0) {
      FUN_00448740(" ERROR",6);
      *param_1 = 0;
    }
    else {
      FUN_00448740(&DAT_00df0e74,3);
    }
    local_8._0_1_ = 2;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  local_8._0_1_ = 5;
  pcVar8 = __itoa(uVar9,local_ac,10);
  pcVar10 = pcVar8;
  do {
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar8,(int)pcVar10 - (int)(pcVar8 + 1));
  local_8._0_1_ = 6;
  uVar9 = FUN_00988fa0(local_34);
  local_8._0_1_ = 7;
  FUN_00448aa0(uVar9,0,0xffffffff);
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_70);
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  local_5c = 0xf;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  FUN_00448aa0(local_54,0,0xffffffff);
  if (local_40 < 0x10) {
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    if (local_78 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_8c[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_54[0]);
}

