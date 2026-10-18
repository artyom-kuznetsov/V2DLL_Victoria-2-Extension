// FUN_009dcc20 @ 009dcc20 body=[[009dcc20, 009dcd39]]


void FUN_009dcc20(int param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  
  switch(param_2) {
  case 0x1d:
    FUN_009a1750(in_ECX + 0x24,0);
    return;
  case 0x2e:
    FUN_009a1e10();
    *(undefined4 *)(in_ECX + 100) = 0;
    *(undefined4 *)(in_ECX + 0x68) = 0;
    return;
  case 0x4b:
    FUN_009a1e10();
    *(int *)(in_ECX + 100) = *(int *)(in_ECX + 100) + *(int *)(in_ECX + 0x5c);
    *(undefined4 *)(in_ECX + 0x5c) = 0;
    *(int *)(in_ECX + 0x68) = *(int *)(in_ECX + 0x68) + *(int *)(in_ECX + 0x60);
    *(undefined4 *)(in_ECX + 0x60) = 0;
    return;
  case 0x55:
    (**(code **)(*(int *)(in_ECX + 8) + 0xc))(param_1);
    return;
  case 0x71:
    iVar1 = *(int *)(param_1 + 0x228);
    if (iVar1 == 0x74) {
      *(undefined4 *)(in_ECX + 0x6c) = 2;
      return;
    }
    if (iVar1 == 0x73) {
      *(undefined4 *)(in_ECX + 0x6c) = 1;
      return;
    }
    if (iVar1 == 0x72) {
      *(undefined4 *)(in_ECX + 0x6c) = 0;
    }
    break;
  case 0x8c:
    FUN_009a1750(in_ECX + 0x40,0);
    return;
  }
  return;
}

