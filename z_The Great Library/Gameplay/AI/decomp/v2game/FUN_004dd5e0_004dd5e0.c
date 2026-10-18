// FUN_004dd5e0 @ 004dd5e0 body=[[004dd5e0, 004dd6a8]]


undefined4 FUN_004dd5e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int unaff_EDI;
  undefined8 uVar3;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  longlong local_1c;
  undefined8 local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  local_2c = 0x8000;
  local_24 = 0x8000;
  local_8 = *(undefined4 *)(*(int *)(unaff_EDI + 0x1d4) + 0xec);
  local_28 = 0;
  local_20 = 0;
  local_c = *(undefined4 *)(*(int *)(unaff_EDI + 0x1d4) + 0xe8);
  uVar1 = *(uint *)(param_1 + 0x128);
  uVar2 = *(uint *)(unaff_EDI + 0x58);
  uVar3 = __alldiv(uVar2 << 0x1e,
                   (((int)uVar2 >> 0x1f) << 0xf | uVar2 >> 0x11) << 0xf | (uVar2 & 0x1ffff) >> 2,
                   uVar1 << 0xf,((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11);
  local_1c = __allmul(uVar3,local_c,local_8);
  local_1c = local_1c >> 0xf;
  local_14 = 0;
  FUN_004dde00(param_1,param_2,param_3,&local_2c,param_4,0x8000,0,0x8000,0);
  return param_2;
}

