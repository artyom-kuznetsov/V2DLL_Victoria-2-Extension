// FUN_005183f0 @ 005183f0 body=[[005183f0, 00518618]]


void FUN_005183f0(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *unaff_ESI;
  int unaff_EDI;
  
  iVar4 = param_2;
  iVar3 = *(int *)(*(int *)(unaff_EDI + 0xbe8) + param_2 * 4);
  iVar2 = *(int *)(iVar3 + 0x24);
  *unaff_ESI = 0;
  if (iVar2 != 0) {
    FUN_00401000(0x437a8000);
    iVar2 = FUN_00b31c00();
    *unaff_ESI = iVar2;
  }
  if (*(int *)(iVar3 + 0x34) != 0) {
    FUN_00401000(0xc1180000);
    iVar2 = FUN_00b31c00();
    *unaff_ESI = *unaff_ESI + iVar2;
  }
  if (((*(char *)(iVar4 + *(int *)(unaff_EDI + 0xd08)) != '\0') &&
      (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar4 * 4) + 0x67c) == '\0')) &&
     (*(char *)(unaff_EDI + 0x67c) == '\0')) {
    FUN_00401000(0x424a0000);
    iVar2 = FUN_00b31c00();
    *unaff_ESI = *unaff_ESI + iVar2;
  }
  if (*(int *)(iVar3 + 0x28) != 0) {
    FUN_00401000(0x42a10000);
    iVar2 = FUN_00b31c00();
    *unaff_ESI = *unaff_ESI + iVar2;
  }
  if (*(char *)(iVar3 + 0x60) != '\0') {
    FUN_00401000(0x41cc0000);
    iVar2 = FUN_00b31c00();
    *unaff_ESI = *unaff_ESI + iVar2;
  }
  if ((0 < *(int *)(iVar3 + 0x3c)) &&
     (cVar1 = FUN_0092ede0(iVar3,unaff_EDI + 0x1c,&param_1), iVar4 = param_2, cVar1 != '\0')) {
    FUN_00401000(0xc395c001);
    iVar3 = FUN_00b31c00();
    *unaff_ESI = *unaff_ESI + iVar3;
    iVar4 = param_2;
  }
  if (100000 < *(int *)(*(int *)(*(int *)(unaff_EDI + 0xbe8) + iVar4 * 4) + 0x3c)) {
    FUN_00401000(0x3f000000);
    iVar3 = FUN_00b31c00();
    if (iVar3 < *unaff_ESI) {
      *unaff_ESI = 0;
    }
  }
  if ((((*(int *)(unaff_EDI + 0x20) <
         *(int *)(DAT_012588e8 + 0xaf0) - *(int *)(DAT_012588e8 + 0xaec) >> 2) &&
       (iVar3 = *(int *)(DAT_012588e8 + 0xaec),
       *(int *)(iVar3 + *(int *)(unaff_EDI + 0x20) * 4) == 0)) &&
      ((iVar4 < *(int *)(DAT_012588e8 + 0xaf0) - iVar3 >> 2 && (*(int *)(iVar3 + iVar4 * 4) == 0))))
     && (((*(int *)(unaff_EDI + 0xcfc) == iVar4 ||
          (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar4 * 4) + 0xcfc) ==
           *(int *)(unaff_EDI + 0x20))) && (*unaff_ESI = *unaff_ESI + 2000, *unaff_ESI < 2000)))) {
    *unaff_ESI = 2000;
    return;
  }
  return;
}

