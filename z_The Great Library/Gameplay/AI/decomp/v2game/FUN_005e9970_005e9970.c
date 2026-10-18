// FUN_005e9970 @ 005e9970 body=[[005e9970, 005e99ab]]


undefined4 * FUN_005e9970(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  FUN_005e8a60(param_1);
  *in_ECX = CInventionChange::vftable;
  in_ECX[4] = param_2;
  *(undefined1 *)(in_ECX + 5) = 0;
  *(undefined1 *)((int)in_ECX + 0x15) = 0;
  return in_ECX;
}

