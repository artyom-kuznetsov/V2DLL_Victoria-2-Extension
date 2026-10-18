// FUN_00a48fb0 @ 00a48fb0 body=[[00a48fb0, 00a4903d]]


void FUN_00a48fb0(int param_1)

{
  int iVar1;
  int in_ECX;
  undefined4 uVar2;
  
  iVar1 = FUN_009bcbf0(in_ECX + 0x5c,1);
  *(int *)(in_ECX + 0x94) = iVar1;
  if (-1 < iVar1) {
    if ((iVar1 == -1) || (9999 < iVar1)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 * 0x2c + 0x15c + param_1);
    }
    *(undefined4 *)(in_ECX + 0x98) = uVar2;
    if (iVar1 < 10000) {
      uVar2 = *(undefined4 *)(iVar1 * 0x2c + 0x180 + param_1);
      *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(iVar1 * 0x2c + 0x17c + param_1);
      *(undefined4 *)(in_ECX + 0x88) = uVar2;
      return;
    }
    *(undefined4 *)(in_ECX + 0x84) = 0;
    *(undefined4 *)(in_ECX + 0x88) = 0;
  }
  return;
}

