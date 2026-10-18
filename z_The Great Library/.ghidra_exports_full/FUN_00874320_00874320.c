// FUN_00874320 @ 00874320 body=[[00874320, 008743b3]]


void FUN_00874320(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_c;
  undefined4 local_8;
  
  lua_pushlstring();
  lua_rawget();
  iVar1 = lua_touserdata();
  lua_settop();
  uVar2 = ___RTCastToVoid(param_2);
  local_c = ___RTtypeid(param_2);
  uVar4 = 0;
  local_8 = 0;
  uVar3 = FUN_00aa8280(&local_c);
  FUN_00831e80(&local_c,uVar3,uVar4);
  if ((char)local_8 != '\0') {
    *(undefined4 *)(local_c + 0x10) = *(undefined4 *)(iVar1 + 0x10);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  }
  uVar3 = *(undefined4 *)(local_c + 0x10);
  param_1[1] = uVar2;
  *param_1 = uVar3;
  return;
}

