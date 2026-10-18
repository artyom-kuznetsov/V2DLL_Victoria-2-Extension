// FUN_005ba260 @ 005ba260 body=[[005ba260, 005ba291]]


void FUN_005ba260(code *param_1)

{
  undefined4 *in_ECX;
  
  do {
    (*param_1)(*in_ECX);
    if (in_ECX[1] != 0) {
      FUN_005ba260(param_1);
    }
    in_ECX = (undefined4 *)in_ECX[2];
  } while (in_ECX != (undefined4 *)0x0);
  return;
}

