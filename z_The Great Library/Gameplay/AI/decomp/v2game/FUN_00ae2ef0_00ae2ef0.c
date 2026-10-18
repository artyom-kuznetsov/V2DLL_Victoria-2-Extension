// FUN_00ae2ef0 @ 00ae2ef0 body=[[00ae2ef0, 00ae2fa0]]


void FUN_00ae2ef0(char *param_1,undefined4 param_2,undefined1 param_3)

{
  char cVar1;
  ushort uVar2;
  char *pcVar3;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b37b0f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  *(undefined2 *)(in_ECX + 4) = 0;
  local_4 = 1;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00b137d0(param_1,(int)pcVar3 - (int)(param_1 + 1));
  uVar2 = *(ushort *)(in_ECX + 4);
  *(ushort *)(in_ECX + 4) = (ushort)param_2;
  if (uVar2 < (ushort)param_2) {
    FUN_00ae2fb0(param_2);
    *(undefined1 *)(in_ECX + 5) = param_3;
  }
  else {
    *(undefined1 *)(in_ECX + 5) = param_3;
  }
  ExceptionList = local_c;
  return;
}

