// FUN_00906b40 @ 00906b40 body=[[00906b40, 00906c66]]


bool FUN_00906b40(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int in_ECX;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b58836;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_01319730 == 0) {
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af(0x38);
    local_c = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_008750a0(iVar3);
    }
    local_c = 0xffffffff;
    FUN_00876010(uVar4);
  }
  piVar5 = (int *)FUN_005c2ad0(in_ECX + 0x3c);
  if (piVar5 == (int *)0x0) {
    if (DAT_01319730 == 0) {
      iVar3 = FUN_00aae9af(0x38);
      local_c = 1;
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_008750a0(iVar3);
      }
      local_c = 0xffffffff;
      FUN_00876010(uVar4);
    }
    piVar5 = (int *)FUN_005c2ad0(in_ECX + 0x3c);
    if (piVar5 == (int *)0x0) {
      ExceptionList = local_14;
      return false;
    }
  }
  iVar3 = in_ECX + 0x58;
  *(int *)(in_ECX + 0x7c) = iVar3;
  iVar1 = *(int *)(in_ECX + 0x78);
  if (iVar1 != 0) {
    *(int *)(in_ECX + 0x98) = iVar1;
    *(int *)(in_ECX + 0x9c) = iVar1;
  }
  cVar2 = (**(code **)(*piVar5 + 0x18))();
  if ((cVar2 != '\0') && (cVar2 = (**(code **)(piVar5[9] + 0x18))(iVar3), cVar2 != '\0')) {
    cVar2 = (**(code **)(piVar5[0x10] + 0x18))(iVar3);
    ExceptionList = pvStack_18;
    return cVar2 != '\0';
  }
  ExceptionList = local_14;
  return false;
}

