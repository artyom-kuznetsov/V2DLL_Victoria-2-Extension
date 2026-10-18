// FUN_00aae288 @ 00aae288 body=[[00aae288, 00aae2a4]]


void FUN_00aae288(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = std::exception::vftable;
  in_ECX[1] = *param_1;
  *(undefined1 *)(in_ECX + 2) = 0;
  return;
}

