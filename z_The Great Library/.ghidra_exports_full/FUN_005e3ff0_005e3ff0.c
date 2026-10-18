// FUN_005e3ff0 @ 005e3ff0 body=[[005e3ff0, 005e4087]]


void FUN_005e3ff0(int param_1,int param_2)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (param_2 < 0x9aa) {
    if (param_2 == 0x9a9) {
      uVar1 = FUN_00aaf0c5(param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 0x8c) = uVar1;
      return;
    }
    if (param_2 == 0x2f4) {
      FUN_0058a430();
      return;
    }
    if (param_2 == 0x2f9) {
      FUN_0072d580();
      return;
    }
  }
  else if (param_2 == 0xa56) {
    FUN_009a19f0(param_1,in_ECX + 0x90);
    return;
  }
  FUN_009a2620(param_1,param_2);
  return;
}

