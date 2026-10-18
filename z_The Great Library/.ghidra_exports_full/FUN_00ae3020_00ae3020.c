// FUN_00ae3020 @ 00ae3020 body=[[00ae3020, 00ae30a7]]


undefined4 FUN_00ae3020(short *param_1)

{
  short *psVar1;
  uint uVar2;
  undefined4 *in_ECX;
  short *psVar3;
  uint uVar4;
  
  uVar2 = 0;
  if (*(ushort *)(in_ECX + 1) != 0) {
    psVar1 = (short *)*in_ECX;
    psVar3 = psVar1;
    while (*psVar3 != *param_1) {
      uVar2 = uVar2 + 1;
      psVar3 = psVar3 + 1;
      if (*(ushort *)(in_ECX + 1) <= uVar2) {
        return 0;
      }
    }
    if ((short)uVar2 != -1) {
      uVar4 = (*(ushort *)(in_ECX + 1) - uVar2) - 1;
      if ((short)uVar4 != 0) {
        FID_conflict__memcpy
                  (psVar1 + (uVar2 & 0xffff),psVar1 + (uVar2 + 1 & 0xffff),(uVar4 & 0xffff) * 2);
      }
      *(short *)(in_ECX + 1) = *(short *)(in_ECX + 1) + -1;
      return 1;
    }
  }
  return 0;
}

