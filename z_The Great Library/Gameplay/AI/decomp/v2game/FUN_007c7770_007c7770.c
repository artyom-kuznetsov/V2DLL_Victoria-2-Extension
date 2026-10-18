// FUN_007c7770 @ 007c7770 body=[[007c7770, 007c79e1]]


void FUN_007c7770(void)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5856b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_0131bb34 == 0) {
    ExceptionList = &local_14;
    iVar4 = FUN_00aae9af(0x188);
    local_c = 0;
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_0041a160();
    }
    local_c = 0xffffffff;
    FUN_00423700(uVar5);
  }
  iVar4 = *(int *)(in_ECX + 0x6c);
  iVar8 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  iVar6 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x70) - iVar4 & 0xfffffffcU)) {
    do {
      *(undefined4 *)(iVar4 + iVar6 * 4) = 0;
      iVar4 = *(int *)(in_ECX + 0x6c);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(in_ECX + 0x70) - iVar4 >> 2);
  }
  for (piVar7 = *(int **)(in_ECX + 0x94); piVar7 != (int *)0x0; piVar7 = (int *)piVar7[2]) {
    if (0 < iVar8) {
      iVar4 = 0;
      local_1c = iVar8;
      do {
        iVar6 = *(int *)(iVar4 + *(int *)(*piVar7 + 0x194));
        while (iVar6 != 0) {
          piVar1 = (int *)(iVar6 + 0x68);
          iVar6 = *(int *)(iVar6 + 0x27c);
          *(undefined4 *)(*(int *)(in_ECX + 0x6c) + *(int *)(*piVar1 + 0x28) * 4) = 1;
        }
        iVar4 = iVar4 + 0x10;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
  }
  iVar4 = *(int *)(in_ECX + 0x6c);
  iVar6 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x70) - iVar4 & 0xfffffffcU)) {
    do {
      iVar8 = *(int *)(*(int *)(in_ECX + 0xb8) + iVar6 * 8);
      if (iVar8 != 0) {
        if (*(int *)(iVar4 + iVar6 * 4) == 1) {
          if (*(char *)(iVar8 + 0x142) != '\0') goto LAB_007c78a6;
          *(undefined1 *)(iVar8 + 0x142) = 1;
        }
        else {
          *(undefined1 *)(iVar8 + 0x142) = 0;
        }
        FUN_009a8550(iVar8);
      }
LAB_007c78a6:
      iVar4 = *(int *)(in_ECX + 0x6c);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(in_ECX + 0x70) - iVar4 >> 2);
  }
  iVar4 = *(int *)(in_ECX + 0x5c);
  local_1c = 0;
  if ((int)(*(int *)(in_ECX + 0x60) - iVar4 & 0xfffffffcU) < 1) {
LAB_007c79b3:
    iVar4 = *(int *)(in_ECX + 0x1ec);
    if (((iVar4 != 0) && (*(int *)(iVar4 + 0x20) != 0)) &&
       (*(char *)(*(int *)(iVar4 + 0x20) + 0x67) != '\0')) {
      FUN_00981220(iVar4);
    }
    ExceptionList = local_14;
    return;
  }
LAB_007c78d2:
  iVar4 = *(int *)(iVar4 + local_1c * 4);
  uVar2 = *(uint *)(iVar4 + 0x2c);
  iVar6 = *(int *)(iVar4 + 0x30);
  if (uVar2 < 0x1269) {
    if (DAT_01258a98 != 0) {
      for (piVar7 = *(int **)(*(int *)(DAT_01258a98 + 8) +
                             ((uVar2 * 0x10000 + iVar6) % *(uint *)(DAT_01258a98 + 4)) * 4);
          piVar7 != (int *)0x0; piVar7 = (int *)piVar7[1]) {
        if ((*(int *)(*piVar7 + 0xc) == iVar6) && (*(uint *)(*piVar7 + 8) == uVar2)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) goto LAB_007c7936;
      }
    }
LAB_007c7986:
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    if (DAT_01258a94 != 0) {
      for (piVar7 = *(int **)(*(int *)(DAT_01258a94 + 8) +
                             ((uVar2 * 0x10000 + iVar6) % *(uint *)(DAT_01258a94 + 4)) * 4);
          piVar7 != (int *)0x0; piVar7 = (int *)piVar7[1]) {
        if ((*(int *)(*piVar7 + 0xc) == iVar6) && (*(uint *)(*piVar7 + 8) == uVar2)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) goto LAB_007c7936;
      }
      goto LAB_007c7986;
    }
  }
  goto LAB_007c7988;
LAB_007c7936:
  iVar8 = *piVar7;
LAB_007c7988:
  *(int *)(iVar4 + 0x28) = iVar8;
  FUN_007ba410(*(undefined4 *)(*(int *)(in_ECX + 0x5c) + local_1c * 4),iVar8);
  iVar4 = *(int *)(in_ECX + 0x5c);
  local_1c = local_1c + 1;
  if (*(int *)(in_ECX + 0x60) - iVar4 >> 2 <= local_1c) goto LAB_007c79b3;
  goto LAB_007c78d2;
}

