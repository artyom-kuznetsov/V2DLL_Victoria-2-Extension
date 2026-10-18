// FUN_00a3f120 @ 00a3f120 body=[[00a3f120, 00a3f151]]


uint FUN_00a3f120(void)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *unaff_EDI;
  
  uVar3 = 0;
  uVar2 = 0x811c9dc5;
  if (unaff_EDI[4] != 0) {
    do {
      puVar4 = unaff_EDI;
      if (0xf < (uint)unaff_EDI[5]) {
        puVar4 = (undefined4 *)*unaff_EDI;
      }
      pcVar1 = (char *)((int)puVar4 + uVar3);
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 * 0x1000193 ^ (int)*pcVar1;
    } while (uVar3 < (uint)unaff_EDI[4]);
  }
  return uVar2;
}

