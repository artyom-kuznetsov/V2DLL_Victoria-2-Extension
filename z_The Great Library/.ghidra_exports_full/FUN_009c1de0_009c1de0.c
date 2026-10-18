// FUN_009c1de0 @ 009c1de0 body=[[009c1de0, 009c1e5c]]


undefined4 FUN_009c1de0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *in_ECX;
  uint uVar4;
  
  uVar1 = param_1[1];
  if ((uVar1 - *param_1 & 0xffffffe0) != 0) {
    uVar4 = *in_ECX;
    if ((*(uint *)in_ECX[1] <= uVar4) && (uVar4 < ((uint *)in_ECX[1])[1])) {
      uVar3 = uVar4;
      if (uVar4 != uVar1 - 0x20) {
        while (uVar2 = uVar3 + 0x20, uVar2 != uVar1) {
          FUN_00408ed0(uVar2,0,0xffffffff);
          *(undefined4 *)(uVar4 + 0x1c) = *(undefined4 *)(uVar3 + 0x3c);
          uVar4 = uVar4 + 0x20;
          uVar3 = uVar2;
        }
        FUN_009e6c70();
        return 1;
      }
      FUN_009e6c70();
      return 1;
    }
  }
  return 0;
}

