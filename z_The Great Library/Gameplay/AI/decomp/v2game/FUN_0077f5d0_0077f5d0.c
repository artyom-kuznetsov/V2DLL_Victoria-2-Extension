// FUN_0077f5d0 @ 0077f5d0 body=[[0077f5d0, 0077f856]]


bool FUN_0077f5d0(char *param_1,int param_2)

{
  int iVar1;
  int in_EAX;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *unaff_ESI;
  undefined8 uVar6;
  int *local_1c;
  int local_18;
  int local_14;
  uint local_10;
  undefined4 local_c;
  
  local_10 = *(uint *)(in_EAX + 0xc);
  local_c = *(undefined4 *)(in_EAX + 0x10);
  iVar4 = DAT_01258a94;
  if (local_10 < 0x1269) {
    iVar4 = DAT_01258a98;
  }
  if (iVar4 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_009c1d40();
  }
  *(int **)(in_EAX + 8) = piVar2;
  local_10 = *(uint *)(param_2 + 0xc);
  local_c = *(undefined4 *)(param_2 + 0x10);
  if (local_10 < 0x1269) {
    if (DAT_01258a98 != 0) {
      local_1c = (int *)FUN_009c1d40();
      goto LAB_0077f66b;
    }
  }
  else if (DAT_01258a94 != 0) {
    local_1c = (int *)FUN_009c1d40();
    goto LAB_0077f66b;
  }
  local_1c = (int *)0x0;
LAB_0077f66b:
  *(int **)(param_2 + 8) = local_1c;
  iVar4 = 0;
  local_14 = 0;
  local_18 = 0;
  if (piVar2 != (int *)0x0) {
    if ((piVar2[0x1d] == 0) || (*(char *)(piVar2[0x1d] + 0x164) == '\0')) {
      iVar4 = piVar2[0x10];
    }
    piVar3 = (int *)(**(code **)(*piVar2 + 0x34))(&local_14,0);
    iVar5 = *piVar3;
    if (iVar5 == 0) {
      iVar5 = -1;
    }
    else if ((iVar4 < -0x189373) || (0x20c49a < iVar4)) {
      uVar6 = __allmul(iVar4,iVar4 >> 0x1f,1000,0);
      iVar5 = __alldiv(uVar6,iVar5,iVar5 >> 0x1f);
    }
    else {
      iVar5 = (iVar4 * 1000) / iVar5;
    }
    iVar4 = piVar2[0xf];
    piVar2 = (int *)(**(code **)(*piVar2 + 0x30))(&local_18,0);
    iVar1 = *piVar2;
    if (iVar1 == 0) {
      local_14 = -1;
    }
    else if (iVar4 + 0x189373U < 0x39580e) {
      local_14 = (iVar4 * 1000) / iVar1;
    }
    else {
      uVar6 = __allmul(iVar4,iVar4 >> 0x1f,1000,0);
      local_14 = __alldiv(uVar6,iVar1,iVar1 >> 0x1f);
    }
    local_14 = local_14 + iVar5;
  }
  if (local_1c != (int *)0x0) {
    if ((local_1c[0x1d] == 0) || (*(char *)(local_1c[0x1d] + 0x164) == '\0')) {
      iVar4 = local_1c[0x10];
    }
    else {
      iVar4 = 0;
    }
    piVar2 = (int *)(**(code **)(*local_1c + 0x34))(&local_10,0);
    iVar5 = *piVar2;
    if (iVar5 == 0) {
      iVar5 = -1;
    }
    else if ((iVar4 < -0x189373) || (0x20c49a < iVar4)) {
      uVar6 = __allmul(iVar4,iVar4 >> 0x1f,1000,0);
      iVar5 = __alldiv(uVar6,iVar5,iVar5 >> 0x1f);
    }
    else {
      iVar5 = (iVar4 * 1000) / iVar5;
    }
    iVar4 = unaff_ESI[0xf];
    piVar2 = (int *)(**(code **)(*unaff_ESI + 0x30))(&stack0xffffffe0,0);
    iVar1 = *piVar2;
    if (iVar1 == 0) {
      local_18 = -1;
    }
    else if (iVar4 + 0x189373U < 0x39580e) {
      local_18 = (iVar4 * 1000) / iVar1;
    }
    else {
      uVar6 = __allmul(iVar4,iVar4 >> 0x1f,1000,0);
      local_18 = __alldiv(uVar6,iVar1,iVar1 >> 0x1f);
    }
    local_18 = local_18 + iVar5;
  }
  if (*param_1 == '\0') {
    return local_18 < local_14;
  }
  return local_14 < local_18;
}

