// FUN_00b0a910 @ 00b0a910 body=[[00b0a910, 00b0a9a6]]


void FUN_00b0a910(char *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b391c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_4 = 0;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00b137d0(param_1,(int)pcVar2 - (int)(param_1 + 1));
  in_ECX[3] = param_3;
  *(undefined1 *)(in_ECX + 5) = 0;
  if (param_2 == 0) {
    in_ECX[4] = 0xffffffff;
  }
  else {
    uVar3 = FUN_00b157e0(param_2);
    in_ECX[4] = uVar3;
  }
  ExceptionList = local_c;
  return;
}

