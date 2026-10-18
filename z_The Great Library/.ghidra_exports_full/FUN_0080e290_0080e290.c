// FUN_0080e290 @ 0080e290 body=[[0080e290, 0080e326]]


void FUN_0080e290(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  local_24 = param_5;
  local_20 = param_6;
  local_1c = param_7;
  iVar1 = D3DXIntersect(*(undefined4 *)(param_1 + 0x150),&local_30,&local_24,&param_1,local_18,
                        local_14,local_10,local_8,0,local_c);
  if ((-1 < iVar1) && (param_1 != 0)) {
    return;
  }
  return;
}

