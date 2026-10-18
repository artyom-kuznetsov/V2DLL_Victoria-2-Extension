// FUN_00ad4780 @ 00ad4780 body=[[00ad4780, 00ad47d7]]


int FUN_00ad4780(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  
  iVar4 = *(int *)(in_ECX + 0x104);
  if (iVar4 == 0) {
    uVar1 = *(uint *)(in_ECX + 0x84);
    uVar2 = (*(code *)PTR_FUN_00f01b08)(uVar1 * 2,0x191,4,0,"..\\..\\Source\\Actor.cpp",0xfd);
    *(undefined4 *)(in_ECX + 0x104) = uVar2;
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        *(short *)(*(int *)(in_ECX + 0x104) + uVar3 * 2) = (short)uVar3;
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
    iVar4 = *(int *)(in_ECX + 0x104);
  }
  return iVar4;
}

