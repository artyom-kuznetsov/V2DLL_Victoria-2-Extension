// FUN_00b1b3c0 @ 00b1b3c0 body=[[00b1b3c0, 00b1b3cc] [00b1b3d0, 00b1b41f]]


undefined4 FUN_00b1b3c0(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int *in_ECX;
  uint uVar3;
  
  piVar2 = param_1;
  uVar3 = 0;
  do {
    uVar1 = *(uint *)(uVar3 + *in_ECX);
    param_1 = (int *)((uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 |
                     (uVar1 & 0xff00 | uVar1 << 0x10) << 8);
    (**(code **)(*piVar2 + 0xc))(&param_1,4);
    uVar3 = uVar3 + 0x10;
  } while (uVar3 < 0x1020);
  return 1;
}

