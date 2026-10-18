// FUN_009d9cf0 @ 009d9cf0 body=[[009d9cf0, 009d9d74]]


undefined4 FUN_009d9cf0(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int *unaff_ESI;
  int unaff_EDI;
  short local_14 [8];
  
  cVar1 = (**(code **)(*unaff_ESI + 0xc))(local_14,0xe);
  if (cVar1 != '\0') {
    if (local_14[0] == 0x4d42) {
      cVar1 = (**(code **)(*unaff_ESI + 0xc))();
      if (cVar1 == '\0') {
        (**(code **)(*unaff_ESI + 0x28))(0);
        return 0;
      }
      uVar2 = *(int *)(unaff_EDI + 4) + 3;
      uVar3 = uVar2 & 0xfffffffc;
      if (*(short *)(unaff_EDI + 0xe) == 1) {
        uVar3 = (int)uVar2 >> 3;
      }
      if (*(int *)(unaff_EDI + 0x14) == 0) {
        *(uint *)(unaff_EDI + 0x14) = *(int *)(unaff_EDI + 8) * uVar3;
      }
      (**(code **)(*unaff_ESI + 0x28))(0);
      return 1;
    }
    (**(code **)(*unaff_ESI + 0x28))(0);
  }
  return 0;
}

