// FUN_0060d0f0 @ 0060d0f0 body=[[0060d0f0, 0060d118] [0060d120, 0060d18c]]


/* WARNING: Removing unreachable block (ram,0x0060d117) */
/* WARNING: Removing unreachable block (ram,0x0060d120) */
/* WARNING: Removing unreachable block (ram,0x0060d13c) */

void FUN_0060d0f0(void)

{
  uint uVar1;
  int iVar2;
  int *unaff_ESI;
  undefined4 local_8;
  
  uVar1 = unaff_ESI[1] - *unaff_ESI >> 4;
  if (uVar1 < 0x48) {
    if (0x46 < uVar1) {
      return;
    }
    FUN_009d95b0();
    FUN_009d96d0(local_8);
    iVar2 = (0x47 - (unaff_ESI[1] - *unaff_ESI >> 4)) * 0x10 + unaff_ESI[1];
  }
  else {
    iVar2 = *unaff_ESI + 0x470;
    if (iVar2 == unaff_ESI[1]) {
      return;
    }
  }
  unaff_ESI[1] = iVar2;
  return;
}

