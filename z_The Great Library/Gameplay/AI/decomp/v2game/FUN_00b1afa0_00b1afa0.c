// FUN_00b1afa0 @ 00b1afa0 body=[[00b1afa0, 00b1b007]]


undefined4 FUN_00b1afa0(ushort param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *in_ECX;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint local_4;
  
  uVar6 = 0xffffffff;
  uVar4 = 0;
  local_4 = 0xffff;
  if (in_ECX[1] != 0) {
    iVar5 = 0;
    do {
      uVar3 = (uint)param_1;
      if (uVar4 != uVar3) {
        uVar3 = *in_ECX;
        puVar1 = (uint *)(iVar5 + uVar3);
        iVar2 = iVar5 + uVar3;
        if ((*puVar1 < uVar6) && (uVar3 = 0, *(short *)(iVar2 + 8) == -1)) {
          uVar3 = uVar4 & 0xffff;
          uVar6 = *puVar1;
          local_4 = uVar3;
        }
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x10;
    } while (uVar4 < in_ECX[1]);
    return CONCAT22((short)(uVar3 >> 0x10),(undefined2)local_4);
  }
  return 0xffff;
}

