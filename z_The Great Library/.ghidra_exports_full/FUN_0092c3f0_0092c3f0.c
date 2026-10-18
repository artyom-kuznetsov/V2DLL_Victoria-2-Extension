// FUN_0092c3f0 @ 0092c3f0 body=[[0092c3f0, 0092c4e3]]


void FUN_0092c3f0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  
  switch(param_2) {
  case 0x337:
    puVar1 = (undefined4 *)FUN_0055c6c0();
    *(undefined4 *)(in_ECX + 8) = *puVar1;
    *(undefined4 *)(in_ECX + 0xc) = puVar1[1];
    return;
  case 0x338:
    puVar1 = (undefined4 *)FUN_0055c6c0();
    *(undefined4 *)(in_ECX + 0x10) = *puVar1;
    *(undefined4 *)(in_ECX + 0x14) = puVar1[1];
    return;
  case 0x339:
    FUN_009885d0();
    puVar1 = (undefined4 *)FUN_0043ac50();
    *(undefined4 *)(in_ECX + 0x18) = *puVar1;
    return;
  case 0x33a:
    FUN_009885d0();
    puVar1 = (undefined4 *)FUN_0043ac50();
    *(undefined4 *)(in_ECX + 0x1c) = *puVar1;
    return;
  case 0x33f:
    *(bool *)(in_ECX + 0x20) = *(int *)(param_1 + 0x228) == 0x29f;
  }
  return;
}

