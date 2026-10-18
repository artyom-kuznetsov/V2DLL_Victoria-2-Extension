// FUN_00401220 @ 00401220 body=[[00401220, 0040124f]]


void FUN_00401220(exception *param_1)

{
  exception *in_ECX;
  
  std::exception::exception(in_ECX,param_1);
  *(undefined ***)in_ECX = std::system_error::vftable;
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined ***)in_ECX = std::ios_base::failure::vftable;
  return;
}

