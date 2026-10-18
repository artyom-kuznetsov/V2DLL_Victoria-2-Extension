// FUN_005b5710 @ 005b5710 body=[[005b5710, 005b579e]]


undefined4 FUN_005b5710(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int *unaff_EDI;
  
  if (((((*(int *)(in_EAX + 0x10c) == 0) &&
        (cVar2 = (**(code **)(*unaff_EDI + 0x38))(), cVar2 != '\0')) &&
       ((char)unaff_EDI[0x59] == '\0')) &&
      ((unaff_EDI[0x3b] < 1 && (cVar2 = FUN_005cbd70(), cVar2 != '\0')))) &&
     ((unaff_EDI[0x31] != *(int *)(in_EAX + 0x134) &&
      (cVar2 = FUN_005cc200(unaff_EDI), cVar2 != '\0')))) {
    if ((((*(int *)(in_EAX + 0x110) != 0) &&
         (iVar1 = *(int *)(*(int *)(in_EAX + 0x110) + 0x10),
         0 < (int)(*(int *)(iVar1 + 0x38) - *(int *)(iVar1 + 0x34) & 0xfffffff8U))) &&
        (cVar2 = FUN_00416e40(), cVar2 != '\0')) && (cVar2 = FUN_00416e40(), cVar2 == '\0')) {
      return 0;
    }
    return 3;
  }
  return 0;
}

