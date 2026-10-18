// FUN_00435e70 @ 00435e70 body=[[00435e70, 00435e99]]


void FUN_00435e70(exception *param_1)

{
  exception *in_ECX;
  
  std::exception::exception(in_ECX,param_1);
  *(undefined ***)in_ECX = luabind::cast_failed::vftable;
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}

