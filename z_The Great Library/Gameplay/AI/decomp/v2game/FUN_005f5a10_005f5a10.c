// FUN_005f5a10 @ 005f5a10 body=[[005f5a10, 005f5a5e]]


void FUN_005f5a10(char param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (param_1 == '\0') {
    FUN_004b9580(*(undefined4 *)(in_ECX + 0xc),*(undefined4 *)(in_ECX + 0x14));
  }
  else {
    uVar1 = FUN_004b9520(*(undefined4 *)(in_ECX + 0xc));
    *(undefined4 *)(in_ECX + 0x14) = uVar1;
    FUN_004b9580(*(undefined4 *)(in_ECX + 0xc),*(undefined4 *)(in_ECX + 0x10));
  }
  return;
}

