// FUN_00a50900 @ 00a50900 body=[[00a50900, 00a5099f]]


float10 FUN_00a50900(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  int in_ECX;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  float local_c;
  int local_8;
  
  local_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  local_24 = param_5;
  local_20 = param_6;
  D3DXIntersect(*(undefined4 *)(in_ECX + 0xe0),&local_34,&local_28,&local_8,local_1c,local_18,
                local_14,&local_c,0,local_10);
  if (local_8 == 0) {
    return (float10)DAT_00f092dc;
  }
  return (float10)local_c;
}

