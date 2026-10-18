// FUN_00921350 @ 00921350 body=[[00921350, 009213a0]]


void FUN_00921350(int param_1,int param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined1 local_10 [12];
  
  if (param_2 != 0x6a) {
    FUN_00911470(param_1,param_2);
    return;
  }
  puVar1 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_10,param_1 + 0x22c);
  *(undefined4 *)(in_ECX + 0x28) = *puVar1;
  *(undefined4 *)(in_ECX + 0x2c) = puVar1[1];
  return;
}

