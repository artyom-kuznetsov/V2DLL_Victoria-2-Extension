// FUN_009c3400 @ 009c3400 body=[[009c3400, 009c351c] [009c3520, 009c3543]]


void FUN_009c3400(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int *in_ECX;
  
  if ((((in_ECX[0x1c] != 4) && (*(char *)((int)in_ECX + 0x39) == '\0')) &&
      ((char)in_ECX[0xe] != '\0')) && (cVar3 = (**(code **)(*param_1 + 0x30))(), cVar3 != '\0')) {
    in_ECX[0x1c] = 5;
    return;
  }
  if (in_ECX[0x1c] == 5) {
    cVar3 = (**(code **)(*param_1 + 0x30))();
    if (cVar3 != '\0') {
      return;
    }
    if ((in_ECX[0x1c] == 5) && (cVar3 = (**(code **)(*param_1 + 0x30))(), cVar3 == '\0')) {
      in_ECX[0x1c] = 2;
    }
  }
  if ((char)in_ECX[0xe] == '\0') {
    if (in_ECX[0x1c] == 1) {
      (**(code **)(*param_1 + 0x30))();
      in_ECX[0x1c] = 0;
    }
  }
  else {
    cVar3 = (**(code **)(*param_1 + 0x30))();
    if ((cVar3 == '\0') && ((in_ECX[0x1c] == 1 || (in_ECX[0x1c] == 4)))) {
      in_ECX[0x1c] = 2;
      FUN_009ee510();
    }
    if ((*(char *)((int)in_ECX + 0x39) != '\0') &&
       (cVar3 = (**(code **)(*param_1 + 0x30))(), cVar3 != '\0')) {
      in_ECX[0x1c] = 4;
    }
    cVar3 = (**(code **)(*param_1 + 0x30))();
    if (((cVar3 == '\0') && (cVar3 = (**(code **)(*param_1 + 0x34))(), cVar3 == '\0')) &&
       (cVar3 = (**(code **)(*param_1 + 0x2c))(), cVar3 == '\0')) {
      in_ECX[0x1c] = 2;
    }
  }
  cVar3 = (**(code **)(*param_1 + 0x30))();
  if (cVar3 == '\0') {
    in_ECX[0x1c] = 0;
  }
  if (in_ECX[0x1c] == 4) {
    puVar1 = (undefined4 *)in_ECX[0x16];
    while (puVar1 != (undefined4 *)0x0) {
      piVar2 = (int *)*puVar1;
      puVar1 = (undefined4 *)puVar1[2];
      (**(code **)(*piVar2 + 8))();
    }
  }
  (**(code **)(*in_ECX + 0x114))(param_1);
  return;
}

