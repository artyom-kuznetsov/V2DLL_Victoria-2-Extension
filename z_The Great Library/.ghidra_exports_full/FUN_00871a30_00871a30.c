// FUN_00871a30 @ 00871a30 body=[[00871a30, 00871b3e]]


int FUN_00871a30(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *unaff_EDI;
  bool bVar5;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_c = lua_gettop(param_1);
  iVar4 = -1;
  iVar1 = FUN_004f5fc0();
  if (iVar1 == local_c) {
    local_14 = 0;
    piVar2 = (int *)FUN_00aa9820(param_1,1);
    if (piVar2 == (int *)0x0) {
      local_18 = -1;
    }
    else {
      piVar2 = (int *)*piVar2;
      if (piVar2 == (int *)0x0) {
        local_1c = 0;
        local_18 = -1;
      }
      else {
        if ((char)piVar2[2] != '\0') {
          local_18 = -1;
          goto LAB_00871aac;
        }
        (**(code **)(*piVar2 + 4))(&local_1c,DAT_013f3640);
      }
      local_8 = local_1c;
    }
LAB_00871aac:
    local_10 = local_18;
    piVar2 = &local_10;
    iVar1 = 0;
    do {
      iVar4 = *piVar2;
      if (iVar4 < 0) break;
      iVar4 = iVar1 + iVar4;
      piVar2 = piVar2 + 1;
      iVar1 = iVar4;
    } while (piVar2 != &local_c);
    if (iVar4 < 0) goto LAB_00871ae1;
    bVar5 = iVar4 == *unaff_EDI;
    if (iVar4 < *unaff_EDI) {
      *unaff_EDI = iVar4;
      unaff_EDI[1] = param_2;
      unaff_EDI[0xb] = 1;
      goto LAB_00871af2;
    }
  }
  else {
LAB_00871ae1:
    bVar5 = iVar4 == *unaff_EDI;
  }
  if (bVar5) {
    unaff_EDI[unaff_EDI[0xb] + 1] = param_2;
    unaff_EDI[0xb] = unaff_EDI[0xb] + 1;
  }
LAB_00871af2:
  iVar1 = 0;
  if (*(int **)(param_2 + 0x24) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_2 + 0x24) + 4))(param_1);
  }
  if ((iVar4 == *unaff_EDI) && (unaff_EDI[0xb] == 1)) {
    puVar3 = (undefined4 *)(*(code *)*param_3)(&param_2);
    FUN_0086c920(param_1,*puVar3);
    iVar1 = lua_gettop(param_1);
    iVar1 = iVar1 - local_c;
  }
  return iVar1;
}

