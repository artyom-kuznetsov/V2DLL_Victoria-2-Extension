// FUN_00b09030 @ 00b09030 body=[[00b09030, 00b09092]]


undefined4 FUN_00b09030(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int *in_ECX;
  int *piVar3;
  int iVar4;
  
  uVar1 = in_ECX[1];
  uVar2 = 0;
  if (uVar1 != 0) {
    piVar3 = (int *)*in_ECX;
    while (*piVar3 != *param_1) {
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
      if (uVar1 <= uVar2) {
        return 0;
      }
    }
    if (uVar2 != 0xffffffff) {
      if ((1 < uVar1) && (iVar4 = (uVar1 - uVar2) + -1, iVar4 != 0)) {
        piVar3 = (int *)*in_ECX + uVar2;
        FID_conflict__memcpy(piVar3,piVar3 + 1,iVar4 * 4);
      }
      in_ECX[1] = in_ECX[1] + -1;
      return 1;
    }
  }
  return 0;
}

