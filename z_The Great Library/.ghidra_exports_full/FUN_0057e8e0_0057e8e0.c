// FUN_0057e8e0 @ 0057e8e0 body=[[0057e8e0, 0057e94c]]


void FUN_0057e8e0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined1 local_c [8];
  
  if (param_2 == 0x2f0) {
    puVar1 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_c,param_1 + 0x22c);
    *(undefined4 *)(in_ECX + 0x3c) = *puVar1;
    *(undefined4 *)(in_ECX + 0x40) = puVar1[1];
    return;
  }
  if (param_2 != 0x36f) {
    FUN_009a2620(param_1,param_2);
    return;
  }
  FUN_009a19f0(param_1,in_ECX + 0x44);
  return;
}

