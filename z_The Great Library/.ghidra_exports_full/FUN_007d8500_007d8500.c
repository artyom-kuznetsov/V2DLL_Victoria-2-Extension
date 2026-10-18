// FUN_007d8500 @ 007d8500 body=[[007d8500, 007d85c8]]


/* WARNING: Removing unreachable block (ram,0x007d8539) */
/* WARNING: Removing unreachable block (ram,0x007d8540) */

void FUN_007d8500(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_ECX;
  int *unaff_ESI;
  
  uVar2 = (unaff_ESI[1] - *unaff_ESI) / 0xc;
  if (uVar2 < 0xea61) {
    if (uVar2 < 60000) {
      FUN_007d8770(60000 - uVar2);
      FUN_007d8c70(in_ECX);
      unaff_ESI[1] = unaff_ESI[1] + (60000 - (unaff_ESI[1] - *unaff_ESI) / 0xc) * 0xc;
    }
  }
  else {
    iVar1 = *unaff_ESI + 720000;
    if (iVar1 != unaff_ESI[1]) {
      unaff_ESI[1] = iVar1;
      return;
    }
  }
  return;
}

