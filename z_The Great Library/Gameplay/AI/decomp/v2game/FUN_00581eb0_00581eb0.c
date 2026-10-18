// FUN_00581eb0 @ 00581eb0 body=[[00581eb0, 00581f1d]]


void FUN_00581eb0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined1 local_10 [12];
  
  if (param_2 == 0x87) {
    FUN_00436e50(param_1,in_ECX + 0x3c);
    return;
  }
  if (param_2 != 0x2f0) {
    FUN_009a2620(param_1,param_2);
    return;
  }
  puVar1 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_10,param_1 + 0x22c);
  *(undefined4 *)(in_ECX + 0x4c) = *puVar1;
  *(undefined4 *)(in_ECX + 0x50) = puVar1[1];
  return;
}

