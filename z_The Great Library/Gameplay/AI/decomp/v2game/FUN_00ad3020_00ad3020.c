// FUN_00ad3020 @ 00ad3020 body=[[00ad3020, 00ad3089]]


undefined4 FUN_00ad3020(short *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *in_ECX;
  short *psVar3;
  int iVar4;
  
  uVar1 = in_ECX[1];
  uVar2 = 0;
  if (uVar1 != 0) {
    psVar3 = (short *)*in_ECX;
    while (*psVar3 != *param_1) {
      uVar2 = uVar2 + 1;
      psVar3 = psVar3 + 1;
      if (uVar1 <= uVar2) {
        return 0;
      }
    }
    if (uVar2 != 0xffffffff) {
      if ((1 < uVar1) && (iVar4 = (uVar1 - uVar2) + -1, iVar4 != 0)) {
        psVar3 = (short *)*in_ECX + uVar2;
        FID_conflict__memcpy(psVar3,psVar3 + 1,iVar4 * 2);
      }
      in_ECX[1] = in_ECX[1] + -1;
      return 1;
    }
  }
  return 0;
}

