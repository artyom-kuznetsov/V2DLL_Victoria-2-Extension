// FUN_009b6160 @ 009b6160 body=[[009b6160, 009b63f2]]


void FUN_009b6160(void)

{
  int iVar1;
  ushort *puVar2;
  int in_ECX;
  code *pcVar3;
  float10 fVar4;
  int local_18;
  int local_14;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  short local_8;
  short sStack_6;
  
  if (*(char *)(in_ECX + 0x4f) == '\0') {
    return;
  }
  if (*(char *)(in_ECX + 0x164) == '\0') {
    return;
  }
  fVar4 = (float10)(**(code **)(**(int **)(in_ECX + 0x174) + 0x14))();
  if ((float10)0.5 <= fVar4) {
    fVar4 = (float10)(**(code **)(**(int **)(in_ECX + 0x174) + 0x14))();
    if ((fVar4 <= (float10)0.5) ||
       (fVar4 = (float10)(**(code **)(**(int **)(in_ECX + 0x174) + 0x14))(), (float10)1 <= fVar4)) {
      (**(code **)(**(int **)(in_ECX + 0x174) + 8))();
      (**(code **)(**(int **)(in_ECX + 0x174) + 4))();
    }
    else {
      *(undefined4 *)(in_ECX + 0x16c) = 1;
    }
  }
  else {
    *(undefined4 *)(in_ECX + 0x16c) = 0;
  }
  if (((*(int *)(in_ECX + 0x16c) == 1) && (*(int *)(in_ECX + 0x170) == 0)) ||
     (*(char *)(in_ECX + 400) != '\0')) {
    pcVar3 = *(code **)(**(int **)(in_ECX + 0x114) + 0x38);
LAB_009b623e:
    (*pcVar3)();
  }
  else if ((*(int *)(in_ECX + 0x16c) == 0) && (*(int *)(in_ECX + 0x170) == 1)) {
    pcVar3 = *(code **)(**(int **)(in_ECX + 0x114) + 0x34);
    goto LAB_009b623e;
  }
  *(undefined4 *)(in_ECX + 0x170) = *(undefined4 *)(in_ECX + 0x16c);
  iVar1 = *(int *)(in_ECX + 0x178);
  if (iVar1 == 3) {
    local_8 = *(short *)(in_ECX + 0x17c) + *(short *)(in_ECX + 0x15c);
    sStack_6 = *(short *)(in_ECX + 0x180) + *(short *)(in_ECX + 0x15e);
    goto LAB_009b6331;
  }
  if (iVar1 == 1) {
    local_8 = *(short *)(in_ECX + 0x17c) + *(short *)(in_ECX + 0x15c);
  }
  else {
    if (iVar1 == 2) {
      sStack_6 = *(short *)(in_ECX + 0x180) + *(short *)(in_ECX + 0x15e);
      local_8 = *(short *)(in_ECX + 0x15c);
      goto LAB_009b6331;
    }
    if (iVar1 != 0) {
      if (iVar1 == 4) {
        local_8 = (short)(*(int *)(in_ECX + 0x17c) / 2) + *(short *)(in_ECX + 0x15c);
        sStack_6 = (short)(*(int *)(in_ECX + 0x180) / 2) + *(short *)(in_ECX + 0x15e);
      }
      else {
        local_8 = *(short *)(in_ECX + 0x15c);
        sStack_6 = *(short *)(in_ECX + 0x15e);
      }
      goto LAB_009b6331;
    }
    local_8 = *(short *)(in_ECX + 0x15c);
  }
  sStack_6 = *(short *)(in_ECX + 0x15e);
LAB_009b6331:
  if (*(int *)(in_ECX + 0x1d0) == 0) {
    iVar1 = (**(code **)(*(int *)(in_ECX + 0x54) + 0x2c))(local_c);
    iVar1 = (uint)*(ushort *)(iVar1 + 2) + *(int *)(in_ECX + 0x188) + *(int *)(in_ECX + 0x154) +
            (int)sStack_6;
    puVar2 = (ushort *)(**(code **)(*(int *)(in_ECX + 0x54) + 0x2c))(local_10);
  }
  else {
    iVar1 = (**(code **)(*(int *)(in_ECX + 0x54) + 0xdc))(local_10,in_ECX + 0x1c0);
    iVar1 = (uint)*(ushort *)(iVar1 + 2) + *(int *)(in_ECX + 0x188) + *(int *)(in_ECX + 0x154) +
            (int)sStack_6;
    puVar2 = (ushort *)(**(code **)(*(int *)(in_ECX + 0x54) + 0xdc))(local_c,in_ECX + 0x1c0);
  }
  local_18 = *(int *)(in_ECX + 0x184) + *(int *)(in_ECX + 0x150) + (int)local_8 + (uint)*puVar2;
  local_14 = iVar1;
  (**(code **)(**(int **)(in_ECX + 0x114) + 0xcc))(&local_18);
  *(undefined1 *)(in_ECX + 400) = 0;
  return;
}

