// FUN_00a52ff0 @ 00a52ff0 body=[[00a52ff0, 00a530ad]]


float10 FUN_00a52ff0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int in_ECX;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_1c = param_1;
  local_18 = param_2;
  local_14 = param_3;
  local_10 = param_4;
  local_c = param_5;
  local_8 = param_6;
  local_34 = *(undefined4 *)(in_ECX + 0x98);
  local_30 = *(undefined4 *)(in_ECX + 0x9c);
  local_2c = *(undefined4 *)(in_ECX + 0xa0);
  local_28 = *(undefined4 *)(in_ECX + 0x8c);
  local_24 = *(undefined4 *)(in_ECX + 0x90);
  local_20 = *(undefined4 *)(in_ECX + 0x94);
  iVar1 = D3DXBoxBoundProbe(&local_34,&local_28,&local_1c,&local_10);
  if (iVar1 != 0) {
    return (float10)1;
  }
  return (float10)DAT_00f092dc;
}

