// FUN_00ad4ad0 @ 00ad4ad0 body=[[00ad4ad0, 00ad4b06]]


undefined4 FUN_00ad4ad0(void)

{
  uint uVar1;
  char cVar2;
  int in_ECX;
  uint uVar3;
  
  uVar1 = *(uint *)(in_ECX + 0x84);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      cVar2 = FUN_00ae8b70();
      if (cVar2 != '\0') {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}

