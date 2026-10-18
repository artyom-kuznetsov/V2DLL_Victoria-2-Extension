// FUN_005c92a0 @ 005c92a0  (requested 005C92A0, first bytes: 55 8B EC 83 EC 0C 83 7E)


undefined4 * FUN_005c92a0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *unaff_ESI;
  undefined1 local_8 [4];
  
  iVar2 = unaff_ESI[0x1d];
  *param_1 = 0;
  if ((iVar2 == 0) && (*(char *)(DAT_012588e8 + 0xd1c) != '\0')) {
    FUN_005d0670(unaff_ESI,local_8);
    cVar1 = (**(code **)(*unaff_ESI + 0x3c))();
    if (cVar1 != '\0') {
      (**(code **)(*unaff_ESI + 0x30))();
      FUN_005d7e20();
    }
    if (((char)unaff_ESI[0x41] == '\0') &&
       ((cVar1 = (**(code **)(*unaff_ESI + 0x38))(), cVar1 == '\0' ||
        (iVar2 = (**(code **)(*unaff_ESI + 0x2c))(), *(int *)(iVar2 + 0x1b4) == 0)))) {
      FUN_005c8970(unaff_ESI,local_8,1);
    }
  }
  cVar1 = (**(code **)(*unaff_ESI + 0x3c))();
  if ((cVar1 != '\0') && (iVar2 = unaff_ESI[0x37], *(char *)(*(int *)(iVar2 + 0x5c) + 0x2a) == '\0')
     ) {
    cVar1 = FUN_004b7ed0(unaff_ESI + 0x30);
    if (cVar1 == '\0') {
      if ((*(char *)(*(int *)(iVar2 + 0x5c) + 0xd9) != '\0') &&
         (cVar1 = FUN_00539260(iVar2), cVar1 != '\0')) {
        return param_1;
      }
      iVar2 = (**(code **)(*unaff_ESI + 0x30))();
      iVar2 = *(int *)(iVar2 + 0x1b8);
      iVar3 = (**(code **)(*unaff_ESI + 0x30))();
      *(int *)(iVar3 + 0x1b8) = iVar2 + 1;
    }
    return param_1;
  }
  return param_1;
}

