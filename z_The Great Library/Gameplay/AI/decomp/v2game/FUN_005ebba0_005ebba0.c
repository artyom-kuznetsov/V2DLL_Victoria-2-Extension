// FUN_005ebba0 @ 005ebba0 body=[[005ebba0, 005ebbe1]]


undefined4 * FUN_005ebba0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_005e8a60(param_1);
  *in_ECX = CConChange::vftable;
  FUN_0061ac10();
  FUN_0061ac10();
  *(undefined1 *)(in_ECX + 8) = 0;
  return in_ECX;
}

