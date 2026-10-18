// FUN_00794350 @ 00794350 body=[[00794350, 0079443e] [00794442, 007945c2]]


/* WARNING: Removing unreachable block (ram,0x00794435) */

void FUN_00794350(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  int local_4c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar4 = DAT_01258a98;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4b4de;
  local_14 = ExceptionList;
  iVar1 = DAT_01258a98;
  if (0x1268 < *(uint *)(in_ECX + 0x54)) {
    iVar1 = DAT_01258a94;
  }
  ExceptionList = &local_14;
  if ((iVar1 == 0) || (ExceptionList = &local_14, local_4c = FUN_009c1d40(), local_4c == 0)) {
    local_4c = 0;
  }
  else {
    local_4c = local_4c + -8;
  }
  *(int *)(in_ECX + 0x50) = local_4c;
  if (0x1268 < *(uint *)(in_ECX + 0x2c)) {
    iVar4 = DAT_01258a94;
  }
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_009c1d40();
  }
  *(int *)(in_ECX + 0x28) = iVar4;
  if ((local_4c != 0) && (iVar4 != 0)) {
    FUN_00409350();
    local_c = 0;
    piVar3 = (int *)FUN_009c7290();
    (**(code **)(*piVar3 + 0x60))();
    puStack_10 = (undefined1 *)0xffffffff;
    piVar3 = *(int **)(DAT_012588e8 + 0xb24);
    cVar2 = (**(code **)(*(int *)piVar3[7] + 0x28))();
    if (cVar2 == '\0') {
      iVar4 = FUN_00aae9af();
      local_c = 2;
      if (iVar4 != 0) {
        FUN_005e1ee0(iVar4);
      }
      local_c = 0xffffffff;
      iVar4 = (**(code **)(*piVar3 + 0x44))();
      (**(code **)(**(int **)(iVar4 + 0x38) + 0x18))();
    }
    else {
      iVar1 = *(int *)(*(int *)(iVar4 + 0x38) + 0x48);
      if (*(int *)(iVar4 + 0x74) == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)(*(int *)(iVar4 + 0x74) + 0x38);
      }
      piVar5 = (int *)*piVar5;
      if (piVar5 != (int *)0x0) {
        do {
          iVar4 = *piVar5;
          piVar5 = (int *)piVar5[2];
          if (*(int *)(*(int *)(iVar4 + 0x38) + 0x48) == iVar1) {
            iVar4 = FUN_00aae9af();
            local_c = 1;
            if (iVar4 != 0) {
              FUN_005e1ee0(iVar4);
            }
            local_c = 0xffffffff;
            iVar4 = (**(code **)(*piVar3 + 0x44))();
            (**(code **)(**(int **)(iVar4 + 0x38) + 0x18))();
          }
        } while (piVar5 != (int *)0x0);
        ExceptionList = local_14;
        return;
      }
    }
  }
  ExceptionList = local_14;
  return;
}

