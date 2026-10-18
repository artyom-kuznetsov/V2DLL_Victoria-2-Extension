// FUN_009939a0 @ 009939a0 body=[[009939a0, 00993a71]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

uint FUN_009939a0(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  int iVar4;
  byte abStack_40018 [262144];
  int local_8;
  
  uVar3 = 0;
  local_8 = 0;
  if (param_1 == -1) {
    param_1 = (**(code **)(*in_ECX + 0x38))();
  }
  iVar4 = 0;
  (**(code **)(*in_ECX + 0x30))();
  iVar1 = PHYSFS_eof(in_ECX[0xc]);
  for (; (iVar1 == 0 && (local_8 < param_1)); local_8 = local_8 + iVar2) {
    iVar1 = param_1 - local_8;
    if (0x40000 < iVar1) {
      iVar1 = 0x40000;
    }
    iVar2 = PHYSFS_read(in_ECX[0xc],abStack_40018,1,iVar1);
    if (iVar2 < 1) break;
    if (0 < iVar2) {
      iVar1 = 0;
      do {
        iVar4 = iVar4 + (uint)abStack_40018[iVar1];
        if (0xffff < iVar4) {
          iVar4 = iVar4 + -0xffff;
        }
        uVar3 = uVar3 + iVar4;
        if (0xffff < (int)uVar3) {
          uVar3 = uVar3 - 0xffff;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar2);
    }
    iVar1 = PHYSFS_eof(in_ECX[0xc]);
  }
  return iVar4 << 0x10 | uVar3;
}

