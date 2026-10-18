// FUN_0055dff0 @ 0055dff0 body=[[0055dff0, 0055e092]]


void FUN_0055dff0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined1 local_10 [12];
  
  if (param_2 < 0x81d) {
    if (param_2 == 0x81c) {
      FUN_009a1d40();
      return;
    }
    if (param_2 == 0x2f0) {
      puVar1 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_10,param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 8) = *puVar1;
      *(undefined4 *)(in_ECX + 0xc) = puVar1[1];
      return;
    }
    if (param_2 == 0x2fe) {
      FUN_009a1d40();
      return;
    }
  }
  else if (param_2 == 0x836) {
    FUN_009a1bb0(in_ECX + 0x20);
    return;
  }
  FUN_009a0f40();
  return;
}

