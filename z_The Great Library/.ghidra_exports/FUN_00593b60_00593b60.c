// FUN_00593b60 @ 00593b60  (requested 00593B60, first bytes: 55 8B EC 64 A1 00 00 00)


int * FUN_00593b60(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = DAT_0125fdd8;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b524bb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *unaff_EDI = 0;
  if (iVar1 == 0) {
    iVar1 = FUN_00aae9af(0x1c);
    local_8 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_008b0060();
    }
    FUN_005c2810(uVar2);
    iVar1 = DAT_0125fdd8;
  }
  iVar3 = 0;
  iVar4 = *(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc) >> 2;
  if (0 < iVar4) {
    iVar1 = *(int *)(iVar1 + 0xc);
    do {
      if (*(int *)(*(int *)(iVar1 + iVar3 * 4) + 0x34) == param_2) {
        *unaff_EDI = *unaff_EDI + *(int *)(*(int *)(param_1 + 0x44) + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  ExceptionList = local_10;
  return unaff_EDI;
}

