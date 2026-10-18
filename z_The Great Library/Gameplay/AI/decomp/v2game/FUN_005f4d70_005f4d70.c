// FUN_005f4d70 @ 005f4d70 body=[[005f4d70, 005f4daf]]


undefined4 *
FUN_005f4d70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 *in_ECX;
  
  FUN_005f3c40(param_1);
  *in_ECX = CStateBuildingChange::vftable;
  in_ECX[4] = param_2;
  in_ECX[5] = param_3;
  *(undefined1 *)(in_ECX + 6) = param_4;
  return in_ECX;
}

