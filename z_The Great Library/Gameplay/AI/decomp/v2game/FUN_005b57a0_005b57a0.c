// FUN_005b57a0 @ 005b57a0 body=[[005b57a0, 005b5836]]


void FUN_005b57a0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int *unaff_ESI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b5b6e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = (**(code **)(*unaff_ESI + 0x38))();
  if (((cVar1 != '\0') && (iVar2 = (**(code **)(*unaff_ESI + 0x2c))(), *(int *)(iVar2 + 0x1b4) != 0)
      ) && (iVar2 = (**(code **)(*unaff_ESI + 0x2c))(), 0 < *(int *)(*(int *)(iVar2 + 0x1b4) + 0xec)
           )) {
    ExceptionList = local_10;
    return;
  }
  if ((in_ECX != 0) && (*(int *)(in_ECX + 0x58) != 0)) {
    if ((unaff_ESI[0x1d] == 0) || (*(int *)(unaff_ESI[0x1d] + 0x18) != in_ECX)) {
      FUN_005b55c0(unaff_ESI);
    }
    if ((unaff_ESI[0x1d] == 0) || (*(int *)(unaff_ESI[0x1d] + 0x18) != in_ECX)) {
      FUN_005b5620(param_1,in_ECX,unaff_ESI);
    }
  }
  ExceptionList = local_10;
  return;
}

