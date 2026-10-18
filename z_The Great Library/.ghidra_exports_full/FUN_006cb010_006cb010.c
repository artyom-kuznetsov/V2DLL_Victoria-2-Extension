// FUN_006cb010 @ 006cb010 body=[[006cb010, 006cb0b2]]


undefined4 * FUN_006cb010(void)

{
  undefined4 uVar1;
  _Container_proxy *p_Var2;
  undefined4 *in_ECX;
  allocator<std::_Container_proxy> local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3ae68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00aa9bd0();
  local_8 = 0;
  uVar1 = FUN_00aabbd0(1);
  *in_ECX = uVar1;
  p_Var2 = (_Container_proxy *)FUN_0061ac10();
  std::_Cons_val<std::allocator<std::_Container_proxy>,std::_Container_proxy,std::_Container_proxy>
            (&local_11,(_Container_proxy *)*in_ECX,p_Var2);
  *(undefined4 **)*in_ECX = in_ECX;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  ExceptionList = local_10;
  return in_ECX;
}

