// FUN_005850b0 @ 005850b0 body=[[005850b0, 0058511b]]


void FUN_005850b0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined1 local_10 [12];
  
  if (param_2 == 0x1ca) {
    FUN_0058a430();
    return;
  }
  if (param_2 != 0x2f0) {
    FUN_009a2620(param_1,param_2);
    return;
  }
  puVar1 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_10,param_1 + 0x22c);
  *(undefined4 *)(in_ECX + 100) = *puVar1;
  *(undefined4 *)(in_ECX + 0x68) = puVar1[1];
  return;
}

