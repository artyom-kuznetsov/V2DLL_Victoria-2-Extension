// FUN_0086dc90 @ 0086dc90 body=[[0086dc90, 0086dceb]]


void FUN_0086dc90(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_1;
  lua_pushstring(param_1,&DAT_00e29554);
  lua_pushstring(param_1,&DAT_00ded950);
  lua_pushstring(param_1,param_2);
  lua_pushstring(param_1,&DAT_00defdf4);
  param_1 = param_1 & 0xffffff00;
  param_2 = param_2 & 0xffffff00;
  FUN_00870690(param_2,param_1);
  lua_pushstring(uVar1,&DAT_00defdfc);
  lua_concat(uVar1,8);
  return;
}

