// FUN_00957dd0 @ 00957dd0 body=[[00957dd0, 00957e91]]


int FUN_00957dd0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int unaff_EDI;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5856b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if ((*(char *)(*(int *)(in_ECX + 0x68) + 0x39c) != '\0') &&
     (ExceptionList = &local_14, *(int *)(in_ECX + 0x1d4) == 0)) {
    ExceptionList = &local_14;
    iVar1 = FUN_00aae9af(0x100);
    local_c = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00954910(iVar1);
    }
    *(undefined4 *)(in_ECX + 0x1d4) = uVar2;
  }
  local_c = 0xffffffff;
  if ((*(char *)(*(int *)(in_ECX + 0x68) + 0x39c) != '\0') &&
     (*(int *)(*(int *)(in_ECX + 0x1d4) + 0xb0) == 0)) {
    FUN_009599a0(in_ECX,unaff_EDI,0);
  }
  FUN_00957af0();
  iVar1 = *(int *)(unaff_EDI + ((*(int *)(in_ECX + 0xc) + 0x389U) % 1000) * 4);
  *(int *)(in_ECX + 600) = iVar1 % 1000;
  ExceptionList = local_14;
  return iVar1 / 1000;
}

