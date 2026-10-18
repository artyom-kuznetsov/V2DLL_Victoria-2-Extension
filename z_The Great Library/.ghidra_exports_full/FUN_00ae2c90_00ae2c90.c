// FUN_00ae2c90 @ 00ae2c90 body=[[00ae2c90, 00ae2d0f]]


void FUN_00ae2c90(char *param_1,undefined1 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b37ab3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  *(undefined2 *)(in_ECX + 4) = 0;
  local_4 = 1;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00b137d0(param_1,(int)pcVar2 - (int)(param_1 + 1));
  *(undefined1 *)(in_ECX + 5) = param_2;
  ExceptionList = local_c;
  return;
}

