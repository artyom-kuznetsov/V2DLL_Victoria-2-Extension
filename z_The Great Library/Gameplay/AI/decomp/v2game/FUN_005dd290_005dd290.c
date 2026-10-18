// FUN_005dd290 @ 005dd290 body=[[005dd290, 005dd304]]


void FUN_005dd290(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined1 local_c [8];
  
  if (param_2 == 0x2f0) {
    puVar2 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_c,param_1 + 0x22c);
    *(undefined4 *)(in_ECX + 0x3c) = *puVar2;
    *(undefined4 *)(in_ECX + 0x40) = puVar2[1];
    return;
  }
  if (param_2 != 0x307) {
    FUN_009a2620(param_1,param_2);
    return;
  }
  uVar1 = FUN_00aaf0c5(param_1 + 0x22c);
  *(undefined4 *)(in_ECX + 0x44) = uVar1;
  return;
}

