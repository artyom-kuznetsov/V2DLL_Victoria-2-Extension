// FUN_009dc7e0 @ 009dc7e0 body=[[009dc7e0, 009dc858] [009dc860, 009dc8b1]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

uint FUN_009dc7e0(int param_1)

{
  int iVar1;
  size_t sVar2;
  int *in_ECX;
  int iVar3;
  uint uVar4;
  byte abStack_418 [1020];
  undefined4 uStack_1c;
  int local_8;
  
  uVar4 = 0;
  local_8 = 0;
  if (param_1 == -1) {
    uStack_1c = 0x9dc7fe;
    param_1 = (**(code **)(*in_ECX + 0x38))();
  }
  iVar3 = 0;
  uStack_1c = 0x9dc80d;
  iVar1 = _feof((FILE *)in_ECX[0xd]);
  for (; (iVar1 == 0 && (local_8 < param_1)); local_8 = local_8 + sVar2) {
    sVar2 = param_1 - local_8;
    if (0x400 < (int)sVar2) {
      sVar2 = 0x400;
    }
    sVar2 = _fread(abStack_418,1,sVar2,(FILE *)in_ECX[0xd]);
    if (sVar2 == 0) break;
    iVar1 = 0;
    if (0 < (int)sVar2) {
      do {
        iVar3 = iVar3 + (uint)abStack_418[iVar1];
        if (0xffff < iVar3) {
          iVar3 = iVar3 + -0xffff;
        }
        uVar4 = uVar4 + iVar3;
        if (0xffff < (int)uVar4) {
          uVar4 = uVar4 - 0xffff;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)sVar2);
    }
    iVar1 = _feof((FILE *)in_ECX[0xd]);
  }
  return iVar3 << 0x10 | uVar4;
}

