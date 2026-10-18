// FUN_004278c0 @ 004278c0 body=[[004278c0, 00427a69]]


undefined4 FUN_004278c0(void)

{
  char cVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4d940;
  local_10 = ExceptionList;
  iVar2 = *(int *)(in_ECX + 0x78);
  ExceptionList = &local_10;
  if ((*(int *)(in_ECX + 0x7c) - iVar2 & 0xfffffff8U) != 0) {
    if (*(int *)(in_ECX + 0x60) == 0) {
      ExceptionList = &local_10;
      cVar1 = FUN_00425e20(0);
      if (cVar1 == '\0') {
        FUN_00427b70(iVar2,in_ECX + 0x1c,0);
      }
      else {
        FUN_00427a70(in_ECX + 0x1c);
      }
    }
    else {
      ExceptionList = &local_10;
      if ((*(int *)(in_ECX + 0x60) == *(int *)(iVar2 + 4)) &&
         (ExceptionList = &local_10, *(char *)(in_ECX + 100) == '\0')) {
        ExceptionList = &local_10;
        FUN_00424bc0(*(undefined4 *)(DAT_012588e8 + 0xb0c),*(undefined4 *)(in_ECX + 0x1c),
                     *(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x5c),
                     *(undefined4 *)(in_ECX + 0x60));
        local_8 = 0;
        cVar1 = FUN_00911760(0);
        if (cVar1 != '\0') {
          ExceptionList = local_10;
          return 1;
        }
        FUN_00427b70(in_ECX + 0x5c,in_ECX + 0x1c,0);
        local_8 = 0xffffffff;
      }
    }
  }
  iVar2 = *(int *)(in_ECX + 0x68);
  if ((*(int *)(in_ECX + 0x6c) - iVar2 & 0xfffffff8U) != 0) {
    if (*(int *)(in_ECX + 0x60) == 0) {
      cVar1 = FUN_00425e20(1);
      if (cVar1 != '\0') {
        FUN_00427a70(in_ECX + 0x14);
        ExceptionList = local_10;
        return 0;
      }
    }
    else {
      if (*(int *)(in_ECX + 0x60) != *(int *)(iVar2 + 4)) {
        ExceptionList = local_10;
        return 0;
      }
      if (*(char *)(in_ECX + 100) == '\0') {
        ExceptionList = local_10;
        return 0;
      }
      iVar2 = in_ECX + 0x5c;
      FUN_00424bc0(*(undefined4 *)(DAT_012588e8 + 0xb0c),*(undefined4 *)(in_ECX + 0x14),
                   *(undefined4 *)(in_ECX + 0x18),*(undefined4 *)(in_ECX + 0x5c),
                   *(undefined4 *)(in_ECX + 0x60));
      local_8 = 1;
      cVar1 = FUN_00911760(0);
      if (cVar1 != '\0') {
        ExceptionList = local_10;
        return 1;
      }
    }
    FUN_00427b70(iVar2,in_ECX + 0x14,0);
  }
  ExceptionList = local_10;
  return 0;
}

