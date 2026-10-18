// FUN_00471480 @ 00471480 body=[[00471480, 00471521]]


void FUN_00471480(int param_1,int param_2)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_2 < 0x944) {
    if (param_2 == 0x943) {
      *(bool *)(in_ECX + 0xc) = *(int *)(param_1 + 0x228) == 0x29f;
      return;
    }
    if (param_2 == 0x2f9) {
      local_c = 0;
      local_8 = 0;
      FUN_009a19f0(param_1,&local_c);
      FUN_00868690();
      return;
    }
    if (param_2 == 0x6e6) {
      uVar1 = FUN_00aaf0c5(param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 8) = uVar1;
      return;
    }
  }
  else if (param_2 == 0x9aa) {
    *(bool *)(in_ECX + 0x20) = *(int *)(param_1 + 0x228) == 0x29f;
  }
  return;
}

