// FUN_005164c0 @ 005164c0 body=[[005164c0, 005165b3]]


void FUN_005164c0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_ESI;
  int *unaff_EDI;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3ff88;
  local_10 = ExceptionList;
  if ((*(int *)(unaff_ESI + 0x208) == 0) &&
     (*(int *)(DAT_012588e8 + 0xb60) != *(int *)(unaff_ESI + 0x20))) {
    if (*(char *)(DAT_012588e8 + 0xd11) != '\0') {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      local_8 = 0;
      ExceptionList = &local_10;
      (**(code **)(*unaff_EDI + 0x80))(&local_20);
      (**(code **)*unaff_EDI)(1);
      FUN_0042b9f0(&local_20);
      ExceptionList = local_10;
      return;
    }
  }
  else {
    ExceptionList = &local_10;
    unaff_EDI[7] = *(int *)(DAT_012588e8 + 0xb0c);
    iVar1 = *(int *)(unaff_ESI + 0xce8);
    puVar3 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = unaff_EDI;
      puVar3[1] = iVar1;
      puVar3[2] = 0;
      *(undefined1 *)(puVar3 + 3) = 0;
    }
    iVar2 = *(int *)(unaff_ESI + 0xcec);
    *(undefined4 **)(unaff_ESI + 0xce8) = puVar3;
    *(int *)(unaff_ESI + 0xcec) = iVar2 + 1;
    if (iVar2 != 0) {
      *(undefined4 **)(iVar1 + 8) = puVar3;
      ExceptionList = local_10;
      return;
    }
    *(undefined4 **)(unaff_ESI + 0xce4) = puVar3;
  }
  ExceptionList = local_10;
  return;
}

