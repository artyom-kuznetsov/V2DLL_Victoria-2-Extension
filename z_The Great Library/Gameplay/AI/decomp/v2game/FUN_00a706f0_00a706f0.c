// FUN_00a706f0 @ 00a706f0 body=[[00a706f0, 00a70814]]


void FUN_00a706f0(int *param_1)

{
  int *piVar1;
  char cVar2;
  int *in_ECX;
  undefined4 *puVar3;
  
  if ((char)in_ECX[0xe] == '\0') {
    if ((in_ECX[0x1c] == 1) && (cVar2 = (**(code **)(*param_1 + 0x30))(), cVar2 == '\0')) {
      in_ECX[0x1c] = 0;
    }
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x30))();
    if ((cVar2 == '\0') && ((in_ECX[0x1c] == 1 || (in_ECX[0x1c] == 4)))) {
      puVar3 = (undefined4 *)in_ECX[0x16];
      in_ECX[0x1c] = 2;
      while (puVar3 != (undefined4 *)0x0) {
        piVar1 = (int *)*puVar3;
        puVar3 = (undefined4 *)puVar3[2];
        (**(code **)(*piVar1 + 0xc))();
      }
    }
    cVar2 = (**(code **)(*param_1 + 0x30))();
    if (cVar2 != '\0') {
      in_ECX[0x1c] = 4;
    }
    cVar2 = (**(code **)(*param_1 + 0x30))();
    if (((cVar2 == '\0') && (cVar2 = (**(code **)(*param_1 + 0x34))(), cVar2 == '\0')) &&
       (cVar2 = (**(code **)(*param_1 + 0x2c))(), cVar2 == '\0')) {
      in_ECX[0x1c] = 2;
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x30))();
  if (cVar2 == '\0') {
    puVar3 = (undefined4 *)in_ECX[0x16];
    in_ECX[0x1c] = 0;
    if (puVar3 != (undefined4 *)0x0) {
      do {
        piVar1 = (int *)*puVar3;
        puVar3 = (undefined4 *)puVar3[2];
        (**(code **)(*piVar1 + 0x14))();
      } while (puVar3 != (undefined4 *)0x0);
      (**(code **)(*in_ECX + 0x114))(param_1);
      return;
    }
  }
  else if (in_ECX[0x1c] == 4) {
    puVar3 = (undefined4 *)in_ECX[0x16];
    while (puVar3 != (undefined4 *)0x0) {
      piVar1 = (int *)*puVar3;
      puVar3 = (undefined4 *)puVar3[2];
      (**(code **)(*piVar1 + 0xc))();
    }
  }
  (**(code **)(*in_ECX + 0x114))(param_1);
  return;
}

