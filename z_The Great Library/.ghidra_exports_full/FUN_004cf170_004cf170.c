// FUN_004cf170 @ 004cf170 body=[[004cf170, 004cf652]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cf170(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int in_ECX;
  undefined1 local_25c [16];
  undefined4 local_24c;
  undefined4 local_248;
  undefined1 local_240 [8];
  undefined1 local_238 [540];
  void *pvStack_1c;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b53af6;
  local_14 = ExceptionList;
  if (param_2 < 0x840) {
    if (param_2 == 0x83f) {
      ExceptionList = &local_14;
      FUN_004f2bc0(local_238);
      local_c = 0;
      iVar3 = *(int *)(in_ECX + 100);
      iVar6 = FUN_00aae9af(0x230);
      local_c = CONCAT31(local_c._1_3_,1);
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        FUN_004f2e50(iVar6);
        *(int *)(iVar6 + 0x220) = iVar3;
        *(undefined4 *)(iVar6 + 0x224) = 0;
        *(undefined1 *)(iVar6 + 0x228) = 0;
      }
      iVar1 = *(int *)(in_ECX + 0x68);
      *(int *)(in_ECX + 100) = iVar6;
      *(int *)(in_ECX + 0x68) = iVar1 + 1;
      if (iVar1 == 0) {
        *(int *)(in_ECX + 0x60) = iVar6;
      }
      else {
        *(int *)(iVar3 + 0x224) = iVar6;
      }
      local_c = 0xffffffff;
      FUN_004f33c0(local_238);
      if (*(int *)(in_ECX + 100) == 0) {
        (**(code **)(_DAT_00000000 + 0xc))(param_1);
        ExceptionList = pvStack_18;
        return;
      }
      (**(code **)(*(int *)(*(int *)(in_ECX + 100) + 8) + 0xc))(param_1);
      ExceptionList = pvStack_18;
      return;
    }
    if (param_2 < 0x2ff) {
      if (param_2 == 0x2fe) {
        ExceptionList = &local_14;
        FUN_009a1d40();
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x1a) {
        if (*(int *)(in_ECX + 0x250) != 0) {
          local_248 = 0xf;
          local_24c = 0;
          local_25c[0] = 0;
          local_c = 2;
          ExceptionList = &local_14;
          FUN_009a1750(local_25c,0);
          FUN_00408ed0(local_25c,0,0xffffffff);
          FUN_00408ad0();
          ExceptionList = local_14;
          return;
        }
      }
      else {
        if (param_2 == 0x1cb) {
          ExceptionList = &local_14;
          FUN_009a1bb0(in_ECX + 0x80);
          ExceptionList = local_14;
          return;
        }
        if (param_2 != 0x285) goto LAB_004cf5a3;
        ExceptionList = &local_14;
        FUN_005e5a20(param_1,(int *)(in_ECX + 0x48));
        if (0 < (int)(*(int *)(in_ECX + 0x4c) - *(int *)(in_ECX + 0x48) & 0xfffffffcU)) {
          uVar2 = FUN_004b8a80();
          *(undefined4 *)(in_ECX + 0x250) = uVar2;
          ExceptionList = local_14;
          return;
        }
      }
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x3b8) {
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af(0x10);
      if (iVar3 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_0044e210();
      }
      (**(code **)(*piVar4 + 0xc))(param_1);
      if (piVar4[2] == 0) {
        (**(code **)*piVar4)(1);
        ExceptionList = pvStack_1c;
        return;
      }
      iVar3 = *(int *)(in_ECX + 0x3c);
      puVar5 = (undefined4 *)FUN_00aae9af(0x10);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = piVar4;
        puVar5[1] = iVar3;
        puVar5[2] = 0;
        *(undefined1 *)(puVar5 + 3) = 0;
      }
      iVar6 = *(int *)(in_ECX + 0x40);
      *(undefined4 **)(in_ECX + 0x3c) = puVar5;
      *(int *)(in_ECX + 0x40) = iVar6 + 1;
      if (iVar6 == 0) {
        *(undefined4 **)(in_ECX + 0x38) = puVar5;
        ExceptionList = pvStack_18;
        return;
      }
      *(undefined4 **)(iVar3 + 8) = puVar5;
      ExceptionList = pvStack_18;
      return;
    }
    if (param_2 == 0x75f) {
      iVar3 = *(int *)(param_1 + 0x228);
      if ((iVar3 != 0x29f) && (iVar3 != 0x2a0)) {
        ExceptionList = &local_14;
        FUN_009a1c10();
        ExceptionList = local_14;
        return;
      }
      *(uint *)(in_ECX + 0x84) = (uint)(iVar3 == 0x29f);
      return;
    }
  }
  else if (param_2 < 0x9d9) {
    if (param_2 == 0x9d8) {
      ExceptionList = &local_14;
      FUN_009a1bb0(in_ECX + 0x27c);
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x8e2) {
      ExceptionList = &local_14;
      FUN_009a1d40();
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x91c) {
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 0x1c8) + 0xc))(param_1);
      *(int *)(in_ECX + 0x234) = in_ECX;
      ExceptionList = pvStack_18;
      return;
    }
  }
  else {
    if (param_2 == 0x9d9) {
      ExceptionList = &local_14;
      FUN_009a1ce0();
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x9e4) {
      ExceptionList = &local_14;
      puVar5 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_240,param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 0x284) = *puVar5;
      *(undefined4 *)(in_ECX + 0x288) = puVar5[1];
      ExceptionList = local_14;
      return;
    }
  }
LAB_004cf5a3:
  if (param_2 == 0xb) {
    ExceptionList = &local_14;
    FUN_009a19f0(param_1,in_ECX + 8);
    ExceptionList = local_14;
    return;
  }
  ExceptionList = &local_14;
  FUN_009a0f40();
  ExceptionList = local_14;
  return;
}

