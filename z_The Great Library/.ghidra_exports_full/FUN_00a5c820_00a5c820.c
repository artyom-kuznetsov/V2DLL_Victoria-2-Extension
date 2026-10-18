// FUN_00a5c820 @ 00a5c820 body=[[00a5c820, 00a5c82c] [00a5c830, 00a5c8cd]]


void FUN_00a5c820(int param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  char *in_EAX;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  while( true ) {
    while (*param_2 != 0) {
      iVar3 = *param_2;
      iVar4 = _tolower((int)*in_EAX);
      if (iVar4 == *(char *)(iVar3 + 4)) {
        if (in_EAX[1] == '\0') {
          *(undefined4 *)*param_2 = param_3;
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
          return;
        }
        in_EAX = in_EAX + 1;
        param_2 = (int *)(iVar3 + 0x10);
      }
      else if (iVar4 - *(char *)(iVar3 + 4) < 1) {
        param_2 = (int *)(iVar3 + 8);
      }
      else {
        param_2 = (int *)(iVar3 + 0xc);
      }
    }
    puVar2 = (undefined4 *)FUN_00aae9af(0x14);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      cVar1 = *in_EAX;
      *puVar2 = 0;
      iVar3 = _tolower((int)cVar1);
      *(char *)(puVar2 + 1) = (char)iVar3;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
    }
    *param_2 = (int)puVar2;
    if (in_EAX[1] == '\0') break;
    in_EAX = in_EAX + 1;
    param_2 = puVar2 + 4;
  }
  *puVar2 = param_3;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}

